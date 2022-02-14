
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int flags; size_t pgoff; int event; } ;
struct gntalloc_gref {scalar_t__ page; int next_gref; scalar_t__ gref_id; TYPE_1__ notify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (struct gntalloc_gref*) ;
 scalar_t__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct gntalloc_gref *VAR_3)
{
 if (VAR_3->notify.flags & VAR_0) {
  uint8_t *VAR_4 = FUNC_6(VAR_3->page);
  VAR_4[VAR_3->notify.pgoff] = 0;
  FUNC_7(VAR_3->page);
 }
 if (VAR_3->notify.flags & VAR_1) {
  FUNC_9(VAR_3->notify.event);
  FUNC_1(VAR_3->notify.event);
 }

 VAR_3->notify.flags = 0;

 if (VAR_3->gref_id) {
  if (FUNC_4(VAR_3->gref_id))
   return;

  if (!FUNC_2(VAR_3->gref_id, 0))
   return;

  FUNC_3(VAR_3->gref_id);
 }

 VAR_2--;
 FUNC_8(&VAR_3->next_gref);

 if (VAR_3->page)
  FUNC_0(VAR_3->page);

 FUNC_5(VAR_3);
}
