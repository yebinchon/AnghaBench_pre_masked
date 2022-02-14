
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qcom_glink_pipe {int dummy; } ;
struct TYPE_2__ {size_t length; } ;
struct glink_smem_pipe {TYPE_1__ native; int * tail; int * head; void* fifo; int remote_pid; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 void* FUNC_4 (int ,int ,size_t*) ;
 struct glink_smem_pipe* FUNC_5 (struct qcom_glink_pipe*) ;

__attribute__((used)) static size_t FUNC_6(struct qcom_glink_pipe *VAR_1)
{
 struct glink_smem_pipe *VAR_2 = FUNC_5(VAR_1);
 size_t VAR_3;
 void *VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 if (!VAR_2->fifo) {
  VAR_4 = FUNC_4(VAR_2->remote_pid,
         VAR_0, &VAR_3);
  if (FUNC_0(VAR_4)) {
   FUNC_3("failed to acquire RX fifo handle: %ld\n",
          FUNC_1(VAR_4));
   return 0;
  }

  VAR_2->fifo = VAR_4;
  VAR_2->native.length = VAR_3;
 }

 VAR_5 = FUNC_2(*VAR_2->head);
 VAR_6 = FUNC_2(*VAR_2->tail);

 if (VAR_5 < VAR_6)
  return VAR_2->native.length - VAR_6 + VAR_5;
 else
  return VAR_5 - VAR_6;
}
