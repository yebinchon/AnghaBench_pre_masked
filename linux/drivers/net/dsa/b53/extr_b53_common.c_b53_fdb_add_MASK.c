
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b53_device*,int ,int,unsigned char const*,int ,int) ;
 scalar_t__ FUNC_1 (struct b53_device*) ;
 scalar_t__ FUNC_2 (struct b53_device*) ;

int FUNC_3(struct dsa_switch *VAR_1, int VAR_2,
  const unsigned char *VAR_3, u16 VAR_4)
{
 struct b53_device *VAR_5 = VAR_1->priv;




 if (FUNC_1(VAR_5) || FUNC_2(VAR_5))
  return -VAR_0;

 return FUNC_0(VAR_5, 0, VAR_2, VAR_3, VAR_4, 1);
}
