
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dsa_switch {struct b53_device* priv; } ;
struct b53_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b53_device*,int ,int ,int*) ;
 int FUNC_2 (struct dsa_switch*,int,int) ;

void FUNC_3(struct dsa_switch *VAR_2, int VAR_3)
{
 struct b53_device *VAR_4 = VAR_2->priv;
 bool VAR_5;
 u16 VAR_6;

 FUNC_1(VAR_4, VAR_1, VAR_0, &VAR_6);
 VAR_5 = !!(VAR_6 & FUNC_0(VAR_3));
 FUNC_2(VAR_2, VAR_3, VAR_5);
}
