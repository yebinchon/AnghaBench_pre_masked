
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef unsigned int u16 ;
struct sk_buff {int len; } ;
struct ionic_txq_desc {void* mss; void* hdr_len; void* vlan_tci; void* len; int cmd; } ;
struct ionic_queue {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct ionic_queue*,int,int ,struct sk_buff*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct ionic_queue*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct ionic_queue *VAR_6, struct ionic_txq_desc *VAR_7,
         struct sk_buff *VAR_8,
         dma_addr_t VAR_9, u8 VAR_10, u16 VAR_11,
         unsigned int VAR_12, unsigned int VAR_13,
         bool VAR_14,
         u16 VAR_15, bool VAR_16,
         bool VAR_17, bool VAR_18)
{
 u8 VAR_19 = 0;
 u64 VAR_20;

 VAR_19 |= VAR_16 ? VAR_3 : 0;
 VAR_19 |= VAR_14 ? VAR_0 : 0;
 VAR_19 |= VAR_17 ? VAR_2 : 0;
 VAR_19 |= VAR_18 ? VAR_1 : 0;

 VAR_20 = FUNC_2(VAR_4, VAR_19, VAR_10, VAR_9);
 VAR_7->cmd = FUNC_1(VAR_20);
 VAR_7->len = FUNC_0(VAR_11);
 VAR_7->vlan_tci = FUNC_0(VAR_15);
 VAR_7->hdr_len = FUNC_0(VAR_12);
 VAR_7->mss = FUNC_0(VAR_13);

 if (VAR_18) {
  FUNC_7(VAR_8);
  FUNC_4(FUNC_6(VAR_6), VAR_8->len);
  FUNC_3(VAR_6, !FUNC_5(), VAR_5, VAR_8);
 } else {
  FUNC_3(VAR_6, 0, VAR_5, ((void*)0));
 }
}
