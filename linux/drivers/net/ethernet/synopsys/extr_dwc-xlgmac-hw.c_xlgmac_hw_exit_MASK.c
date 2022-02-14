
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlgmac_pdata {scalar_t__ mac_regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct xlgmac_pdata *VAR_4)
{
 unsigned int VAR_5 = 2000;
 u32 VAR_6;


 VAR_6 = FUNC_2(VAR_4->mac_regs + VAR_0);
 VAR_6 = FUNC_1(VAR_6, VAR_2,
         VAR_1, 1);
 FUNC_4(VAR_6, VAR_4->mac_regs + VAR_0);
 FUNC_3(10, 15);


 while (--VAR_5 &&
        FUNC_0(FUNC_2(VAR_4->mac_regs + VAR_0),
       VAR_2, VAR_1))
  FUNC_3(500, 600);

 if (!VAR_5)
  return -VAR_3;

 return 0;
}
