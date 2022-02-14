
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline u16 FUNC_3(struct net_device *VAR_0,
    struct net_device **VAR_1)
{
 if (FUNC_0(VAR_0)) {
  *VAR_1 = FUNC_1(VAR_0);
  return FUNC_2(VAR_0);
 }
 *VAR_1 = VAR_0;
 return 0;
}
