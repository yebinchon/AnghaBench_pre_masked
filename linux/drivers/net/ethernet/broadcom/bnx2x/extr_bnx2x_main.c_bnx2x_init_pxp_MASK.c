
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnx2x {int mrrs; int pdev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,int,int) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_4)
{
 u16 VAR_5;
 int VAR_6, VAR_7;

 FUNC_2(VAR_4->pdev, VAR_1, &VAR_5);
 FUNC_0(VAR_0, "read 0x%x from devctl\n", VAR_5);
 VAR_7 = ((VAR_5 & VAR_2) >> 5);
 if (VAR_4->mrrs == -1)
  VAR_6 = ((VAR_5 & VAR_3) >> 12);
 else {
  FUNC_0(VAR_0, "force read order to %d\n", VAR_4->mrrs);
  VAR_6 = VAR_4->mrrs;
 }

 FUNC_1(VAR_4, VAR_6, VAR_7);
}
