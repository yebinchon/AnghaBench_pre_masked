
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int,int,int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (FUNC_4(VAR_2)->nr_frags == 0)
  VAR_4 = VAR_2->len;
 else
  VAR_4 = FUNC_3(VAR_2);

 FUNC_0(VAR_1, "TX: ", VAR_0, 16, 1,
   VAR_2->data, VAR_4, 1);

 for (VAR_3 = 0; VAR_3 < FUNC_4(VAR_2)->nr_frags; VAR_3++) {

  FUNC_0(VAR_1, "TX: ", VAR_0, 16, 1,
          FUNC_1(&FUNC_4(VAR_2)->frags[VAR_3]),
          FUNC_2(&FUNC_4(VAR_2)->frags[VAR_3]), 1);
 }
}
