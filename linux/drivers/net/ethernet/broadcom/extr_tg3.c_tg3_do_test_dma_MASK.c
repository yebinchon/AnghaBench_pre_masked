
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int test_desc ;
struct tg3_internal_buffer_desc {int addr_hi; int addr_lo; int nic_mbuf; int len; int cqid_sqid; int flags; } ;
struct tg3 {int pdev; } ;
typedef int dma_addr_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct tg3 *VAR_16, u32 *VAR_17, dma_addr_t VAR_18,
      int VAR_19, bool VAR_20)
{
 struct tg3_internal_buffer_desc VAR_21;
 u32 VAR_22;
 int VAR_23, VAR_24;

 VAR_22 = VAR_7;

 FUNC_2(VAR_4, 0);
 FUNC_2(VAR_5, 0);
 FUNC_2(VAR_10, 0);
 FUNC_2(VAR_15, 0);

 FUNC_2(VAR_0, 0);
 FUNC_2(VAR_6, 0);

 VAR_21.addr_hi = ((u64) VAR_18) >> 32;
 VAR_21.addr_lo = VAR_18 & 0xffffffff;
 VAR_21.nic_mbuf = 0x00002100;
 VAR_21.len = VAR_19;
 if (VAR_20) {
  VAR_21.cqid_sqid = (13 << 8) | 2;

  FUNC_3(VAR_8, VAR_9);
  FUNC_4(40);
 } else {
  VAR_21.cqid_sqid = (16 << 8) | 7;

  FUNC_3(VAR_13, VAR_14);
  FUNC_4(40);
 }
 VAR_21.flags = 0x00000005;

 for (VAR_23 = 0; VAR_23 < (sizeof(VAR_21) / sizeof(u32)); VAR_23++) {
  u32 VAR_25;

  VAR_25 = *(((u32 *)&VAR_21) + VAR_23);
  FUNC_0(VAR_16->pdev, VAR_11,
           VAR_22 + (VAR_23 * sizeof(u32)));
  FUNC_0(VAR_16->pdev, VAR_12, VAR_25);
 }
 FUNC_0(VAR_16->pdev, VAR_11, 0);

 if (VAR_20)
  FUNC_2(VAR_2, VAR_22);
 else
  FUNC_2(VAR_3, VAR_22);

 VAR_24 = -VAR_1;
 for (VAR_23 = 0; VAR_23 < 40; VAR_23++) {
  u32 VAR_26;

  if (VAR_20)
   VAR_26 = FUNC_1(VAR_4);
  else
   VAR_26 = FUNC_1(VAR_5);
  if ((VAR_26 & 0xffff) == VAR_22) {
   VAR_24 = 0;
   break;
  }

  FUNC_4(100);
 }

 return VAR_24;
}
