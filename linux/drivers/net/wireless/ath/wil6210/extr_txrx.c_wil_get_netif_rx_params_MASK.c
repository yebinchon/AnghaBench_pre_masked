
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_rx_desc {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct vring_rx_desc*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct vring_rx_desc* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0, int *VAR_1,
        int *VAR_2)
{
 struct vring_rx_desc *VAR_3 = FUNC_2(VAR_0);

 *VAR_1 = FUNC_1(VAR_0);
 *VAR_2 = FUNC_0(VAR_3);
}
