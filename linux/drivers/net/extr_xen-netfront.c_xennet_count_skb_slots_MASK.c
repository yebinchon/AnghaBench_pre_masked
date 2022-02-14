
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int *) ;
 unsigned long FUNC_3 (int *) ;
 unsigned long FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1)
{
 int VAR_2, VAR_3 = FUNC_5(VAR_1)->nr_frags;
 int VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_1->data),
       FUNC_4(VAR_1));

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  skb_frag_t *VAR_5 = FUNC_5(VAR_1)->frags + VAR_2;
  unsigned long VAR_6 = FUNC_3(VAR_5);
  unsigned long VAR_7 = FUNC_2(VAR_5);


  VAR_7 &= ~VAR_0;

  VAR_4 += FUNC_0(VAR_7, VAR_6);
 }

 return VAR_4;
}
