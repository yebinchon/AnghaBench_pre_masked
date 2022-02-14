
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct miphy28lp_phy {scalar_t__ pipebase; int base; struct miphy28lp_dev* phydev; } ;
struct miphy28lp_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct miphy28lp_phy*) ;
 int FUNC_3 (struct miphy28lp_phy*,int ) ;
 int FUNC_4 (struct miphy28lp_phy*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct miphy28lp_phy *VAR_2)
{
 struct miphy28lp_dev *VAR_3 = VAR_2->phydev;
 int VAR_4;

 if ((!VAR_2->base) || (!VAR_2->pipebase))
  return -VAR_0;

 FUNC_1(VAR_3->dev, "usb3-up mode, addr 0x%p\n", VAR_2->base);


 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, "USB3 phy setup failed\n");
  return VAR_4;
 }


 FUNC_2(VAR_2);


 FUNC_5(0x68, VAR_2->pipebase + 0x23);
 FUNC_5(0x61, VAR_2->pipebase + 0x24);
 FUNC_5(0x68, VAR_2->pipebase + 0x26);
 FUNC_5(0x61, VAR_2->pipebase + 0x27);
 FUNC_5(0x18, VAR_2->pipebase + 0x29);
 FUNC_5(0x61, VAR_2->pipebase + 0x2a);


 FUNC_5(0X67, VAR_2->pipebase + 0x68);
 FUNC_5(0x0d, VAR_2->pipebase + 0x69);
 FUNC_5(0X67, VAR_2->pipebase + 0x6a);
 FUNC_5(0X0d, VAR_2->pipebase + 0x6b);
 FUNC_5(0X67, VAR_2->pipebase + 0x6c);
 FUNC_5(0X0d, VAR_2->pipebase + 0x6d);
 FUNC_5(0X67, VAR_2->pipebase + 0x6e);
 FUNC_5(0X0d, VAR_2->pipebase + 0x6f);

 return FUNC_4(VAR_2);
}
