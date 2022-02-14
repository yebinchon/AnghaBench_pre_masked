
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dio {int refcount; int bio_lock; scalar_t__ waiter; struct dio* bio_list; struct dio* bi_private; } ;
struct bio {int refcount; int bio_lock; scalar_t__ waiter; struct bio* bio_list; struct bio* bi_private; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bio *VAR_0)
{
 struct dio *VAR_1 = VAR_0->bi_private;
 unsigned long VAR_2;

 FUNC_0(&VAR_1->bio_lock, VAR_2);
 VAR_0->bi_private = VAR_1->bio_list;
 VAR_1->bio_list = VAR_0;
 if (--VAR_1->refcount == 1 && VAR_1->waiter)
  FUNC_2(VAR_1->waiter);
 FUNC_1(&VAR_1->bio_lock, VAR_2);
}
