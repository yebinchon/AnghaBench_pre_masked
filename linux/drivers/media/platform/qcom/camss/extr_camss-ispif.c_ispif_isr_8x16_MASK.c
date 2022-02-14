
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ispif_device {int reset_complete; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct ispif_device*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int,scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_7, void *VAR_8)
{
 struct ispif_device *VAR_9 = VAR_8;
 u32 VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_8(VAR_9->base + FUNC_3(0));
 VAR_11 = FUNC_8(VAR_9->base + FUNC_4(0));
 VAR_12 = FUNC_8(VAR_9->base + FUNC_5(0));

 FUNC_12(VAR_10, VAR_9->base + FUNC_0(0));
 FUNC_12(VAR_11, VAR_9->base + FUNC_1(0));
 FUNC_12(VAR_12, VAR_9->base + FUNC_2(0));

 FUNC_11(0x1, VAR_9->base + VAR_1);

 if ((VAR_10 >> 27) & 0x1)
  FUNC_6(&VAR_9->reset_complete);

 if (FUNC_10(VAR_10 & VAR_2))
  FUNC_7(FUNC_9(VAR_9), "VFE0 pix0 overflow\n");

 if (FUNC_10(VAR_10 & VAR_3))
  FUNC_7(FUNC_9(VAR_9), "VFE0 rdi0 overflow\n");

 if (FUNC_10(VAR_11 & VAR_4))
  FUNC_7(FUNC_9(VAR_9), "VFE0 pix1 overflow\n");

 if (FUNC_10(VAR_11 & VAR_5))
  FUNC_7(FUNC_9(VAR_9), "VFE0 rdi1 overflow\n");

 if (FUNC_10(VAR_12 & VAR_6))
  FUNC_7(FUNC_9(VAR_9), "VFE0 rdi2 overflow\n");

 return VAR_0;
}
