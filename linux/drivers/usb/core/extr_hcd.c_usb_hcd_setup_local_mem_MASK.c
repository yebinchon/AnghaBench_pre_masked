
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sysdev; } ;
struct usb_hcd {void* localmem_pool; TYPE_1__ self; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ,int,int ,int ) ;
 void* FUNC_6 (int ,int ,size_t,int ) ;
 int FUNC_7 (void*,unsigned long,int ,size_t,int ) ;

int FUNC_8(struct usb_hcd *VAR_1, phys_addr_t VAR_2,
       dma_addr_t VAR_3, size_t VAR_4)
{
 int VAR_5;
 void *VAR_6;

 VAR_1->localmem_pool = FUNC_5(VAR_1->self.sysdev, 4,
        FUNC_4(VAR_1->self.sysdev),
        FUNC_3(VAR_1->self.sysdev));
 if (FUNC_0(VAR_1->localmem_pool))
  return FUNC_1(VAR_1->localmem_pool);

 VAR_6 = FUNC_6(VAR_1->self.sysdev, VAR_2,
      VAR_4, VAR_0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);






 VAR_5 = FUNC_7(VAR_1->localmem_pool, (unsigned long)VAR_6,
    VAR_3, VAR_4, FUNC_4(VAR_1->self.sysdev));
 if (VAR_5 < 0) {
  FUNC_2(VAR_1->self.sysdev, "gen_pool_add_virt failed with %d\n",
   VAR_5);
  return VAR_5;
 }

 return 0;
}
