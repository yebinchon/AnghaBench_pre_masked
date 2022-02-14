
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htc_target {int rx_lock; TYPE_1__* endpoint; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;
struct TYPE_2__ {int rx_bufq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct htc_target *VAR_0,
      enum htc_endpoint_id VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->rx_lock);
 VAR_2 = FUNC_0(&(VAR_0->endpoint[VAR_1].rx_bufq));
 FUNC_2(&VAR_0->rx_lock);

 return VAR_2;
}
