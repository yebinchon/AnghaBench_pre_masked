
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int base; int irq; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct wbsd_host*) ;
 int FUNC_1 (struct wbsd_host*,int ) ;
 int FUNC_2 (struct wbsd_host*) ;
 int FUNC_3 (struct wbsd_host*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct wbsd_host *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 FUNC_2(VAR_6);




 FUNC_3(VAR_6, VAR_1, VAR_0);




 VAR_7 = FUNC_1(VAR_6, VAR_4) << 8;
 VAR_7 |= FUNC_1(VAR_6, VAR_5);

 VAR_8 = FUNC_1(VAR_6, VAR_3);

 VAR_9 = FUNC_1(VAR_6, VAR_2);

 FUNC_0(VAR_6);




 if (VAR_7 != VAR_6->base)
  return 0;
 if (VAR_8 != VAR_6->irq)
  return 0;
 if ((VAR_9 != VAR_6->dma) && (VAR_6->dma != -1))
  return 0;

 return 1;
}
