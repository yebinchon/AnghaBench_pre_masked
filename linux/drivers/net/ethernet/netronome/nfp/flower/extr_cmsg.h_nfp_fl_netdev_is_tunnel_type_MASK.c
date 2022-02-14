
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef enum nfp_flower_tun_type { ____Placeholder_nfp_flower_tun_type } nfp_flower_tun_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline bool
FUNC_3(struct net_device *VAR_3,
        enum nfp_flower_tun_type VAR_4)
{
 if (FUNC_2(VAR_3))
  return VAR_4 == VAR_2;
 if (FUNC_1(VAR_3))
  return VAR_4 == VAR_1;
 if (FUNC_0(VAR_3))
  return VAR_4 == VAR_0;

 return 0;
}
