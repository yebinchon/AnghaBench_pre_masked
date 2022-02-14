
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct net_device** ndev; } ;
struct octeon_device {int pf_num; TYPE_1__ vf_rep_list; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static struct net_device *
FUNC_0(struct octeon_device *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = VAR_0 + 1;
 int VAR_5 = VAR_4 - 1;

 if (VAR_2 <= VAR_1->pf_num * VAR_4 ||
     VAR_2 >= VAR_1->pf_num * VAR_4 + VAR_4)
  return ((void*)0);




 VAR_3 = (VAR_2 & VAR_5) - 1;

 return VAR_1->vf_rep_list.ndev[VAR_3];
}
