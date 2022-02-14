
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct overlay_changeset {int count; struct fragment* fragments; } ;
struct of_overlay_notify_data {int target; int overlay; } ;
struct fragment {int overlay; int target; } ;
typedef enum of_overlay_notify_action { ____Placeholder_of_overlay_notify_action } of_overlay_notify_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,struct of_overlay_notify_data*) ;
 int FUNC_1 (int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct overlay_changeset *VAR_4,
  enum of_overlay_notify_action VAR_5)
{
 struct of_overlay_notify_data VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++) {
  struct fragment *VAR_9 = &VAR_4->fragments[VAR_7];

  VAR_6.target = VAR_9->target;
  VAR_6.overlay = VAR_9->overlay;

  VAR_8 = FUNC_0(&VAR_3,
         VAR_5, &VAR_6);
  if (VAR_8 == VAR_0 || VAR_8 == VAR_1)
   return 0;
  if (VAR_8) {
   VAR_8 = FUNC_1(VAR_8);
   FUNC_2("overlay changeset %s notifier error %d, target: %pOF\n",
          VAR_2[VAR_5], VAR_8, VAR_6.target);
   return VAR_8;
  }
 }

 return 0;
}
