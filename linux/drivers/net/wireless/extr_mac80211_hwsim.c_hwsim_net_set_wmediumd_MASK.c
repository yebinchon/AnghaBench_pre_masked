
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;
struct hwsim_net {int wmediumd; } ;


 int VAR_0 ;
 struct hwsim_net* FUNC_0 (struct net*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct net *VAR_1, u32 VAR_2)
{
 struct hwsim_net *VAR_3 = FUNC_0(VAR_1, VAR_0);

 VAR_3->wmediumd = VAR_2;
}
