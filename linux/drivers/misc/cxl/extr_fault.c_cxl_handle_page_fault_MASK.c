
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mm_struct {int dummy; } ;
struct cxl_context {int pe; } ;
struct TYPE_2__ {int (* ack_irq ) (struct cxl_context*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct cxl_context*) ;
 scalar_t__ FUNC_1 (struct mm_struct*,int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct cxl_context*,int ,int ) ;
 int FUNC_4 (struct cxl_context*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct cxl_context *VAR_2,
      struct mm_struct *VAR_3,
      u64 VAR_4, u64 VAR_5)
{
 FUNC_4(VAR_2, VAR_4, VAR_5);

 if (FUNC_1(VAR_3, VAR_4, VAR_5)) {
  FUNC_0(VAR_2);
 } else {
  FUNC_2("Page fault successfully handled for pe: %i!\n", VAR_2->pe);
  VAR_1->ack_irq(VAR_2, VAR_0, 0);
 }
}
