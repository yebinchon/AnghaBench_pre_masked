
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dio {unsigned long refcount; scalar_t__ op; int complete_work; TYPE_3__* inode; scalar_t__ defer_completion; scalar_t__ result; int bio_lock; scalar_t__ waiter; } ;
struct bio {struct dio* bi_private; } ;
struct TYPE_6__ {TYPE_2__* i_sb; TYPE_1__* i_mapping; } ;
struct TYPE_5__ {int s_dio_done_wq; } ;
struct TYPE_4__ {scalar_t__ nrpages; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dio*,struct bio*) ;
 int FUNC_2 (struct dio*,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct bio *VAR_3)
{
 struct dio *VAR_4 = VAR_3->bi_private;
 unsigned long VAR_5;
 unsigned long VAR_6;
 bool VAR_7 = 0;


 FUNC_1(VAR_4, VAR_3);

 FUNC_4(&VAR_4->bio_lock, VAR_6);
 VAR_5 = --VAR_4->refcount;
 if (VAR_5 == 1 && VAR_4->waiter)
  FUNC_6(VAR_4->waiter);
 FUNC_5(&VAR_4->bio_lock, VAR_6);

 if (VAR_5 == 0) {
  if (VAR_4->result)
   VAR_7 = VAR_4->defer_completion ||
        (VAR_4->op == VAR_1 &&
         VAR_4->inode->i_mapping->nrpages);
  if (VAR_7) {
   FUNC_0(&VAR_4->complete_work, VAR_2);
   FUNC_3(VAR_4->inode->i_sb->s_dio_done_wq,
       &VAR_4->complete_work);
  } else {
   FUNC_2(VAR_4, 0, VAR_0);
  }
 }
}
