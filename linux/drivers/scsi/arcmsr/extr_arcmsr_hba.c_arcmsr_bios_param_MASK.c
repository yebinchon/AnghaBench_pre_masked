
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (struct block_device*) ;
 int FUNC_2 (unsigned char*,int,int*,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_0,
  struct block_device *VAR_1, sector_t VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned char *VAR_9;

 VAR_9 = FUNC_1(VAR_1);
 if (VAR_9) {
  VAR_4 = FUNC_2(VAR_9, VAR_2, &VAR_3[2], &VAR_3[0], &VAR_3[1]);
  FUNC_0(VAR_9);
  if (VAR_4 != -1)
   return VAR_4;
 }
 VAR_8 = VAR_2;
 VAR_5 = 64;
 VAR_6 = 32;
 VAR_7 = VAR_8 / (VAR_5 * VAR_6);
 if (VAR_7 > 1024) {
  VAR_5 = 255;
  VAR_6 = 63;
  VAR_7 = VAR_8 / (VAR_5 * VAR_6);
 }
 VAR_3[0] = VAR_5;
 VAR_3[1] = VAR_6;
 VAR_3[2] = VAR_7;
 return 0;
}
