
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nand_chip {int controller; } ;
struct marvell_nfc {int dev; int complete; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct marvell_nfc*,int) ;
 int FUNC_4 (struct marvell_nfc*,int ) ;
 int FUNC_5 (struct marvell_nfc*,int ) ;
 int FUNC_6 (unsigned int) ;
 struct marvell_nfc* FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int FUNC_9(struct nand_chip *VAR_3, unsigned int VAR_4)
{
 struct marvell_nfc *VAR_5 = FUNC_7(VAR_3->controller);
 u32 VAR_6;
 int VAR_7;


 if (!VAR_4)
  VAR_4 = VAR_1;

 FUNC_2(&VAR_5->complete);

 FUNC_5(VAR_5, VAR_2);
 VAR_7 = FUNC_8(&VAR_5->complete,
       FUNC_6(VAR_4));
 FUNC_4(VAR_5, VAR_2);
 VAR_6 = FUNC_3(VAR_5, FUNC_0(0) | FUNC_0(1));





 if (VAR_7 && !VAR_6) {
  FUNC_1(VAR_5->dev, "Timeout waiting for RB signal\n");
  return -VAR_0;
 }

 return 0;
}
