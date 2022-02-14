
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dev; } ;


 int FUNC_0 (int ,char*,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bnx2x*,int,int*,int) ;
 int FUNC_2 (struct bnx2x*,int,int*,int*,int) ;
 int FUNC_3 (struct bnx2x*,int,int*,int) ;
 int FUNC_4 (struct bnx2x*,int,int*,int*,int) ;
 int FUNC_5 (struct bnx2x*,int,int*,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static bool FUNC_8(struct bnx2x *VAR_7, bool *VAR_8, bool VAR_9,
         u32 *VAR_10)
{
 bool VAR_11 = 0;

 if ((VAR_10[0] & VAR_0) ||
     (VAR_10[1] & VAR_1) ||
     (VAR_10[2] & VAR_2) ||
     (VAR_10[3] & VAR_3) ||
     (VAR_10[4] & VAR_5)) {
  int VAR_12 = 0;

  FUNC_0(VAR_6, "Was parity error: HW block parity attention:\n"
     "[0]:0x%08x [1]:0x%08x [2]:0x%08x [3]:0x%08x [4]:0x%08x\n",
     VAR_10[0] & VAR_0,
     VAR_10[1] & VAR_1,
     VAR_10[2] & VAR_2,
     VAR_10[3] & VAR_3,
     VAR_10[4] & VAR_5);
  if (VAR_9) {
   if (((VAR_10[0] & VAR_0) ||
        (VAR_10[1] & VAR_1) ||
        (VAR_10[2] & VAR_2) ||
        (VAR_10[4] & VAR_5)) ||
        (VAR_10[3] & VAR_4)) {
    FUNC_6(VAR_7->dev,
        "Parity errors detected in blocks: ");
   } else {
    VAR_9 = 0;
   }
  }
  VAR_11 |= FUNC_1(VAR_7,
   VAR_10[0] & VAR_0, &VAR_12, VAR_9);
  VAR_11 |= FUNC_2(VAR_7,
   VAR_10[1] & VAR_1, &VAR_12, VAR_8, VAR_9);
  VAR_11 |= FUNC_3(VAR_7,
   VAR_10[2] & VAR_2, &VAR_12, VAR_9);
  VAR_11 |= FUNC_4(VAR_7,
   VAR_10[3] & VAR_3, &VAR_12, VAR_8, VAR_9);
  VAR_11 |= FUNC_5(VAR_7,
   VAR_10[4] & VAR_5, &VAR_12, VAR_9);

  if (VAR_9)
   FUNC_7("\n");
 }

 return VAR_11;
}
