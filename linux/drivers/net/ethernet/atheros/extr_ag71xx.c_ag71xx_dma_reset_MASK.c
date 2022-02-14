
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ag71xx {int stop_desc_dma; struct net_device* ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ag71xx*) ;
 int FUNC_1 (struct ag71xx*,int ) ;
 int FUNC_2 (struct ag71xx*,int ,int) ;
 int VAR_12 ;
 int FUNC_3 (struct ag71xx*,int ,struct net_device*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct ag71xx *VAR_13)
{
 struct net_device *VAR_14 = VAR_13->ndev;
 u32 VAR_15;
 int VAR_16;


 FUNC_2(VAR_13, VAR_0, 0);
 FUNC_2(VAR_13, VAR_3, 0);




 FUNC_0(VAR_13);


 FUNC_2(VAR_13, VAR_4, VAR_13->stop_desc_dma);
 FUNC_2(VAR_13, VAR_1, VAR_13->stop_desc_dma);


 for (VAR_16 = 0; VAR_16 < 256; VAR_16++) {
  FUNC_2(VAR_13, VAR_2, VAR_8);
  FUNC_2(VAR_13, VAR_5, VAR_10);
 }


 FUNC_2(VAR_13, VAR_2, VAR_6 | VAR_7);
 FUNC_2(VAR_13, VAR_5, VAR_9 | VAR_11);

 VAR_15 = FUNC_1(VAR_13, VAR_2);
 if (VAR_15)
  FUNC_3(VAR_13, VAR_12, VAR_14, "unable to clear DMA Rx status: %08x\n",
     VAR_15);

 VAR_15 = FUNC_1(VAR_13, VAR_5);


 VAR_15 &= ~0xff000000;

 if (VAR_15)
  FUNC_3(VAR_13, VAR_12, VAR_14, "unable to clear DMA Tx status: %08x\n",
     VAR_15);
}
