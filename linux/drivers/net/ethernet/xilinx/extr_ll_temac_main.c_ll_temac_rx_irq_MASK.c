
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {unsigned int (* dma_in ) (struct temac_local*,int ) ;int ndev; int (* dma_out ) (struct temac_local*,int ,unsigned int) ;} ;
struct net_device {int dev; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ) ;
 struct temac_local* FUNC_2 (struct net_device*) ;
 unsigned int FUNC_3 (struct temac_local*,int ) ;
 int FUNC_4 (struct temac_local*,int ,unsigned int) ;
 unsigned int FUNC_5 (struct temac_local*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = VAR_8;
 struct temac_local *VAR_10 = FUNC_2(VAR_9);
 unsigned int VAR_11;


 VAR_11 = VAR_10->dma_in(VAR_10, VAR_6);
 VAR_10->dma_out(VAR_10, VAR_6, VAR_11);

 if (VAR_11 & (VAR_0 | VAR_1))
  FUNC_1(VAR_10->ndev);
 if (VAR_11 & (VAR_3 | VAR_2))
  FUNC_0(&VAR_9->dev,
        "RX error 0x%x RX_CHNL_STS=0x%08x\n",
        VAR_11, VAR_10->dma_in(VAR_10, VAR_5));

 return VAR_4;
}
