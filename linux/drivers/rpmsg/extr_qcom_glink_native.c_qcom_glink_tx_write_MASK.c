
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_glink {TYPE_1__* tx_pipe; } ;
struct TYPE_2__ {int (* write ) (TYPE_1__*,void const*,size_t,void const*,size_t) ;} ;


 int FUNC_0 (TYPE_1__*,void const*,size_t,void const*,size_t) ;

__attribute__((used)) static void FUNC_1(struct qcom_glink *VAR_0,
    const void *VAR_1, size_t VAR_2,
    const void *VAR_3, size_t VAR_4)
{
 VAR_0->tx_pipe->write(VAR_0->tx_pipe, VAR_1, VAR_2, VAR_3, VAR_4);
}
