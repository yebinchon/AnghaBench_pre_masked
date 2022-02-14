
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int inquiry; } ;
struct clariion_dh_data {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct scsi_device*,int ) ;
 int FUNC_1 (int ,struct scsi_device*,char*,int ,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_5,
    struct clariion_dh_data *VAR_6)
{
 int VAR_7 = VAR_4;
 char *VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_5->inquiry);
 if (!VAR_8) {
  VAR_7 = VAR_3;
  goto out;
 }




 if (!FUNC_2(VAR_8) || !FUNC_3(VAR_8, "FC",2))
  VAR_6->flags |= VAR_1;

 FUNC_1(VAR_2, VAR_5,
      "%s: detected Clariion %s, flags %x\n",
      VAR_0, VAR_8, VAR_6->flags);
out:
 return VAR_7;
}
