
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct scsi_device {int sector_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (struct scsi_device*,unsigned char*,int ,unsigned char*,int,int *,int ,int,int *) ;

__attribute__((used)) static void FUNC_5(struct se_device *VAR_5,
  struct scsi_device *VAR_6)
{
 unsigned char VAR_7[VAR_3], *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(12, VAR_1);
 if (!VAR_8)
  goto out_free;

 FUNC_3(VAR_7, 0, VAR_3);
 VAR_7[0] = VAR_4;
 VAR_7[4] = 0x0c;

 VAR_9 = FUNC_4(VAR_6, VAR_7, VAR_0, VAR_8, 12, ((void*)0),
   VAR_2, 1, ((void*)0));
 if (VAR_9)
  goto out_free;




 VAR_6->sector_size = FUNC_0(&VAR_8[9]);
out_free:
 if (!VAR_6->sector_size)
  VAR_6->sector_size = 1024;

 FUNC_1(VAR_8);
}
