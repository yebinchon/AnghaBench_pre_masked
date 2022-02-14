
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {scalar_t__ enabled; int adapter; } ;
struct TYPE_2__ {int (* link_ok ) (int ,struct cxl_afu*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct cxl_afu*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,struct cxl_afu*) ;

__attribute__((used)) static int FUNC_3(struct cxl_afu *VAR_2)
{
 if (!VAR_1->link_ok(VAR_2->adapter, VAR_2)) {
  FUNC_0(1, "Refusing to enable afu while link down!\n");
  return -VAR_0;
 }
 if (VAR_2->enabled)
  return 0;
 return FUNC_1(VAR_2);
}
