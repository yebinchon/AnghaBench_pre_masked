
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ip_version; scalar_t__ ethertype; } ;
struct TYPE_3__ {int ip_version; scalar_t__ ethertype; } ;
struct mlx5dr_match_param {TYPE_2__ inner; TYPE_1__ outer; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct mlx5dr_match_param *VAR_1)
{
 return (VAR_1->outer.ip_version == 6 ||
  VAR_1->inner.ip_version == 6 ||
  VAR_1->outer.ethertype == VAR_0 ||
  VAR_1->inner.ethertype == VAR_0);
}
