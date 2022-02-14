
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_dev {int priv_dev; int (* rcv_func ) (int ,int ,struct phy_dev*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct phy_dev*,int ) ;

void FUNC_1(struct phy_dev *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->rcv_func(VAR_3->priv_dev,
    VAR_2, VAR_3, VAR_1);
}
