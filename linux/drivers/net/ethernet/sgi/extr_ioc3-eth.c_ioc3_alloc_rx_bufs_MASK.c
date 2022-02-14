
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ioc3_private {int rx_pi; scalar_t__ rx_ci; int * rxr; int * rx_skbs; } ;
struct ioc3_erxbuf {scalar_t__ w0; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ioc3_private*,int *,struct ioc3_erxbuf**,int *) ;
 int FUNC_2 (int ,int ) ;
 struct ioc3_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct ioc3_private *VAR_4 = FUNC_3(VAR_3);
 struct ioc3_erxbuf *VAR_5;
 dma_addr_t VAR_6;
 int VAR_7;





 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (FUNC_1(VAR_4, &VAR_4->rx_skbs[VAR_7], &VAR_5, &VAR_6))
   return -VAR_0;

  VAR_5->w0 = 0;
  VAR_4->rxr[VAR_7] = FUNC_0(FUNC_2(VAR_6, VAR_1));
 }
 VAR_4->rx_ci = 0;
 VAR_4->rx_pi = VAR_2;

 return 0;
}
