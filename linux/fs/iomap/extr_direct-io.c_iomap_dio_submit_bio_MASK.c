
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cookie; int last_queue; } ;
struct iomap_dio {TYPE_1__ submit; TYPE_2__* iocb; int ref; } ;
struct iomap {int bdev; } ;
struct bio {int dummy; } ;
struct TYPE_4__ {int ki_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bio*,TYPE_2__*) ;
 int FUNC_3 (struct bio*) ;

__attribute__((used)) static void FUNC_4(struct iomap_dio *VAR_1, struct iomap *VAR_2,
  struct bio *VAR_3)
{
 FUNC_0(&VAR_1->ref);

 if (VAR_1->iocb->ki_flags & VAR_0)
  FUNC_2(VAR_3, VAR_1->iocb);

 VAR_1->submit.last_queue = FUNC_1(VAR_2->bdev);
 VAR_1->submit.cookie = FUNC_3(VAR_3);
}
