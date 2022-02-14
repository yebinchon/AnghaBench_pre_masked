
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_0, struct block_device *VAR_1,
       sector_t VAR_2, int VAR_3[])
{
 if (VAR_2 >= 0x200000) {
  VAR_3[0] = 255;
  VAR_3[1] = 63;
 } else {
  VAR_3[0] = 64;
  VAR_3[1] = 32;
 }
 VAR_3[2] = FUNC_0(VAR_2, VAR_3[0] * VAR_3[1]);

 return 0;
}
