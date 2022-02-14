
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct hwsim_net {scalar_t__ netgroup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ) ;
 struct hwsim_net* FUNC_1 (struct net*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct net *VAR_4)
{
 struct hwsim_net *VAR_5 = FUNC_1(VAR_4, VAR_2);

 VAR_5->netgroup = FUNC_0(&VAR_3,
          0, 0, VAR_1);
 return VAR_5->netgroup >= 0 ? 0 : -VAR_0;
}
