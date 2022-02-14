
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_glink_pipe {int dummy; } ;
struct TYPE_2__ {unsigned int length; } ;
struct glink_rpm_pipe {TYPE_1__ native; int tail; int head; } ;


 unsigned int FUNC_0 (int ) ;
 struct glink_rpm_pipe* FUNC_1 (struct qcom_glink_pipe*) ;

__attribute__((used)) static size_t FUNC_2(struct qcom_glink_pipe *VAR_0)
{
 struct glink_rpm_pipe *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_0(VAR_1->head);
 VAR_3 = FUNC_0(VAR_1->tail);

 if (VAR_3 <= VAR_2)
  return VAR_1->native.length - VAR_2 + VAR_3;
 else
  return VAR_3 - VAR_2;
}
