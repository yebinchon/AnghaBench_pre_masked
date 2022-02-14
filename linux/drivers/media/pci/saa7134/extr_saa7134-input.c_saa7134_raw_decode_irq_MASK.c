
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {struct saa7134_card_ir* remote; } ;
struct saa7134_card_ir {int mask_keydown; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct saa7134_dev *VAR_3)
{
 struct saa7134_card_ir *VAR_4 = VAR_3->remote;
 int VAR_5;


 FUNC_1(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1);
 VAR_5 = FUNC_2(VAR_2 >> 2) & VAR_4->mask_keydown;
 FUNC_0(VAR_3->remote->dev, !VAR_5);

 return 1;
}
