
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nphy_iq_comp {void* b1; void* a1; void* b0; void* a0; } ;
struct brcms_phy {int dummy; } ;


 void* FUNC_0 (struct brcms_phy*,int) ;
 int FUNC_1 (struct brcms_phy*,int,void*) ;

void
FUNC_2(struct brcms_phy *VAR_0, u8 VAR_1,
     struct nphy_iq_comp *VAR_2)
{
 if (VAR_1) {
  FUNC_1(VAR_0, 0x9a, VAR_2->a0);
  FUNC_1(VAR_0, 0x9b, VAR_2->b0);
  FUNC_1(VAR_0, 0x9c, VAR_2->a1);
  FUNC_1(VAR_0, 0x9d, VAR_2->b1);
 } else {
  VAR_2->a0 = FUNC_0(VAR_0, 0x9a);
  VAR_2->b0 = FUNC_0(VAR_0, 0x9b);
  VAR_2->a1 = FUNC_0(VAR_0, 0x9c);
  VAR_2->b1 = FUNC_0(VAR_0, 0x9d);
 }
}
