
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_glink_pipe {int dummy; } ;
struct TYPE_2__ {unsigned int length; } ;
struct glink_smem_pipe {int * head; TYPE_1__ native; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct glink_smem_pipe*,unsigned int,void const*,size_t) ;
 unsigned int FUNC_3 (int ) ;
 struct glink_smem_pipe* FUNC_4 (struct qcom_glink_pipe*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct qcom_glink_pipe *VAR_0,
    const void *VAR_1, size_t VAR_2,
    const void *VAR_3, size_t VAR_4)
{
 struct glink_smem_pipe *VAR_5 = FUNC_4(VAR_0);
 unsigned int VAR_6;

 VAR_6 = FUNC_3(*VAR_5->head);

 VAR_6 = FUNC_2(VAR_5, VAR_6, VAR_1, VAR_2);
 VAR_6 = FUNC_2(VAR_5, VAR_6, VAR_3, VAR_4);


 VAR_6 = FUNC_0(VAR_6, 8);
 if (VAR_6 >= VAR_5->native.length)
  VAR_6 -= VAR_5->native.length;


 FUNC_5();

 *VAR_5->head = FUNC_1(VAR_6);
}
