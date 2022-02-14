
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {struct b53_device* priv; } ;
struct bcm_sf2_priv {int dummy; } ;
struct b53_device {struct bcm_sf2_priv* priv; } ;



__attribute__((used)) static inline struct bcm_sf2_priv *FUNC_0(struct dsa_switch *VAR_0)
{
 struct b53_device *VAR_1 = VAR_0->priv;

 return VAR_1->priv;
}
