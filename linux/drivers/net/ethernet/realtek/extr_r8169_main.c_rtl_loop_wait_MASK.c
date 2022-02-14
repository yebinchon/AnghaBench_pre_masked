
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_cond {int (* check ) (struct rtl8169_private*) ;int msg; } ;
struct rtl8169_private {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,int ,int ,char*,int ,int,int,unsigned int) ;
 int FUNC_1 (struct rtl8169_private*) ;

__attribute__((used)) static bool FUNC_2(struct rtl8169_private *VAR_1, const struct rtl_cond *VAR_2,
     void (*VAR_3)(unsigned int), unsigned int VAR_4, int VAR_5,
     bool VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if (VAR_2->check(VAR_1) == VAR_6)
   return 1;
  VAR_3(VAR_4);
 }
 FUNC_0(VAR_1, VAR_0, VAR_1->dev, "%s == %d (loop: %d, delay: %d).\n",
    VAR_2->msg, !VAR_6, VAR_5, VAR_4);
 return 0;
}
