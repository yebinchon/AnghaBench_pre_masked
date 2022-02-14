
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct rave_sp_reply {void* data; size_t length; int received; int code; void* ackid; } ;
struct rave_sp {int bus_lock; int reply_lock; struct rave_sp_reply* reply; TYPE_3__* serdev; int ackid; TYPE_2__* variant; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int (* translate ) (unsigned char) ;} ;
struct TYPE_5__ {TYPE_1__ cmd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct rave_sp*,unsigned char*,size_t) ;
 int FUNC_7 (unsigned char) ;
 int FUNC_8 (int *,int ) ;

int FUNC_9(struct rave_sp *VAR_2,
   void *VAR_3, size_t VAR_4,
   void *VAR_5, size_t VAR_6)
{
 struct rave_sp_reply VAR_7 = {
  .data = VAR_5,
  .length = VAR_6,
  .received = FUNC_0(VAR_7.received),
 };
 unsigned char *VAR_8 = VAR_3;
 int VAR_9, VAR_10 = 0;
 u8 VAR_11;

 VAR_9 = VAR_2->variant->cmd.translate(VAR_8[0]);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_11 = FUNC_1(&VAR_2->ackid);
 VAR_7.ackid = VAR_11;
 VAR_7.code = FUNC_5((u8)VAR_9),

 FUNC_3(&VAR_2->bus_lock);

 FUNC_3(&VAR_2->reply_lock);
 VAR_2->reply = &VAR_7;
 FUNC_4(&VAR_2->reply_lock);

 VAR_8[0] = VAR_9;
 VAR_8[1] = VAR_11;

 FUNC_6(VAR_2, VAR_8, VAR_4);

 if (!FUNC_8(&VAR_7.received, VAR_1)) {
  FUNC_2(&VAR_2->serdev->dev, "Command timeout\n");
  VAR_10 = -VAR_0;

  FUNC_3(&VAR_2->reply_lock);
  VAR_2->reply = ((void*)0);
  FUNC_4(&VAR_2->reply_lock);
 }

 FUNC_4(&VAR_2->bus_lock);
 return VAR_10;
}
