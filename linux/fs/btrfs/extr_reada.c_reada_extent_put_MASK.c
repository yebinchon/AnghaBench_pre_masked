
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reada_zone {scalar_t__ elems; int refcnt; int lock; TYPE_1__* device; } ;
struct reada_extent {unsigned long logical; int nzones; struct reada_zone** zones; scalar_t__ refcnt; } ;
struct btrfs_fs_info {int reada_lock; int reada_tree; } ;
struct TYPE_2__ {int reada_extents; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct reada_extent*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct btrfs_fs_info *VAR_2,
        struct reada_extent *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5 = VAR_3->logical >> VAR_0;

 FUNC_4(&VAR_2->reada_lock);
 if (--VAR_3->refcnt) {
  FUNC_5(&VAR_2->reada_lock);
  return;
 }

 FUNC_3(&VAR_2->reada_tree, VAR_5);
 for (VAR_4 = 0; VAR_4 < VAR_3->nzones; ++VAR_4) {
  struct reada_zone *VAR_6 = VAR_3->zones[VAR_4];

  FUNC_3(&VAR_6->device->reada_extents, VAR_5);
 }

 FUNC_5(&VAR_2->reada_lock);

 for (VAR_4 = 0; VAR_4 < VAR_3->nzones; ++VAR_4) {
  struct reada_zone *VAR_7 = VAR_3->zones[VAR_4];

  FUNC_1(&VAR_7->refcnt);
  FUNC_4(&VAR_7->lock);
  --VAR_7->elems;
  if (VAR_7->elems == 0) {


   FUNC_2(&VAR_7->refcnt, VAR_1);
  }
  FUNC_5(&VAR_7->lock);

  FUNC_4(&VAR_2->reada_lock);
  FUNC_2(&VAR_7->refcnt, VAR_1);
  FUNC_5(&VAR_2->reada_lock);
 }

 FUNC_0(VAR_3);
}
