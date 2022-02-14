
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {scalar_t__ chip_id; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_7)
{
 struct ravb_private *VAR_8 = FUNC_0(VAR_7);

 if (VAR_8->chip_id == VAR_6) {
  FUNC_1(VAR_7, VAR_0, VAR_4, VAR_5);

  FUNC_1(VAR_7, VAR_0, VAR_1, VAR_2);
 } else {
  FUNC_1(VAR_7, VAR_0, VAR_4, VAR_5 |
       VAR_3 | VAR_2);
 }
}
