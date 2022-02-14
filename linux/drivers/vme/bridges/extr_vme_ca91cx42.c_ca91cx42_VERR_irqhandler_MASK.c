
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {int parent; struct ca91cx42_driver* driver_priv; } ;
struct ca91cx42_driver {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_2(struct vme_bridge *VAR_2)
{
 int VAR_3;
 struct ca91cx42_driver *VAR_4;

 VAR_4 = VAR_2->driver_priv;

 VAR_3 = FUNC_1(VAR_4->base + VAR_1);

 if (!(VAR_3 & 0x00000800)) {
  FUNC_0(VAR_2->parent, "ca91cx42_VERR_irqhandler DMA "
   "Read Error DGCS=%08X\n", VAR_3);
 }

 return VAR_0;
}
