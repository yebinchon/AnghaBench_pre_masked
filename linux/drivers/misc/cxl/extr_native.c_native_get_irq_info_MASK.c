
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_irq_info {scalar_t__ proc_handle; void* errstat; void* afu_err; void* dsr; void* dar; void* dsisr; } ;
struct cxl_afu {int adapter; } ;
struct TYPE_2__ {int (* link_ok ) (int ,struct cxl_afu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* VAR_6 ;
 void* FUNC_1 (struct cxl_afu*,int ) ;
 int FUNC_2 (int ,struct cxl_afu*) ;

__attribute__((used)) static int FUNC_3(struct cxl_afu *VAR_7, struct cxl_irq_info *VAR_8)
{



 if (!VAR_6->link_ok(VAR_7->adapter, VAR_7))
  return -VAR_5;

 VAR_8->dsisr = FUNC_1(VAR_7, VAR_2);
 VAR_8->dar = FUNC_1(VAR_7, VAR_1);
 if (FUNC_0())
  VAR_8->dsr = FUNC_1(VAR_7, VAR_3);
 VAR_8->afu_err = FUNC_1(VAR_7, VAR_0);
 VAR_8->errstat = FUNC_1(VAR_7, VAR_4);
 VAR_8->proc_handle = 0;

 return 0;
}
