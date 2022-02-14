
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_hw_dev {int dummy; } ;
struct mic_irq {int dummy; } ;
struct mic_device {int dummy; } ;


 int FUNC_0 (struct mic_device*,struct mic_irq*,void*) ;
 struct mic_device* FUNC_1 (struct scif_hw_dev*) ;

__attribute__((used)) static void
FUNC_2(struct scif_hw_dev *VAR_0,
  struct mic_irq *VAR_1, void *VAR_2)
{
 struct mic_device *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_1, VAR_2);
}
