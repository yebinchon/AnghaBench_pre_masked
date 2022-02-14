
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rave_sp_reply {unsigned char const code; unsigned char const ackid; size_t const length; int received; int data; } ;
struct rave_sp {int reply_lock; struct rave_sp_reply* reply; TYPE_1__* serdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,unsigned char const,size_t const) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,unsigned char const*,size_t const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rave_sp *VAR_0,
      const unsigned char *VAR_1, size_t VAR_2)
{
 struct device *VAR_3 = &VAR_0->serdev->dev;
 struct rave_sp_reply *VAR_4;
 const size_t VAR_5 = VAR_2 - 2;

 FUNC_4(&VAR_0->reply_lock);
 VAR_4 = VAR_0->reply;

 if (VAR_4) {
  if (VAR_4->code == VAR_1[0] && VAR_4->ackid == VAR_1[1] &&
      VAR_5 >= VAR_4->length) {




   FUNC_3(VAR_4->data, &VAR_1[2], VAR_4->length);
   FUNC_0(&VAR_4->received);
   VAR_0->reply = ((void*)0);
  } else {
   FUNC_2(VAR_3, "Ignoring incorrect reply\n");
   FUNC_1(VAR_3, "Code:   expected = 0x%08x received = 0x%08x\n",
    VAR_4->code, VAR_1[0]);
   FUNC_1(VAR_3, "ACK ID: expected = 0x%08x received = 0x%08x\n",
    VAR_4->ackid, VAR_1[1]);
   FUNC_1(VAR_3, "Length: expected = %zu received = %zu\n",
    VAR_4->length, VAR_5);
  }
 }

 FUNC_5(&VAR_0->reply_lock);
}
