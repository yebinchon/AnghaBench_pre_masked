
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct bcm_sf2_priv {int dummy; } ;
struct b53_device {struct bcm_sf2_priv* priv; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bcm_sf2_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct b53_device *VAR_0, u8 VAR_1, u8 VAR_2,
    u64 VAR_3)
{
 struct bcm_sf2_priv *VAR_4 = VAR_0->priv;

 FUNC_1(VAR_4, VAR_3, FUNC_0(VAR_1, VAR_2));

 return 0;
}
