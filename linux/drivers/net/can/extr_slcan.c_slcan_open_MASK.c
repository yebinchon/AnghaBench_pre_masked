
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int receive_room; struct slcan* disc_data; TYPE_1__* ops; } ;
struct slcan {scalar_t__ magic; int flags; struct tty_struct* tty; int dev; scalar_t__ xleft; scalar_t__ rcount; } ;
struct TYPE_2__ {int * write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 struct slcan* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct tty_struct *VAR_7)
{
 struct slcan *VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_0))
  return -VAR_4;

 if (VAR_7->ops->write == ((void*)0))
  return -VAR_3;





 FUNC_3();


 FUNC_7();

 VAR_8 = VAR_7->disc_data;

 VAR_9 = -VAR_1;

 if (VAR_8 && VAR_8->magic == VAR_5)
  goto err_exit;


 VAR_9 = -VAR_2;
 VAR_8 = FUNC_6();
 if (VAR_8 == ((void*)0))
  goto err_exit;

 VAR_8->tty = VAR_7;
 VAR_7->disc_data = VAR_8;

 if (!FUNC_8(VAR_6, &VAR_8->flags)) {

  VAR_8->rcount = 0;
  VAR_8->xleft = 0;

  FUNC_5(VAR_6, &VAR_8->flags);

  VAR_9 = FUNC_2(VAR_8->dev);
  if (VAR_9)
   goto err_free_chan;
 }


 FUNC_4();
 VAR_7->receive_room = 65536;


 return 0;

err_free_chan:
 VAR_8->tty = ((void*)0);
 VAR_7->disc_data = ((void*)0);
 FUNC_1(VAR_6, &VAR_8->flags);

err_exit:
 FUNC_4();


 return VAR_9;
}
