
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wkup_m3_ipc {int dummy; } ;
struct TYPE_3__ {unsigned int irq_nr; char const* src; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct wkup_m3_ipc*,int) ;

__attribute__((used)) static const char *FUNC_2(struct wkup_m3_ipc *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_2, 6);

 VAR_3 = VAR_5 & VAR_0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1) - 1; VAR_4++) {
  if (VAR_1[VAR_4].irq_nr == VAR_3)
   return VAR_1[VAR_4].src;
 }
 return VAR_1[VAR_4].src;
}
