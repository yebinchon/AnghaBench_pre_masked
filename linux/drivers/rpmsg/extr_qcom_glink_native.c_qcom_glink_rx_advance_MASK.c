
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_glink {TYPE_1__* rx_pipe; } ;
struct TYPE_2__ {int (* advance ) (TYPE_1__*,size_t) ;} ;


 int FUNC_0 (TYPE_1__*,size_t) ;

__attribute__((used)) static void FUNC_1(struct qcom_glink *VAR_0, size_t VAR_1)
{
 VAR_0->rx_pipe->advance(VAR_0->rx_pipe, VAR_1);
}
