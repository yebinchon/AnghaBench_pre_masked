
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_pfc_window {int virt; int size; int phys; } ;
struct sh_pfc {unsigned int num_windows; unsigned int num_irqs; unsigned int* irqs; int dev; struct sh_pfc_window* windows; } ;
struct resource {int start; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct resource*) ;
 void* FUNC_2 (int ,unsigned int,int,int ) ;
 void* FUNC_3 (struct platform_device*,unsigned int) ;
 struct resource* FUNC_4 (struct platform_device*,int ,unsigned int) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int FUNC_6(struct sh_pfc *VAR_5,
    struct platform_device *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 struct sh_pfc_window *VAR_9;
 unsigned int *VAR_10 = ((void*)0);
 struct resource *VAR_11;
 unsigned int VAR_12;
 int VAR_13;


 for (VAR_7 = 0;; VAR_7++) {
  VAR_11 = FUNC_4(VAR_6, VAR_4, VAR_7);
  if (!VAR_11)
   break;
 }
 for (VAR_8 = 0;; VAR_8++) {
  VAR_13 = FUNC_3(VAR_6, VAR_8);
  if (VAR_13 == -VAR_2)
   return VAR_13;
  if (VAR_13 < 0)
   break;
 }

 if (VAR_7 == 0)
  return -VAR_0;


 VAR_9 = FUNC_2(VAR_5->dev, VAR_7, sizeof(*VAR_9),
          VAR_3);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_5->num_windows = VAR_7;
 VAR_5->windows = VAR_9;

 if (VAR_8) {
  VAR_10 = FUNC_2(VAR_5->dev, VAR_8, sizeof(*VAR_10),
        VAR_3);
  if (VAR_10 == ((void*)0))
   return -VAR_1;

  VAR_5->num_irqs = VAR_8;
  VAR_5->irqs = VAR_10;
 }


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  VAR_11 = FUNC_4(VAR_6, VAR_4, VAR_12);
  VAR_9->phys = VAR_11->start;
  VAR_9->size = FUNC_5(VAR_11);
  VAR_9->virt = FUNC_1(VAR_5->dev, VAR_11);
  if (FUNC_0(VAR_9->virt))
   return -VAR_1;
  VAR_9++;
 }
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  *VAR_10++ = FUNC_3(VAR_6, VAR_12);

 return 0;
}
