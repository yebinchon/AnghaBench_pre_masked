
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_queue {int dummy; } ;
struct tap_dev {int * taps; int numvtaps; } ;
struct sk_buff {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct tap_queue* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct tap_queue *FUNC_7(struct tap_dev *VAR_0,
           struct sk_buff *VAR_1)
{
 struct tap_queue *VAR_2 = ((void*)0);





 int VAR_3 = FUNC_0(VAR_0->numvtaps);
 __u32 VAR_4;

 if (!VAR_3)
  goto out;

 if (VAR_3 == 1)
  goto single;


 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4) {
  VAR_2 = FUNC_2(VAR_0->taps[VAR_4 % VAR_3]);
  goto out;
 }

 if (FUNC_1(FUNC_5(VAR_1))) {
  VAR_4 = FUNC_4(VAR_1);

  while (FUNC_6(VAR_4 >= VAR_3))
   VAR_4 -= VAR_3;

  VAR_2 = FUNC_2(VAR_0->taps[VAR_4]);
  goto out;
 }

single:
 VAR_2 = FUNC_2(VAR_0->taps[0]);
out:
 return VAR_2;
}
