
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtd_oob_ops {scalar_t__ ooblen; scalar_t__ oobretlen; int * oobbuf; int mode; } ;
struct mtd_info {scalar_t__ oobsize; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, loff_t VAR_2, u8 *VAR_3)
{
 struct mtd_oob_ops VAR_4 = { };
 int VAR_5;

 VAR_4.mode = VAR_0;
 VAR_4.ooblen = VAR_1->oobsize;
 VAR_4.oobbuf = VAR_3;

 VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_4);
 if (VAR_5 != 0 || VAR_1->oobsize != VAR_4.oobretlen)
  return -1;

 return 0;
}
