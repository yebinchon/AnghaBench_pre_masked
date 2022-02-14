
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fsg_lun {int blksize; int num_sectors; } ;
struct fsg_common {struct fsg_lun* curlun; } ;
struct fsg_buffhd {scalar_t__ buf; } ;


 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(struct fsg_common *VAR_0,
   struct fsg_buffhd *VAR_1)
{
 struct fsg_lun *VAR_2 = VAR_0->curlun;
 u8 *VAR_3 = (u8 *) VAR_1->buf;

 VAR_3[0] = VAR_3[1] = VAR_3[2] = 0;
 VAR_3[3] = 8;
 VAR_3 += 4;

 FUNC_0(VAR_2->num_sectors, &VAR_3[0]);

 FUNC_0(VAR_2->blksize, &VAR_3[4]);
 VAR_3[4] = 0x02;
 return 12;
}
