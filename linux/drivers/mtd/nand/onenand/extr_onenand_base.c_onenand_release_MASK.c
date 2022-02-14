
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int options; struct bbm_info* oob_buf; struct bbm_info* verify_buf; struct bbm_info* page_buf; struct bbm_info* bbm; } ;
struct mtd_info {struct bbm_info* eraseregions; struct onenand_chip* priv; } ;
struct bbm_info {struct bbm_info* bbt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bbm_info*) ;
 int FUNC_1 (struct mtd_info*) ;

void FUNC_2(struct mtd_info *VAR_2)
{
 struct onenand_chip *VAR_3 = VAR_2->priv;


 FUNC_1(VAR_2);


 if (VAR_3->bbm) {
  struct bbm_info *VAR_4 = VAR_3->bbm;
  FUNC_0(VAR_4->bbt);
  FUNC_0(VAR_3->bbm);
 }

 if (VAR_3->options & VAR_1) {
  FUNC_0(VAR_3->page_buf);



 }
 if (VAR_3->options & VAR_0)
  FUNC_0(VAR_3->oob_buf);
 FUNC_0(VAR_2->eraseregions);
}
