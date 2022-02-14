
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_mmc_host {int sdio_imask; int sg_dma; } ;


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
 int FUNC_0 (struct sunxi_mmc_host*,int ) ;
 int FUNC_1 (struct sunxi_mmc_host*,int ,int) ;
 scalar_t__ FUNC_2 (struct sunxi_mmc_host*) ;

__attribute__((used)) static int FUNC_3(struct sunxi_mmc_host *VAR_12)
{
 u32 VAR_13;

 if (FUNC_2(VAR_12))
  return -VAR_0;






 FUNC_1(VAR_12, VAR_3, 0x20070008);

 FUNC_1(VAR_12, VAR_8, 0xffffffff);

 FUNC_1(VAR_12, VAR_6, VAR_12->sdio_imask);

 FUNC_1(VAR_12, VAR_7, 0xffffffff);

 FUNC_1(VAR_12, VAR_1, 0xdeb);

 FUNC_1(VAR_12, VAR_4, VAR_10);

 FUNC_1(VAR_12, VAR_2, VAR_12->sg_dma);

 VAR_13 = FUNC_0(VAR_12, VAR_5);
 VAR_13 |= VAR_11;

 VAR_13 &= ~VAR_9;
 FUNC_1(VAR_12, VAR_5, VAR_13);

 return 0;
}
