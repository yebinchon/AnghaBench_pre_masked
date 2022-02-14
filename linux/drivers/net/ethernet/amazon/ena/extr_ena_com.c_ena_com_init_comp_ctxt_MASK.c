
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ena_comp_ctx {int wait_event; } ;
struct ena_com_admin_queue {int q_depth; int comp_ctx; int q_dmadev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t,int ) ;
 struct ena_comp_ctx* FUNC_1 (struct ena_com_admin_queue*,scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ena_com_admin_queue *VAR_2)
{
 size_t VAR_3 = VAR_2->q_depth * sizeof(struct ena_comp_ctx);
 struct ena_comp_ctx *VAR_4;
 u16 VAR_5;

 VAR_2->comp_ctx = FUNC_0(VAR_2->q_dmadev, VAR_3, VAR_1);
 if (FUNC_4(!VAR_2->comp_ctx)) {
  FUNC_3("memory allocation failed\n");
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->q_depth; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2, VAR_5, 0);
  if (VAR_4)
   FUNC_2(&VAR_4->wait_event);
 }

 return 0;
}
