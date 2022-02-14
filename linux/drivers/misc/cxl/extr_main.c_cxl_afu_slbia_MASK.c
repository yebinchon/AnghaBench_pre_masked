
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {int adapter; int dev; } ;
struct TYPE_2__ {int (* link_ok ) (int ,struct cxl_afu*) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (struct cxl_afu*,int ) ;
 int FUNC_2 (struct cxl_afu*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 unsigned long VAR_8 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,struct cxl_afu*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

int FUNC_7(struct cxl_afu *VAR_9)
{
 unsigned long VAR_10 = VAR_8 + (VAR_6 * VAR_1);

 FUNC_4("cxl_afu_slbia issuing SLBIA command\n");
 FUNC_2(VAR_9, VAR_0, VAR_2);
 while (FUNC_1(VAR_9, VAR_0) & VAR_3) {
  if (FUNC_6(VAR_8, VAR_10)) {
   FUNC_3(&VAR_9->dev, "WARNING: CXL AFU SLBIA timed out!\n");
   return -VAR_4;
  }



  if (!VAR_7->link_ok(VAR_9->adapter, VAR_9))
   return -VAR_5;
  FUNC_0();
 }
 return 0;
}
