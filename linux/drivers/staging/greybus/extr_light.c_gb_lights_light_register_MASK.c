
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_light {int channels_count; int ready; int has_flash; TYPE_1__* channels; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct gb_light*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gb_light *VAR_0)
{
 int VAR_1;
 int VAR_2;






 for (VAR_2 = 0; VAR_2 < VAR_0->channels_count; VAR_2++) {
  VAR_1 = FUNC_0(&VAR_0->channels[VAR_2]);
  if (VAR_1 < 0)
   return VAR_1;

  FUNC_2(&VAR_0->channels[VAR_2].lock);
 }

 VAR_0->ready = 1;

 if (VAR_0->has_flash) {
  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1 < 0) {
   VAR_0->has_flash = 0;
   return VAR_1;
  }
 }

 return 0;
}
