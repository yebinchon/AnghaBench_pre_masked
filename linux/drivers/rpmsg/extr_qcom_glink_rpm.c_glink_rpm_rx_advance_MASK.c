
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_glink_pipe {int dummy; } ;
struct TYPE_2__ {unsigned int length; } ;
struct glink_rpm_pipe {int tail; TYPE_1__ native; } ;


 unsigned int FUNC_0 (int ) ;
 struct glink_rpm_pipe* FUNC_1 (struct qcom_glink_pipe*) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct qcom_glink_pipe *VAR_0,
     size_t VAR_1)
{
 struct glink_rpm_pipe *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_2->tail);

 VAR_3 += VAR_1;
 if (VAR_3 >= VAR_2->native.length)
  VAR_3 -= VAR_2->native.length;

 FUNC_2(VAR_3, VAR_2->tail);
}
