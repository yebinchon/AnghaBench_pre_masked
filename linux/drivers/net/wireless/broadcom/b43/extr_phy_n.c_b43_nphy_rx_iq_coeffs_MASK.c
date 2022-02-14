
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;
struct b43_phy_n_iq_comp {void* b1; void* a1; void* b0; void* a0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct b43_wldev*,int ) ;
 int FUNC_1 (struct b43_wldev*,int ,void*) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_4, bool VAR_5,
     struct b43_phy_n_iq_comp *VAR_6)
{
 if (VAR_5) {
  FUNC_1(VAR_4, VAR_0, VAR_6->a0);
  FUNC_1(VAR_4, VAR_1, VAR_6->b0);
  FUNC_1(VAR_4, VAR_2, VAR_6->a1);
  FUNC_1(VAR_4, VAR_3, VAR_6->b1);
 } else {
  VAR_6->a0 = FUNC_0(VAR_4, VAR_0);
  VAR_6->b0 = FUNC_0(VAR_4, VAR_1);
  VAR_6->a1 = FUNC_0(VAR_4, VAR_2);
  VAR_6->b1 = FUNC_0(VAR_4, VAR_3);
 }
}
