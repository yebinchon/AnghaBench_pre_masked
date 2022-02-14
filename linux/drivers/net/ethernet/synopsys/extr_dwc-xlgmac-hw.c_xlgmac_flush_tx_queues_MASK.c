
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xlgmac_pdata {unsigned int tx_q_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (struct xlgmac_pdata*,unsigned int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct xlgmac_pdata *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 u32 VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_4->tx_q_count; VAR_5++) {
  VAR_7 = FUNC_3(FUNC_1(VAR_4, VAR_5, VAR_1));
  VAR_7 = FUNC_2(VAR_7, VAR_3,
          VAR_2, 1);
  FUNC_5(VAR_7, FUNC_1(VAR_4, VAR_5, VAR_1));
 }


 for (VAR_5 = 0; VAR_5 < VAR_4->tx_q_count; VAR_5++) {
  VAR_6 = 2000;
  VAR_7 = FUNC_3(FUNC_1(VAR_4, VAR_5, VAR_1));
  VAR_7 = FUNC_0(VAR_7, VAR_3,
          VAR_2);
  while (--VAR_6 && VAR_7)
   FUNC_4(500, 600);

  if (!VAR_6)
   return -VAR_0;
 }

 return 0;
}
