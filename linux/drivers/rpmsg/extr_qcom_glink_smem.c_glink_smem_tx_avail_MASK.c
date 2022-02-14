
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qcom_glink_pipe {int dummy; } ;
struct TYPE_2__ {scalar_t__ length; } ;
struct glink_smem_pipe {TYPE_1__ native; int * tail; int * head; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct glink_smem_pipe* FUNC_1 (struct qcom_glink_pipe*) ;

__attribute__((used)) static size_t FUNC_2(struct qcom_glink_pipe *VAR_2)
{
 struct glink_smem_pipe *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 VAR_4 = FUNC_0(*VAR_3->head);
 VAR_5 = FUNC_0(*VAR_3->tail);

 if (VAR_5 <= VAR_4)
  VAR_6 = VAR_3->native.length - VAR_4 + VAR_5;
 else
  VAR_6 = VAR_5 - VAR_4;

 if (VAR_6 < (VAR_0 + VAR_1))
  VAR_6 = 0;
 else
  VAR_6 -= VAR_0 + VAR_1;

 return VAR_6;
}
