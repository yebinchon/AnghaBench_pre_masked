
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee802154_hw {struct atusb* priv; } ;
struct atusb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atusb*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ieee802154_hw *VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 struct atusb *VAR_7 = VAR_3->priv;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_2, VAR_4);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_0, VAR_5);
 if (VAR_8)
  return VAR_8;

 return FUNC_0(VAR_7, VAR_1, VAR_6);
}
