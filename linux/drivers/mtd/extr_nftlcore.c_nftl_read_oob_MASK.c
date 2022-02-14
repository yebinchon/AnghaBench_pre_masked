
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mtd_oob_ops {int ooboffs; size_t ooblen; size_t oobretlen; int * datbuf; int * oobbuf; int mode; } ;
struct mtd_info {int writesize; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int,struct mtd_oob_ops*) ;

int FUNC_1(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
    size_t *VAR_4, uint8_t *VAR_5)
{
 loff_t VAR_6 = VAR_1->writesize - 1;
 struct mtd_oob_ops VAR_7;
 int VAR_8;

 VAR_7.mode = VAR_0;
 VAR_7.ooboffs = VAR_2 & VAR_6;
 VAR_7.ooblen = VAR_3;
 VAR_7.oobbuf = VAR_5;
 VAR_7.datbuf = ((void*)0);

 VAR_8 = FUNC_0(VAR_1, VAR_2 & ~VAR_6, &VAR_7);
 *VAR_4 = VAR_7.oobretlen;
 return VAR_8;
}
