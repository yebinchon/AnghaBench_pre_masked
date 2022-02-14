
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct reada_zone {int end; scalar_t__ elems; int refcnt; int start; scalar_t__ locked; } ;
struct btrfs_device {struct reada_zone* reada_curr_zone; int reada_next; int reada_zones; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,void**,unsigned long,int) ;
 int FUNC_3 (struct reada_zone*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct btrfs_device *VAR_2)
{
 struct reada_zone *VAR_3 = ((void*)0);
 struct reada_zone *VAR_4 = ((void*)0);
 u64 VAR_5 = 0;
 u64 VAR_6 = 0;
 unsigned long VAR_7 = 0;
 int VAR_8;

 if (VAR_2->reada_curr_zone) {
  FUNC_3(VAR_2->reada_curr_zone, 0);
  FUNC_1(&VAR_2->reada_curr_zone->refcnt, VAR_1);
  VAR_2->reada_curr_zone = ((void*)0);
 }

 while (1) {
  struct reada_zone *VAR_9;

  VAR_8 = FUNC_2(&VAR_2->reada_zones,
          (void **)&VAR_9, VAR_7, 1);
  if (VAR_8 == 0)
   break;
  VAR_7 = (VAR_9->end >> VAR_0) + 1;
  if (VAR_9->locked) {
   if (VAR_9->elems > VAR_6) {
    VAR_6 = VAR_9->elems;
    VAR_4 = VAR_9;
   }
  } else {
   if (VAR_9->elems > VAR_5) {
    VAR_5 = VAR_9->elems;
    VAR_3 = VAR_9;
   }
  }
 }
 if (VAR_3)
  VAR_2->reada_curr_zone = VAR_3;
 else if (VAR_4)
  VAR_2->reada_curr_zone = VAR_4;
 else
  return 0;

 VAR_2->reada_next = VAR_2->reada_curr_zone->start;
 FUNC_0(&VAR_2->reada_curr_zone->refcnt);
 FUNC_3(VAR_2->reada_curr_zone, 1);

 return 1;
}
