
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(struct scsi_device *VAR_0,
    struct block_device *VAR_1,
    sector_t VAR_2, int *VAR_3)
{
 int VAR_4;

 FUNC_0(FUNC_1("SYM53C500_biosparm called\n"));

 VAR_4 = VAR_2;
 VAR_3[0] = 64;
 VAR_3[1] = 32;
 VAR_3[2] = VAR_4 >> 11;
 if (VAR_3[2] > 1024) {
  VAR_3[0] = 255;
  VAR_3[1] = 63;
  VAR_3[2] = VAR_4 / (255 * 63);
 }
 return 0;
}
