
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct pn533 {int cancel_listen; int poll_work; int wq; int dev; } ;


 int VAR_0 ;
 struct pn533* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct pn533* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pn533*) ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct pn533 *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);

 FUNC_0(VAR_4->dev, "Listen mode timeout\n");

 VAR_4->cancel_listen = 1;

 FUNC_3(VAR_4);

 FUNC_4(VAR_4->wq, &VAR_4->poll_work,
      FUNC_2(VAR_0));
}
