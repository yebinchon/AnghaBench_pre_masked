
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_glink {TYPE_1__* rx_pipe; } ;
struct TYPE_2__ {size_t (* avail ) (TYPE_1__*) ;} ;


 size_t FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static size_t FUNC_1(struct qcom_glink *VAR_0)
{
 return VAR_0->rx_pipe->avail(VAR_0->rx_pipe);
}
