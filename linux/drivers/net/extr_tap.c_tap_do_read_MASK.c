
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_queue {int sk; int ring; } ;
struct sk_buff {int dummy; } ;
struct iov_iter {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct iov_iter*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ,int *,int ) ;
 struct sk_buff* FUNC_6 (int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct tap_queue*,struct sk_buff*,struct iov_iter*) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_4 ;

__attribute__((used)) static ssize_t FUNC_12(struct tap_queue *VAR_5,
      struct iov_iter *VAR_6,
      int VAR_7, struct sk_buff *VAR_8)
{
 FUNC_0(VAR_4);
 ssize_t VAR_9 = 0;

 if (!FUNC_3(VAR_6)) {
  FUNC_4(VAR_8);
  return 0;
 }

 if (VAR_8)
  goto put;

 while (1) {
  if (!VAR_7)
   FUNC_5(FUNC_9(&VAR_5->sk), &VAR_4,
     VAR_2);


  VAR_8 = FUNC_6(&VAR_5->ring);
  if (VAR_8)
   break;
  if (VAR_7) {
   VAR_9 = -VAR_0;
   break;
  }
  if (FUNC_8(VAR_3)) {
   VAR_9 = -VAR_1;
   break;
  }

  FUNC_7();
 }
 if (!VAR_7)
  FUNC_2(FUNC_9(&VAR_5->sk), &VAR_4);

put:
 if (VAR_8) {
  VAR_9 = FUNC_10(VAR_5, VAR_8, VAR_6);
  if (FUNC_11(VAR_9 < 0))
   FUNC_4(VAR_8);
  else
   FUNC_1(VAR_8);
 }
 return VAR_9;
}
