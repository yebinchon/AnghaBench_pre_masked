
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct sony_laptop_keypress {int dev; int key; } ;
typedef int kp ;
struct TYPE_2__ {int fifo_lock; int release_key_timer; int fifo; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_2)
{
 struct sony_laptop_keypress VAR_3;
 unsigned long VAR_4;

 FUNC_6(&VAR_1.fifo_lock, VAR_4);

 if (FUNC_3(&VAR_1.fifo,
        (unsigned char *)&VAR_3, sizeof(VAR_3)) == sizeof(VAR_3)) {
  FUNC_0(VAR_3.dev, VAR_3.key, 0);
  FUNC_1(VAR_3.dev);
 }


 if (FUNC_2(&VAR_1.fifo) != 0)
  FUNC_4(&VAR_1.release_key_timer,
     VAR_0 + FUNC_5(10));

 FUNC_7(&VAR_1.fifo_lock, VAR_4);
}
