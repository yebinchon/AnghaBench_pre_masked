
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x*,int) ;
 int FUNC_2 (struct bnx2x*,int,int) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_6, u32 VAR_7,
          u32 VAR_8)
{
 u32 VAR_9, VAR_10;
 u32 VAR_11;



 VAR_10 = FUNC_1(VAR_6, VAR_8 + VAR_4);

 if (FUNC_3(VAR_6))
  VAR_11 = 74L << VAR_3;
 else
  VAR_11 = 49L << VAR_3;

 if (((VAR_10 & VAR_2) == VAR_11) &&
     (VAR_10 & (VAR_1)))
  return;

 VAR_9 = VAR_10 &
  ~(VAR_0 | VAR_2);
 VAR_9 |= VAR_11;
 VAR_9 |= (VAR_1);

 FUNC_0(VAR_5, "Changing emac_mode from 0x%x to 0x%x\n",
    VAR_10, VAR_9);
 FUNC_2(VAR_6, VAR_8 + VAR_4, VAR_9);
 FUNC_4(40);
}
