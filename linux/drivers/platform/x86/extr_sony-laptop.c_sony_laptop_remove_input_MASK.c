
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sony_laptop_keypress {int dev; int key; int * member_0; } ;
typedef int kp ;
struct TYPE_2__ {int fifo; int * jog_dev; int * key_dev; int release_key_timer; int users; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_7(void)
{
 struct sony_laptop_keypress VAR_1 = { ((void*)0) };


 if (!FUNC_0(&VAR_0.users))
  return;

 FUNC_1(&VAR_0.release_key_timer);





 while (FUNC_6(&VAR_0.fifo,
    (unsigned char *)&VAR_1, sizeof(VAR_1)) == sizeof(VAR_1)) {
  FUNC_2(VAR_1.dev, VAR_1.key, 0);
  FUNC_3(VAR_1.dev);
 }


 FUNC_4(VAR_0.key_dev);
 VAR_0.key_dev = ((void*)0);

 if (VAR_0.jog_dev) {
  FUNC_4(VAR_0.jog_dev);
  VAR_0.jog_dev = ((void*)0);
 }

 FUNC_5(&VAR_0.fifo);
}
