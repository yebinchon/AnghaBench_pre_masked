
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macb {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int FUNC_0 (struct macb*,int) ;
 int FUNC_1 (struct macb*) ;

__attribute__((used)) static inline void FUNC_2(struct macb *VAR_1,
        netdev_features_t VAR_2)
{
 if (!FUNC_1(VAR_1))
  return;

 FUNC_0(VAR_1, !!(VAR_2 & VAR_0));
}
