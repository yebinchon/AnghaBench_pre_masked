
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct reada_extent {int logical; int scheduled; int nzones; TYPE_2__** zones; int lock; int extctl; int refcnt; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_fs_info {int nodesize; int reada_lock; } ;
struct btrfs_device {int reada_next; int reada_in_flight; int reada_extents; TYPE_1__* reada_curr_zone; struct btrfs_fs_info* fs_info; } ;
struct TYPE_4__ {struct btrfs_device* device; } ;
struct TYPE_3__ {int end; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*,struct reada_extent*,struct extent_buffer*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct extent_buffer*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,void**,int,int) ;
 int FUNC_6 (struct btrfs_fs_info*,struct reada_extent*) ;
 int FUNC_7 (struct btrfs_device*) ;
 int FUNC_8 (struct btrfs_fs_info*,int,int,struct extent_buffer**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct btrfs_device *VAR_1)
{
 struct btrfs_fs_info *VAR_2 = VAR_1->fs_info;
 struct reada_extent *VAR_3 = ((void*)0);
 int VAR_4 = 0;
 struct extent_buffer *VAR_5 = ((void*)0);
 u64 VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_9(&VAR_2->reada_lock);
 if (VAR_1->reada_curr_zone == ((void*)0)) {
  VAR_7 = FUNC_7(VAR_1);
  if (!VAR_7) {
   FUNC_10(&VAR_2->reada_lock);
   return 0;
  }
 }





 VAR_7 = FUNC_5(&VAR_1->reada_extents, (void **)&VAR_3,
         VAR_1->reada_next >> VAR_0, 1);
 if (VAR_7 == 0 || VAR_3->logical > VAR_1->reada_curr_zone->end) {
  VAR_7 = FUNC_7(VAR_1);
  if (!VAR_7) {
   FUNC_10(&VAR_2->reada_lock);
   return 0;
  }
  VAR_3 = ((void*)0);
  VAR_7 = FUNC_5(&VAR_1->reada_extents, (void **)&VAR_3,
     VAR_1->reada_next >> VAR_0, 1);
 }
 if (VAR_7 == 0) {
  FUNC_10(&VAR_2->reada_lock);
  return 0;
 }
 VAR_1->reada_next = VAR_3->logical + VAR_2->nodesize;
 VAR_3->refcnt++;

 FUNC_10(&VAR_2->reada_lock);

 FUNC_9(&VAR_3->lock);
 if (VAR_3->scheduled || FUNC_4(&VAR_3->extctl)) {
  FUNC_10(&VAR_3->lock);
  FUNC_6(VAR_2, VAR_3);
  return 0;
 }
 VAR_3->scheduled = 1;
 FUNC_10(&VAR_3->lock);




 for (VAR_8 = 0; VAR_8 < VAR_3->nzones; ++VAR_8) {
  if (VAR_3->zones[VAR_8]->device == VAR_1) {
   VAR_4 = VAR_8 + 1;
   break;
  }
 }
 VAR_6 = VAR_3->logical;

 FUNC_2(&VAR_1->reada_in_flight);
 VAR_7 = FUNC_8(VAR_2, VAR_6, VAR_4, &VAR_5);
 if (VAR_7)
  FUNC_0(VAR_2, VAR_3, ((void*)0), VAR_7);
 else if (VAR_5)
  FUNC_0(VAR_2, VAR_3, VAR_5, VAR_7);

 if (VAR_5)
  FUNC_3(VAR_5);

 FUNC_1(&VAR_1->reada_in_flight);
 FUNC_6(VAR_2, VAR_3);

 return 1;

}
