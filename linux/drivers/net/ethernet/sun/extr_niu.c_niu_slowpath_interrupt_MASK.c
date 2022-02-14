
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tx_ring_info {int tx_channel; } ;
struct rx_ring_info {int rx_channel; } ;
struct niu_ldg {int v0; int v1; int v2; } ;
struct niu {int num_rx_rings; int num_tx_rings; struct tx_ring_info* tx_rings; struct rx_ring_info* rx_rings; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (struct niu*,int ) ;
 int FUNC_3 (struct niu*) ;
 int FUNC_4 (struct niu*) ;
 int FUNC_5 (struct niu*,struct rx_ring_info*) ;
 int FUNC_6 (struct niu*,struct tx_ring_info*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct niu *VAR_1, struct niu_ldg *VAR_2,
         u64 VAR_3, u64 VAR_4, u64 VAR_5)
{

 int VAR_6, VAR_7 = 0;

 VAR_2->v0 = VAR_3;
 VAR_2->v1 = VAR_4;
 VAR_2->v2 = VAR_5;

 if (VAR_4 & 0x00000000ffffffffULL) {
  u32 VAR_8 = (VAR_4 & 0xffffffff);

  for (VAR_6 = 0; VAR_6 < VAR_1->num_rx_rings; VAR_6++) {
   struct rx_ring_info *VAR_9 = &VAR_1->rx_rings[VAR_6];

   if (VAR_8 & (1 << VAR_9->rx_channel)) {
    int VAR_10 = FUNC_5(VAR_1, VAR_9);
    if (VAR_10) {
     VAR_7 = VAR_10;
    } else {
     if (!VAR_3)
      FUNC_7(FUNC_0(VAR_9->rx_channel),
           VAR_0);
    }
   }
  }
 }
 if (VAR_4 & 0x7fffffff00000000ULL) {
  u32 VAR_11 = (VAR_4 >> 32) & 0x7fffffff;

  for (VAR_6 = 0; VAR_6 < VAR_1->num_tx_rings; VAR_6++) {
   struct tx_ring_info *VAR_12 = &VAR_1->tx_rings[VAR_6];

   if (VAR_11 & (1 << VAR_12->tx_channel)) {
    int VAR_13 = FUNC_6(VAR_1, VAR_12);
    if (VAR_13)
     VAR_7 = VAR_13;
   }
  }
 }
 if ((VAR_3 | VAR_4) & 0x8000000000000000ULL) {
  int VAR_14 = FUNC_4(VAR_1);
  if (VAR_14)
   VAR_7 = VAR_14;
 }
 if (VAR_5) {
  if (VAR_5 & 0x01ef) {
   int VAR_15 = FUNC_3(VAR_1);
   if (VAR_15)
    VAR_7 = VAR_15;
  }
  if (VAR_5 & 0x0210) {
   int VAR_16 = FUNC_1(VAR_1);
   if (VAR_16)
    VAR_7 = VAR_16;
  }
 }

 if (VAR_7)
  FUNC_2(VAR_1, 0);

 return VAR_7;
}
