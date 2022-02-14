
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wdm_device {struct wdm_device* ubuf; struct wdm_device* irq; struct wdm_device* orq; struct wdm_device* inbuf; struct wdm_device* sbuf; } ;


 int FUNC_0 (struct wdm_device*) ;
 int FUNC_1 (struct wdm_device*) ;

__attribute__((used)) static void FUNC_2(struct wdm_device *VAR_0)
{
 FUNC_1(VAR_0->sbuf);
 FUNC_1(VAR_0->inbuf);
 FUNC_1(VAR_0->orq);
 FUNC_1(VAR_0->irq);
 FUNC_1(VAR_0->ubuf);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
}
