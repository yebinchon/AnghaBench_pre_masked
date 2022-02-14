
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trf7970a {int rx_skb; int timeout_work; int state; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct trf7970a*) ;

__attribute__((used)) static void FUNC_5(struct trf7970a *VAR_0, int VAR_1)
{
 FUNC_2(VAR_0->dev, "Error - state: %d, errno: %d\n", VAR_0->state, VAR_1);

 FUNC_1(&VAR_0->timeout_work);

 FUNC_3(VAR_0->rx_skb);
 VAR_0->rx_skb = FUNC_0(VAR_1);

 FUNC_4(VAR_0);
}
