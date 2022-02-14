
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_0, struct block_device * VAR_1,
      sector_t VAR_2, int *VAR_3)
{
 sector_t VAR_4 = VAR_2;
 sector_t VAR_5 = VAR_4;
 int VAR_6, VAR_7;




 VAR_6 = 0xff;
 VAR_7 = 0x3f;
 FUNC_0(VAR_5, VAR_6 * VAR_7);
 if ((sector_t)(VAR_5 + 1) * VAR_6 * VAR_7 < VAR_4)
  VAR_5 = 0xffff;

 VAR_3[0] = VAR_6;
 VAR_3[1] = VAR_7;
 VAR_3[2] = (int)VAR_5;

 return 0;
}
