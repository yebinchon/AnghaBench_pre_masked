
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int port_id; } ;
struct TYPE_4__ {TYPE_1__ port_info; } ;
struct metadata_dst {scalar_t__ type; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 struct metadata_dst* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_1(struct sk_buff *VAR_1)
{
 struct metadata_dst *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2 || VAR_2->type != VAR_0)
  return 0;

 return VAR_2->u.port_info.port_id;
}
