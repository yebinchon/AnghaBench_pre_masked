
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int nutrs; } ;
struct scsi_device {int host; } ;


 int FUNC_0 (struct scsi_device*,int) ;
 struct ufs_hba* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_0, int VAR_1)
{
 struct ufs_hba *VAR_2 = FUNC_1(VAR_0->host);

 if (VAR_1 > VAR_2->nutrs)
  VAR_1 = VAR_2->nutrs;
 return FUNC_0(VAR_0, VAR_1);
}
