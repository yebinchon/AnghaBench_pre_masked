
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ftgmac100 {scalar_t__ base; scalar_t__ tx_pause; scalar_t__ rx_pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ftgmac100 *VAR_3)
{
 u32 VAR_4 = FUNC_0(16);


 if (VAR_3->rx_pause)
  VAR_4 |= VAR_1;




 if (VAR_3->tx_pause)
  VAR_4 |= VAR_0;

 FUNC_1(VAR_4, VAR_3->base + VAR_2);
}
