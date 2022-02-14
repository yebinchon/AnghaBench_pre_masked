
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tg3_napi {int dummy; } ;
struct tg3 {TYPE_1__* dev; } ;
struct sk_buff {struct sk_buff* next; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_4__ {int gso_segs; } ;
struct TYPE_3__ {int features; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct netdev_queue*) ;
 int FUNC_3 (struct netdev_queue*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct sk_buff*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (struct tg3_napi*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct tg3 *VAR_4, struct tg3_napi *VAR_5,
         struct netdev_queue *VAR_6, struct sk_buff *VAR_7)
{
 struct sk_buff *VAR_8, *VAR_9;
 u32 VAR_10 = FUNC_5(VAR_7)->gso_segs * 3;


 if (FUNC_9(FUNC_8(VAR_5) <= VAR_10)) {
  FUNC_2(VAR_6);






  FUNC_6();
  if (FUNC_8(VAR_5) <= VAR_10)
   return VAR_0;

  FUNC_3(VAR_6);
 }

 VAR_8 = FUNC_4(VAR_7, VAR_4->dev->features &
        ~(VAR_2 | VAR_3));
 if (FUNC_0(VAR_8) || !VAR_8)
  goto tg3_tso_bug_end;

 do {
  VAR_9 = VAR_8;
  VAR_8 = VAR_8->next;
  VAR_9->next = ((void*)0);
  FUNC_7(VAR_9, VAR_4->dev);
 } while (VAR_8);

tg3_tso_bug_end:
 FUNC_1(VAR_7);

 return VAR_1;
}
