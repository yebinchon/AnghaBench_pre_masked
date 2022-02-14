
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ati_remote {scalar_t__ users; int open_mutex; int irq_urb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ati_remote *VAR_0)
{
 FUNC_0(&VAR_0->open_mutex);
 if (--VAR_0->users == 0)
  FUNC_2(VAR_0->irq_urb);
 FUNC_1(&VAR_0->open_mutex);
}
