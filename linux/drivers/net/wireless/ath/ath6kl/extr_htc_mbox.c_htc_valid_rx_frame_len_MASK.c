
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct htc_target {TYPE_2__* dev; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;
struct TYPE_4__ {TYPE_1__* ar; } ;
struct TYPE_3__ {int ctrl_ep; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct htc_target *VAR_2,
       enum htc_endpoint_id VAR_3, int VAR_4)
{
 return (VAR_3 == VAR_2->dev->ar->ctrl_ep) ?
  VAR_4 <= VAR_1 : VAR_4 <= VAR_0;
}
