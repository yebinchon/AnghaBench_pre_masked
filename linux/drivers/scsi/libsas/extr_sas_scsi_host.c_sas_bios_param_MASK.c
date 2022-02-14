
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int,int) ;

int FUNC_1(struct scsi_device *VAR_0,
     struct block_device *VAR_1,
     sector_t VAR_2, int *VAR_3)
{
 VAR_3[0] = 255;
 VAR_3[1] = 63;
 FUNC_0(VAR_2, 255*63);
 VAR_3[2] = VAR_2;

 return 0;
}
