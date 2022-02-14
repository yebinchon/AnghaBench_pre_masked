
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int data_len; unsigned int tail; int dev; } ;
struct ixgbe_ring {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int * frags; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ,unsigned char*,int ) ;
 int FUNC_2 (struct sk_buff*,unsigned char*,int ) ;
 unsigned char* FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,unsigned int) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct ixgbe_ring *VAR_1,
       struct sk_buff *VAR_2)
{
 skb_frag_t *VAR_3 = &FUNC_6(VAR_2)->frags[0];
 unsigned char *VAR_4;
 unsigned int VAR_5;






 VAR_4 = FUNC_3(VAR_3);





 VAR_5 = FUNC_1(VAR_2->dev, VAR_4, VAR_0);


 FUNC_2(VAR_2, VAR_4, FUNC_0(VAR_5, sizeof(long)));


 FUNC_5(VAR_3, VAR_5);
 FUNC_4(VAR_3, VAR_5);
 VAR_2->data_len -= VAR_5;
 VAR_2->tail += VAR_5;
}
