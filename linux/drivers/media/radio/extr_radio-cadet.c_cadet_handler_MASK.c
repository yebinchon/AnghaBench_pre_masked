
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct cadet {int* rdsbuf; size_t rdsin; int rdsout; TYPE_1__ readtimer; int read_queue; int lock; scalar_t__ io; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct cadet*) ;
 struct cadet* VAR_0 ;
 struct cadet* FUNC_2 (int ,struct timer_list*,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (char*) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_3)
{
 struct cadet *VAR_4 = FUNC_2(VAR_4, VAR_3, VAR_2);


 if (FUNC_5(&VAR_4->lock)) {
  FUNC_7(0x3, VAR_4->io);
  if ((FUNC_3(VAR_4->io + 1) & 0x20) != 0)
   FUNC_8("cadet: RDS fifo overflow\n");
  FUNC_7(0x80, VAR_4->io);

  while ((FUNC_3(VAR_4->io) & 0x80) != 0) {
   VAR_4->rdsbuf[VAR_4->rdsin] = FUNC_3(VAR_4->io + 1);
   if (VAR_4->rdsin + 1 != VAR_4->rdsout)
    VAR_4->rdsin++;
  }
  FUNC_6(&VAR_4->lock);
 }




 if (FUNC_1(VAR_4))
  FUNC_9(&VAR_4->read_queue);




 VAR_4->readtimer.expires = VAR_1 + FUNC_4(50);
 FUNC_0(&VAR_4->readtimer);
}
