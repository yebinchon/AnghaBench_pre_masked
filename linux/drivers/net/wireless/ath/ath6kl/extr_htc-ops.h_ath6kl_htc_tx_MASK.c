
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct htc_target {TYPE_3__* dev; } ;
struct htc_packet {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ar; } ;
struct TYPE_5__ {TYPE_1__* htc_ops; } ;
struct TYPE_4__ {int (* tx ) (struct htc_target*,struct htc_packet*) ;} ;


 int FUNC_0 (struct htc_target*,struct htc_packet*) ;

__attribute__((used)) static inline int FUNC_1(struct htc_target *VAR_0,
    struct htc_packet *VAR_1)
{
 return VAR_0->dev->ar->htc_ops->tx(VAR_0, VAR_1);
}
