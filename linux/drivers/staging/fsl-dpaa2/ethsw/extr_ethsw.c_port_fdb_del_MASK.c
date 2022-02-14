
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int dummy; } ;


 int FUNC_0 (int ,unsigned char const*) ;
 int FUNC_1 (int ,unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct ndmsg *VAR_0, struct nlattr *VAR_1[],
   struct net_device *VAR_2,
   const unsigned char *VAR_3, u16 VAR_4)
{
 if (FUNC_2(VAR_3))
  return FUNC_1(FUNC_3(VAR_2),
          VAR_3);
 else
  return FUNC_0(FUNC_3(VAR_2),
          VAR_3);
}
