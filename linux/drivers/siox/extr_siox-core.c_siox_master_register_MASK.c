
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siox_master {int poll_thread; int dev; scalar_t__ active; int busno; int last_poll; int devices; int lock; int pushpull; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,struct siox_master*,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_8(struct siox_master *VAR_5)
{
 int VAR_6;

 if (!VAR_3)
  return -VAR_1;

 if (!VAR_5->pushpull)
  return -VAR_0;

 FUNC_3(&VAR_5->dev, "siox-%d", VAR_5->busno);

 FUNC_7(&VAR_5->lock);
 FUNC_0(&VAR_5->devices);

 VAR_5->last_poll = VAR_2;
 VAR_5->poll_thread = FUNC_5(VAR_4, VAR_5,
        "siox-%d", VAR_5->busno);
 if (FUNC_1(VAR_5->poll_thread)) {
  VAR_5->active = 0;
  return FUNC_2(VAR_5->poll_thread);
 }

 VAR_6 = FUNC_4(&VAR_5->dev);
 if (VAR_6)
  FUNC_6(VAR_5->poll_thread);

 return VAR_6;
}
