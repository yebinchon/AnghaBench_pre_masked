
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {unsigned char* data; int len; } ;
struct dma_info {int txout; scalar_t__ txin; int ntxd; struct sk_buff** txp; int txd64; int dmadev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct dma_info*,int ,int ,int,int*,int ) ;
 int FUNC_3 (int ,unsigned char*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct dma_info*,int) ;
 size_t FUNC_6 (struct dma_info*,int) ;

__attribute__((used)) static void FUNC_7(struct dma_info *VAR_5, struct sk_buff *VAR_6)
{
 unsigned char *VAR_7;
 uint VAR_8;
 u16 VAR_9;
 u32 VAR_10 = 0;
 dma_addr_t VAR_11;

 VAR_9 = VAR_5->txout;

 if (FUNC_0(FUNC_5(VAR_5, VAR_9) == VAR_5->txin))
  return;




 VAR_7 = VAR_6->data;
 VAR_8 = VAR_6->len;


 VAR_11 = FUNC_3(VAR_5->dmadev, VAR_7, VAR_8, VAR_4);

 if (FUNC_4(VAR_5->dmadev, VAR_11)) {
  FUNC_1(VAR_6);
  return;
 }





 VAR_10 = VAR_3 | VAR_2 | VAR_0;
 if (VAR_9 == (VAR_5->ntxd - 1))
  VAR_10 |= VAR_1;

 FUNC_2(VAR_5, VAR_5->txd64, VAR_11, VAR_9, &VAR_10, VAR_8);

 VAR_9 = FUNC_5(VAR_5, VAR_9);


 VAR_5->txp[FUNC_6(VAR_5, VAR_9)] = VAR_6;


 VAR_5->txout = VAR_9;
}
