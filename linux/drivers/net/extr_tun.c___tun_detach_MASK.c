
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct tun_struct {size_t numqueues; scalar_t__ numdisabled; int flags; TYPE_1__* dev; int ** tfiles; } ;
struct tun_file {size_t queue_index; int sk; int tx_ring; int xdp_rxq; scalar_t__ detached; int * tun; } ;
struct TYPE_3__ {scalar_t__ reg_state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (struct tun_struct*,struct tun_file*) ;
 struct tun_struct* FUNC_9 (struct tun_file*) ;
 int FUNC_10 (struct tun_struct*,int) ;
 int FUNC_11 (struct tun_file*) ;
 int FUNC_12 (struct tun_file*) ;
 int VAR_2 ;
 int FUNC_13 (struct tun_file*) ;
 int FUNC_14 (struct tun_struct*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct tun_file *VAR_3, bool VAR_4)
{
 struct tun_file *VAR_5;
 struct tun_struct *VAR_6;

 VAR_6 = FUNC_5(VAR_3->tun);

 if (VAR_6 && VAR_4) {
  FUNC_12(VAR_3);
  FUNC_11(VAR_3);
 }

 if (VAR_6 && !VAR_3->detached) {
  u16 VAR_7 = VAR_3->queue_index;
  FUNC_0(VAR_7 >= VAR_6->numqueues);

  FUNC_4(VAR_6->tfiles[VAR_7],
       VAR_6->tfiles[VAR_6->numqueues - 1]);
  VAR_5 = FUNC_5(VAR_6->tfiles[VAR_7]);
  VAR_5->queue_index = VAR_7;
  FUNC_4(VAR_6->tfiles[VAR_6->numqueues - 1],
       ((void*)0));

  --VAR_6->numqueues;
  if (VAR_4) {
   FUNC_1(VAR_3->tun, ((void*)0));
   FUNC_6(&VAR_3->sk);
  } else
   FUNC_8(VAR_6, VAR_3);

  FUNC_7();
  FUNC_10(VAR_6, VAR_6->numqueues + 1);

  FUNC_13(VAR_3);
  FUNC_14(VAR_6);
 } else if (VAR_3->detached && VAR_4) {
  VAR_6 = FUNC_9(VAR_3);
  FUNC_6(&VAR_3->sk);
 }

 if (VAR_4) {
  if (VAR_6 && VAR_6->numqueues == 0 && VAR_6->numdisabled == 0) {
   FUNC_2(VAR_6->dev);

   if (!(VAR_6->flags & VAR_0) &&
       VAR_6->dev->reg_state == VAR_1)
    FUNC_15(VAR_6->dev);
  }
  if (VAR_6)
   FUNC_16(&VAR_3->xdp_rxq);
  FUNC_3(&VAR_3->tx_ring, VAR_2);
  FUNC_6(&VAR_3->sk);
 }
}
