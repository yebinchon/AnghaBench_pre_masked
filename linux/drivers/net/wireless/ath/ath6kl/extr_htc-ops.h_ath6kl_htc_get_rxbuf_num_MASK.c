
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct htc_target {TYPE_3__* dev; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;
struct TYPE_6__ {TYPE_2__* ar; } ;
struct TYPE_5__ {TYPE_1__* htc_ops; } ;
struct TYPE_4__ {int (* get_rxbuf_num ) (struct htc_target*,int) ;} ;


 int FUNC_0 (struct htc_target*,int) ;

__attribute__((used)) static inline int FUNC_1(struct htc_target *VAR_0,
        enum htc_endpoint_id VAR_1)
{
 return VAR_0->dev->ar->htc_ops->get_rxbuf_num(VAR_0, VAR_1);
}
