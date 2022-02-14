
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct niu {TYPE_1__* parent; } ;
struct ethtool_rxnfc {scalar_t__ data; int flow_type; } ;
struct TYPE_2__ {int* tcam_key; int * flow_key; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,size_t*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct niu *VAR_4, struct ethtool_rxnfc *VAR_5)
{
 u64 VAR_6;

 VAR_5->data = 0;

 if (!FUNC_0(VAR_5->flow_type, &VAR_6))
  return -VAR_1;

 if (VAR_4->parent->tcam_key[VAR_6 - VAR_0] &
     VAR_3)
  VAR_5->data = VAR_2;
 else
  VAR_5->data = FUNC_1(VAR_4->parent->flow_key[VAR_6 -
            VAR_0]);
 return 0;
}
