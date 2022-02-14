
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {int dummy; } ;


 int FUNC_0 (struct b53_device*,int ,int,unsigned char const*,int ,int) ;

int FUNC_1(struct dsa_switch *VAR_0, int VAR_1,
  const unsigned char *VAR_2, u16 VAR_3)
{
 struct b53_device *VAR_4 = VAR_0->priv;

 return FUNC_0(VAR_4, 0, VAR_1, VAR_2, VAR_3, 0);
}
