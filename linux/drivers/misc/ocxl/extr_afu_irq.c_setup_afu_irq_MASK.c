
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocxl_context {int dummy; } ;
struct afu_irq {int virq; int * name; int hw_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ,int ,int ,int *,struct afu_irq*) ;

__attribute__((used)) static int FUNC_7(struct ocxl_context *VAR_3, struct afu_irq *VAR_4)
{
 int VAR_5;

 VAR_4->virq = FUNC_0(((void*)0), VAR_4->hw_irq);
 if (!VAR_4->virq) {
  FUNC_5("irq_create_mapping failed\n");
  return -VAR_0;
 }
 FUNC_4("hw_irq %d mapped to virq %u\n", VAR_4->hw_irq, VAR_4->virq);

 VAR_4->name = FUNC_2(VAR_1, "ocxl-afu-%u", VAR_4->virq);
 if (!VAR_4->name) {
  FUNC_1(VAR_4->virq);
  return -VAR_0;
 }

 VAR_5 = FUNC_6(VAR_4->virq, VAR_2, 0, VAR_4->name, VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_4->name);
  VAR_4->name = ((void*)0);
  FUNC_1(VAR_4->virq);
  FUNC_5("request_irq failed: %d\n", VAR_5);
  return VAR_5;
 }
 return 0;
}
