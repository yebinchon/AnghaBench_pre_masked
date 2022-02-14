
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dio {int refcount; int bio_lock; struct bio* bio_list; int * waiter; int bio_cookie; TYPE_2__* bio_disk; TYPE_1__* iocb; } ;
struct bio {struct bio* bi_private; } ;
struct TYPE_4__ {int queue; } ;
struct TYPE_3__ {int ki_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int * VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static struct bio *FUNC_5(struct dio *VAR_3)
{
 unsigned long VAR_4;
 struct bio *VAR_5 = ((void*)0);

 FUNC_3(&VAR_3->bio_lock, VAR_4);







 while (VAR_3->refcount > 1 && VAR_3->bio_list == ((void*)0)) {
  FUNC_0(VAR_1);
  VAR_3->waiter = VAR_2;
  FUNC_4(&VAR_3->bio_lock, VAR_4);
  if (!(VAR_3->iocb->ki_flags & VAR_0) ||
      !FUNC_1(VAR_3->bio_disk->queue, VAR_3->bio_cookie, 1))
   FUNC_2();

  FUNC_3(&VAR_3->bio_lock, VAR_4);
  VAR_3->waiter = ((void*)0);
 }
 if (VAR_3->bio_list) {
  VAR_5 = VAR_3->bio_list;
  VAR_3->bio_list = VAR_5->bi_private;
 }
 FUNC_4(&VAR_3->bio_lock, VAR_4);
 return VAR_5;
}
