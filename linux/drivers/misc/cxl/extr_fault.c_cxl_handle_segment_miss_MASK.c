
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
 int VAR_1 ;
 int FUNC_0 (struct cxl_context*) ;
 int FUNC_1 (struct cxl_context*,struct mm_struct*,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct cxl_context*,int ,int ) ;
 int FUNC_5 (struct cxl_context*,int ) ;

__attribute__((used)) static int FUNC_6(struct cxl_context *VAR_3,
       struct mm_struct *VAR_4, u64 VAR_5)
{
 int VAR_6;

 FUNC_3("CXL interrupt: Segment fault pe: %i ea: %#llx\n", VAR_3->pe, VAR_5);
 FUNC_5(VAR_3, VAR_5);

 if ((VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5)))
  FUNC_0(VAR_3);
 else {

  FUNC_2();
  VAR_2->ack_irq(VAR_3, VAR_0, 0);
 }

 return VAR_1;
}
