
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {size_t chipsize; int options; int (* wait ) (struct mtd_info*,int ) ;int (* command ) (struct mtd_info*,int ,int ,int ) ;} ;
struct mtd_info {struct onenand_chip* priv; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct onenand_chip*) ;
 int FUNC_1 (struct mtd_info*) ;
 int FUNC_2 (struct mtd_info*,int,size_t,int ) ;
 int FUNC_3 (struct mtd_info*,int ,int ,int ) ;
 int FUNC_4 (struct mtd_info*,int ) ;

__attribute__((used)) static void FUNC_5(struct mtd_info *VAR_4)
{
 struct onenand_chip *VAR_5 = VAR_4->priv;
 loff_t VAR_6 = 0;
 size_t VAR_7 = VAR_5->chipsize;

 if (VAR_5->options & VAR_3) {

  VAR_5->command(VAR_4, VAR_2, 0, 0);


  VAR_5->wait(VAR_4, VAR_0);


  if (!FUNC_0(VAR_5)) {
   FUNC_1(VAR_4);
   return;
  }


  VAR_6 = VAR_5->chipsize >> 1;
  VAR_7 = VAR_5->chipsize >> 1;
 }

 FUNC_2(VAR_4, VAR_6, VAR_7, VAR_1);

 FUNC_1(VAR_4);
}
