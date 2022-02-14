
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int fw_wr_seq; int fw_last_msg; } ;


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
 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*,int ) ;
 int FUNC_2 (struct bnx2*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int
FUNC_5(struct bnx2 *VAR_13, u32 VAR_14, int VAR_15, int VAR_16)
{
 int VAR_17;
 u32 VAR_18;

 VAR_13->fw_wr_seq++;
 VAR_14 |= VAR_13->fw_wr_seq;
 VAR_13->fw_last_msg = VAR_14;

 FUNC_2(VAR_13, VAR_0, VAR_14);

 if (!VAR_15)
  return 0;


 for (VAR_17 = 0; VAR_17 < (VAR_6 / 10); VAR_17++) {
  FUNC_3(10);

  VAR_18 = FUNC_1(VAR_13, VAR_7);

  if ((VAR_18 & VAR_8) == (VAR_14 & VAR_5))
   break;
 }
 if ((VAR_14 & VAR_3) == VAR_4)
  return 0;


 if ((VAR_18 & VAR_8) != (VAR_14 & VAR_5)) {
  VAR_14 &= ~VAR_1;
  VAR_14 |= VAR_2;

  FUNC_2(VAR_13, VAR_0, VAR_14);
  if (!VAR_16) {
   FUNC_4("fw sync timeout, reset code = %x\n", VAR_14);
   FUNC_0(VAR_13);
  }

  return -VAR_11;
 }

 if ((VAR_18 & VAR_9) != VAR_10)
  return -VAR_12;

 return 0;
}
