
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgiseeq_regs {int dummy; } ;
struct sgiseeq_private {struct sgiseeq_regs* sregs; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct sgiseeq_private*,struct sgiseeq_regs*) ;
 struct sgiseeq_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static inline int FUNC_4(struct net_device *VAR_0)
{
 struct sgiseeq_private *VAR_1 = FUNC_1(VAR_0);
 struct sgiseeq_regs *VAR_2 = VAR_1->sregs;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_0);
 FUNC_3(VAR_0);

 return 0;
}
