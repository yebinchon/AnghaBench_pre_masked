
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ next; } ;
struct TYPE_4__ {TYPE_1__ entries; } ;
struct overlay_changeset {int count; struct overlay_changeset* fdt; struct overlay_changeset* overlay_tree; struct overlay_changeset* fragments; int overlay; int target; scalar_t__ id; TYPE_2__ cset; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct overlay_changeset*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct overlay_changeset *VAR_1)
{
 int VAR_2;

 if (VAR_1->cset.entries.next)
  FUNC_2(&VAR_1->cset);

 if (VAR_1->id)
  FUNC_0(&VAR_0, VAR_1->id);

 for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++) {
  FUNC_3(VAR_1->fragments[VAR_2].target);
  FUNC_3(VAR_1->fragments[VAR_2].overlay);
 }
 FUNC_1(VAR_1->fragments);





 FUNC_1(VAR_1->overlay_tree);
 FUNC_1(VAR_1->fdt);
 FUNC_1(VAR_1);
}
