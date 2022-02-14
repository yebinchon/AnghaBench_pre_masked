
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ expires; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_7)
{
 FUNC_1(&VAR_5);

 if(VAR_2 & VAR_0) {
  if (!VAR_4) {
   VAR_4 = 50;
   FUNC_3("ltpc poll is alive\n");
  }
  VAR_4--;
 }


 FUNC_2(VAR_6);
 VAR_5.expires = VAR_3 + VAR_1/20;
 FUNC_0(&VAR_5);
}
