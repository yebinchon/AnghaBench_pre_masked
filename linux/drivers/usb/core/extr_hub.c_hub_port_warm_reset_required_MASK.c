
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hub {int warm_reset_bits; int hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ) ;

__attribute__((used)) static bool FUNC_2(struct usb_hub *VAR_3, int VAR_4,
  u16 VAR_5)
{
 u16 VAR_6;

 if (!FUNC_0(VAR_3->hdev))
  return 0;

 if (FUNC_1(VAR_4, VAR_3->warm_reset_bits))
  return 1;

 VAR_6 = VAR_5 & VAR_0;
 return VAR_6 == VAR_2
  || VAR_6 == VAR_1;
}
