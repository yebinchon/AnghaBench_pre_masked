
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_icount {scalar_t__ dsr; scalar_t__ dcd; scalar_t__ rng; } ;
struct acm {scalar_t__ disconnected; int wioctl; int read_lock; struct async_icount oldcount; struct async_icount iocount; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int VAR_6 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct acm *VAR_8, unsigned long VAR_9)
{
 int VAR_10 = 0;
 FUNC_0(VAR_7, VAR_6);
 struct async_icount VAR_11, VAR_12;

 do {
  FUNC_6(&VAR_8->read_lock);
  VAR_11 = VAR_8->oldcount;
  VAR_12 = VAR_8->iocount;
  VAR_8->oldcount = VAR_12;
  FUNC_7(&VAR_8->read_lock);

  if ((VAR_9 & VAR_4) &&
   VAR_11.dsr != VAR_12.dsr)
   break;
  if ((VAR_9 & VAR_3) &&
   VAR_11.dcd != VAR_12.dcd)
   break;
  if ((VAR_9 & VAR_5) &&
   VAR_11.rng != VAR_12.rng)
   break;

  FUNC_1(&VAR_8->wioctl, &VAR_7);
  FUNC_4(VAR_2);
  FUNC_3();
  FUNC_2(&VAR_8->wioctl, &VAR_7);
  if (VAR_8->disconnected) {
   if (VAR_9 & VAR_3)
    break;
   else
    VAR_10 = -VAR_0;
  } else {
   if (FUNC_5(VAR_6))
    VAR_10 = -VAR_1;
  }
 } while (!VAR_10);



 return VAR_10;
}
