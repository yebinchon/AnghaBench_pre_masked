
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct gdm* driver_data; } ;
struct gdm {int index; TYPE_1__* tty_dev; } ;
struct TYPE_2__ {int priv_dev; int (* send_func ) (int ,void*,int,int ,int ,struct gdm*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct gdm*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,void*,int,int ,int ,struct gdm*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_3, const unsigned char *VAR_4,
    int VAR_5)
{
 struct gdm *VAR_6 = VAR_3->driver_data;
 int VAR_7 = VAR_5;
 int VAR_8 = 0;
 int VAR_9 = 0;

 if (!FUNC_0(VAR_6))
  return -VAR_0;

 if (!VAR_5)
  return 0;

 while (1) {
  VAR_9 = FUNC_1(VAR_1, VAR_7);
  VAR_6->tty_dev->send_func(VAR_6->tty_dev->priv_dev,
     (void *)(VAR_4 + VAR_8),
     VAR_9,
     VAR_6->index,
     VAR_2,
     VAR_6);
  VAR_8 += VAR_9;
  VAR_7 -= VAR_9;
  if (VAR_7 <= 0)
   break;
 }

 return VAR_5;
}
