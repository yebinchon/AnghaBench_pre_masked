
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int phy_flags; } ;


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
 int FUNC_0 (struct bnx2*,int ,int*) ;
 int FUNC_1 (struct bnx2*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct bnx2 *VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14;

 if (VAR_11->phy_flags & VAR_0)
  return 0;

 FUNC_1(VAR_11, VAR_3, VAR_9);
 FUNC_0(VAR_11, VAR_3, &VAR_12);

 if (!(VAR_12 & VAR_10))
  return 0;

 FUNC_1(VAR_11, VAR_3, VAR_6);
 FUNC_0(VAR_11, VAR_3, &VAR_13);
 FUNC_0(VAR_11, VAR_3, &VAR_13);

 if (VAR_13 & (VAR_7 | VAR_8))
  return 0;

 FUNC_1(VAR_11, VAR_1, VAR_4);
 FUNC_0(VAR_11, VAR_2, &VAR_14);
 FUNC_0(VAR_11, VAR_2, &VAR_14);

 if (VAR_14 & VAR_5)
  return 0;

 return 1;
}
