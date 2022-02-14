
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* next; } ;
struct matroxfb_driver {void* (* probe ) (struct matrox_fb_info*) ;TYPE_1__ node; } ;
struct matrox_fb_info {int drivers_count; struct matroxfb_driver** drivers; void** drivers_data; int next_fb; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct matroxfb_driver* FUNC_1 (TYPE_2__*) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (struct matrox_fb_info*) ;

__attribute__((used)) static void FUNC_3(struct matrox_fb_info* VAR_3) {
 struct matroxfb_driver* VAR_4;
 int VAR_5 = 0;
 FUNC_0(&VAR_3->next_fb, &VAR_2);
 for (VAR_4 = FUNC_1(VAR_1.next);
      VAR_4 != FUNC_1(&VAR_1);
      VAR_4 = FUNC_1(VAR_4->node.next)) {
  if (VAR_4->probe) {
   void *VAR_6 = VAR_4->probe(VAR_3);
   if (VAR_6) {
    VAR_3->drivers_data[VAR_5] = VAR_6;
    VAR_3->drivers[VAR_5++] = VAR_4;
    if (VAR_5 == VAR_0)
     break;
   }
  }
 }
 VAR_3->drivers_count = VAR_5;
}
