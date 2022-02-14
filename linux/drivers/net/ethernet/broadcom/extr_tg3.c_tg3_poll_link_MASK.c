
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3_hw_status {int status; } ;
struct tg3 {int lock; TYPE_1__* napi; } ;
struct TYPE_2__ {struct tg3_hw_status* hw_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (struct tg3*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct tg3 *VAR_10)
{

 if (!(FUNC_2(VAR_10, VAR_8) || FUNC_2(VAR_10, VAR_5))) {
  struct tg3_hw_status *VAR_11 = VAR_10->napi[0].hw_status;

  if (VAR_11->status & VAR_6) {
   VAR_11->status = VAR_7 |
           (VAR_11->status & ~VAR_6);
   FUNC_0(&VAR_10->lock);
   if (FUNC_2(VAR_10, VAR_9)) {
    FUNC_4(VAR_0,
         (VAR_4 |
          VAR_1 |
          VAR_3 |
          VAR_2));
    FUNC_5(40);
   } else
    FUNC_3(VAR_10, 0);
   FUNC_1(&VAR_10->lock);
  }
 }
}
