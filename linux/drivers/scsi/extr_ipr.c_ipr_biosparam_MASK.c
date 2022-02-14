
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_0,
    struct block_device *VAR_1,
    sector_t VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;
 sector_t VAR_6;

 VAR_4 = 128;
 VAR_5 = 32;

 VAR_6 = VAR_2;
 FUNC_0(VAR_6, (128 * 32));


 VAR_3[0] = VAR_4;
 VAR_3[1] = VAR_5;
 VAR_3[2] = VAR_6;

 return 0;
}
