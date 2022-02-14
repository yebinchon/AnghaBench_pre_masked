
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int num_tx_rings; int num_rx_rings; } ;


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
 int FUNC_0 (struct bnx2*,int ,int) ;
 int VAR_11 ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*,int) ;
 int FUNC_3 (struct bnx2*,int) ;
 int FUNC_4 (struct bnx2*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bnx2 *VAR_12)
{
 int VAR_13;
 u32 VAR_14;

 FUNC_1(VAR_12);

 FUNC_0(VAR_12, VAR_10, 0);
 for (VAR_13 = 0; VAR_13 < VAR_12->num_tx_rings; VAR_13++)
  FUNC_3(VAR_12, VAR_13);

 if (VAR_12->num_tx_rings > 1)
  FUNC_0(VAR_12, VAR_10, ((VAR_12->num_tx_rings - 1) << 24) |
   (VAR_11 << 7));

 FUNC_0(VAR_12, VAR_4, 0);
 FUNC_4(VAR_12, VAR_9, 0);

 for (VAR_13 = 0; VAR_13 < VAR_12->num_rx_rings; VAR_13++)
  FUNC_2(VAR_12, VAR_13);

 if (VAR_12->num_rx_rings > 1) {
  u32 VAR_15 = 0;

  for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
   int VAR_16 = (VAR_13 % 8) << 2;

   VAR_15 |= (VAR_13 % (VAR_12->num_rx_rings - 1)) << VAR_16;
   if ((VAR_13 % 8) == 7) {
    FUNC_0(VAR_12, VAR_7, VAR_15);
    FUNC_0(VAR_12, VAR_0, (VAR_13 >> 3) |
     VAR_2 |
     VAR_3 |
     VAR_1);
    VAR_15 = 0;
   }
  }

  VAR_14 = VAR_5 |
        VAR_6;

  FUNC_0(VAR_12, VAR_4, VAR_14);

 }
}
