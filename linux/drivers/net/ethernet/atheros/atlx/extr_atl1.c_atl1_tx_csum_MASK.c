
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tx_packet_desc {int word3; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ csum_offset; } ;
struct atl1_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct atl1_adapter*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct atl1_adapter *VAR_7, struct sk_buff *VAR_8,
 struct tx_packet_desc *VAR_9)
{
 u8 VAR_10, VAR_11;

 if (FUNC_1(VAR_8->ip_summed == VAR_0)) {
  VAR_10 = FUNC_3(VAR_8);
  VAR_11 = VAR_10 + (u8) VAR_8->csum_offset;
  if (FUNC_4(VAR_10 & 0x1)) {

   if (FUNC_2(VAR_7))
    FUNC_0(VAR_1, &VAR_7->pdev->dev,
     "payload offset not an even number\n");
   return -1;
  }
  VAR_9->word3 |= (VAR_10 & VAR_5) <<
   VAR_6;
  VAR_9->word3 |= (VAR_11 & VAR_2) <<
   VAR_3;
  VAR_9->word3 |= 1 << VAR_4;
  return 1;
 }
 return 0;
}
