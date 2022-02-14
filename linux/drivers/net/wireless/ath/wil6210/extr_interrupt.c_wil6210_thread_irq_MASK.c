
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int suspend_resp_comp; int wq; scalar_t__ suspend_resp_rcvd; scalar_t__ isr_misc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (struct wil6210_priv*) ;
 int FUNC_3 (struct wil6210_priv*,char*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct wil6210_priv *VAR_3 = VAR_2;

 FUNC_3(VAR_3, "Thread IRQ\n");

 if (VAR_3->isr_misc)
  FUNC_1(VAR_1, VAR_2);

 FUNC_2(VAR_3);

 if (VAR_3->suspend_resp_rcvd) {
  FUNC_3(VAR_3, "set suspend_resp_comp to true\n");
  VAR_3->suspend_resp_comp = 1;
  FUNC_0(&VAR_3->wq);
 }

 return VAR_0;
}
