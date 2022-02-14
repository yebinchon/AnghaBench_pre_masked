
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qcom_glink_pipe {int dummy; } ;
struct TYPE_2__ {scalar_t__ length; } ;
struct glink_smem_pipe {int * tail; TYPE_1__ native; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 struct glink_smem_pipe* FUNC_2 (struct qcom_glink_pipe*) ;

__attribute__((used)) static void FUNC_3(struct qcom_glink_pipe *VAR_0,
      size_t VAR_1)
{
 struct glink_smem_pipe *VAR_2 = FUNC_2(VAR_0);
 u32 VAR_3;

 VAR_3 = FUNC_1(*VAR_2->tail);

 VAR_3 += VAR_1;
 if (VAR_3 > VAR_2->native.length)
  VAR_3 -= VAR_2->native.length;

 *VAR_2->tail = FUNC_0(VAR_3);
}
