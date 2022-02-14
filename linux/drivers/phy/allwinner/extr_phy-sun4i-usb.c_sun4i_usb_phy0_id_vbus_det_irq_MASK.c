
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_usb_phy_data {int detect; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_3, void *VAR_4)
{
 struct sun4i_usb_phy_data *VAR_5 = VAR_4;


 FUNC_0(VAR_2, &VAR_5->detect, VAR_0);

 return VAR_1;
}
