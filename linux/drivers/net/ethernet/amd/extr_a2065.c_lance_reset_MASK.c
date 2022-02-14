
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lance_regs {int rdp; int rap; } ;
struct lance_private {struct lance_regs* ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lance_private*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct lance_private*) ;
 int FUNC_3 (struct net_device*,char*,int) ;
 struct lance_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static inline int FUNC_7(struct net_device *VAR_2)
{
 struct lance_private *VAR_3 = FUNC_4(VAR_2);
 volatile struct lance_regs *VAR_4 = VAR_3->ll;
 int VAR_5;


 VAR_4->rap = VAR_1;
 VAR_4->rdp = VAR_0;

 FUNC_2(VAR_3);

 FUNC_1(VAR_2);
 FUNC_6(VAR_2);
 FUNC_5(VAR_2);

 VAR_5 = FUNC_0(VAR_3);
 FUNC_3(VAR_2, "Lance restart=%d\n", VAR_5);

 return VAR_5;
}
