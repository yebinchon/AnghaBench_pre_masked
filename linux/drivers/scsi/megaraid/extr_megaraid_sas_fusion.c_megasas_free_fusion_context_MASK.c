
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct megasas_instance {struct fusion_context* ctrl_context; } ;
struct fusion_context {int log_to_span_pages; scalar_t__ log_to_span; int load_balance_info_pages; scalar_t__ load_balance_info; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct fusion_context*) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4(struct megasas_instance *VAR_0)
{
 struct fusion_context *VAR_1 = VAR_0->ctrl_context;

 if (VAR_1) {
  if (VAR_1->load_balance_info) {
   if (FUNC_1(VAR_1->load_balance_info))
    FUNC_3(VAR_1->load_balance_info);
   else
    FUNC_0((ulong)VAR_1->load_balance_info,
     VAR_1->load_balance_info_pages);
  }

  if (VAR_1->log_to_span) {
   if (FUNC_1(VAR_1->log_to_span))
    FUNC_3(VAR_1->log_to_span);
   else
    FUNC_0((ulong)VAR_1->log_to_span,
        VAR_1->log_to_span_pages);
  }

  FUNC_2(VAR_1);
 }
}
