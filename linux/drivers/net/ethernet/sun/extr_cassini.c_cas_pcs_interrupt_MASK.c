
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct cas {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cas*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
        struct cas *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_3->regs + VAR_1);

 if ((VAR_5 & VAR_0) == 0)
  return 0;
 return FUNC_0(VAR_3);
}
