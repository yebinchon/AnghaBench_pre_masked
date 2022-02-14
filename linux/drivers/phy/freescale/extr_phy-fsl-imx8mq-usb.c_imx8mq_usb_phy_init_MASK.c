
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy {int dummy; } ;
struct imx8mq_usb_phy {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct imx8mq_usb_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_10)
{
 struct imx8mq_usb_phy *VAR_11 = FUNC_0(VAR_10);
 u32 VAR_12;

 VAR_12 = FUNC_1(VAR_11->base + VAR_2);
 VAR_12 &= ~(VAR_7 | VAR_6 |
     VAR_4);
 VAR_12 |= VAR_5 | VAR_3;
 FUNC_2(VAR_12, VAR_11->base + VAR_2);

 VAR_12 = FUNC_1(VAR_11->base + VAR_0);
 VAR_12 |= VAR_1;
 FUNC_2(VAR_12, VAR_11->base + VAR_0);

 VAR_12 = FUNC_1(VAR_11->base + VAR_8);
 VAR_12 |= VAR_9;
 FUNC_2(VAR_12, VAR_11->base + VAR_8);

 VAR_12 = FUNC_1(VAR_11->base + VAR_2);
 VAR_12 &= ~(VAR_5 | VAR_3);
 FUNC_2(VAR_12, VAR_11->base + VAR_2);

 return 0;
}
