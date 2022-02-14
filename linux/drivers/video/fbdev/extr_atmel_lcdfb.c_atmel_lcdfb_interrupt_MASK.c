
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_info {int device; struct atmel_lcdfb_info* par; } ;
struct atmel_lcdfb_info {int task; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct atmel_lcdfb_info*,int ) ;
 int FUNC_2 (struct atmel_lcdfb_info*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct fb_info *VAR_6 = VAR_5;
 struct atmel_lcdfb_info *VAR_7 = VAR_6->par;
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_1);
 if (VAR_8 & VAR_2) {
  FUNC_0(VAR_6->device, "FIFO underflow %#x\n", VAR_8);

  FUNC_3(&VAR_7->task);
 }
 FUNC_2(VAR_7, VAR_0, VAR_8);
 return VAR_3;
}
