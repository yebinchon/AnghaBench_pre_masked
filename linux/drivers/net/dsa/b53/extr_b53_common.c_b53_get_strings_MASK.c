
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ u32 ;
struct phy_device {int dummy; } ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_mib_desc {int name; } ;
struct b53_device {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct b53_mib_desc* FUNC_0 (struct b53_device*) ;
 unsigned int FUNC_1 (struct b53_device*) ;
 struct phy_device* FUNC_2 (struct dsa_switch*,int) ;
 int FUNC_3 (struct phy_device*,int *) ;
 int FUNC_4 (int *,int ,unsigned int) ;

void FUNC_5(struct dsa_switch *VAR_3, int VAR_4, u32 VAR_5,
       uint8_t *VAR_6)
{
 struct b53_device *VAR_7 = VAR_3->priv;
 const struct b53_mib_desc *VAR_8 = FUNC_0(VAR_7);
 unsigned int VAR_9 = FUNC_1(VAR_7);
 struct phy_device *VAR_10;
 unsigned int VAR_11;

 if (VAR_5 == VAR_2) {
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
   FUNC_4(VAR_6 + VAR_11 * VAR_0,
    VAR_8[VAR_11].name, VAR_0);
 } else if (VAR_5 == VAR_1) {
  VAR_10 = FUNC_2(VAR_3, VAR_4);
  if (!VAR_10)
   return;

  FUNC_3(VAR_10, VAR_6);
 }
}
