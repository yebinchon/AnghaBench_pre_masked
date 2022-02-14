
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct xlgmac_pkt_info {int rx_tstamp; int attributes; } ;
struct xlgmac_dma_desc {int desc0; int desc1; int desc3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct xlgmac_pkt_info *VAR_6,
     struct xlgmac_dma_desc *VAR_7)
{
 u32 VAR_8, VAR_9;
 u64 VAR_10;

 VAR_8 = FUNC_0(VAR_7->desc3,
         VAR_1,
    VAR_0);
 VAR_9 = FUNC_0(VAR_7->desc3,
         VAR_3,
    VAR_2);
 if (VAR_8 && !VAR_9) {
  VAR_10 = FUNC_2(VAR_7->desc1);
  VAR_10 <<= 32;
  VAR_10 |= FUNC_2(VAR_7->desc0);
  if (VAR_10 != 0xffffffffffffffffULL) {
   VAR_6->rx_tstamp = VAR_10;
   VAR_6->attributes = FUNC_1(
     VAR_6->attributes,
     VAR_5,
     VAR_4,
     1);
  }
 }
}
