
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee802154_hw {struct atusb* priv; } ;
struct atusb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct atusb*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ieee802154_hw *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct atusb *VAR_4 = VAR_1->priv;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
