
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ioc3_private {int dma_dev; struct ioc3_etxd* txr; } ;
struct ioc3_etxd {int p2; int p1; int bufcnt; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static inline void FUNC_3(struct ioc3_private *VAR_7, int VAR_8)
{
 struct ioc3_etxd *VAR_9;
 u32 VAR_10, VAR_11, VAR_12;

 VAR_9 = &VAR_7->txr[VAR_8];
 VAR_10 = FUNC_0(VAR_9->cmd);
 VAR_11 = FUNC_0(VAR_9->bufcnt);
 if (VAR_10 & VAR_3) {
  VAR_12 = (VAR_11 & VAR_1) >> VAR_2;
  FUNC_2(VAR_7->dma_dev, FUNC_1(VAR_9->p1),
     VAR_12, VAR_0);
 }
 if (VAR_10 & VAR_6) {
  VAR_12 = (VAR_11 & VAR_4) >> VAR_5;
  FUNC_2(VAR_7->dma_dev, FUNC_1(VAR_9->p2),
     VAR_12, VAR_0);
 }
}
