
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ map_type; } ;
struct bpf_htab {TYPE_1__ map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(const struct bpf_htab *VAR_2)
{
 return VAR_2->map.map_type == VAR_1 ||
  VAR_2->map.map_type == VAR_0;
}
