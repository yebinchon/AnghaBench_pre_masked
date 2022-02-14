
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlgmac_pdata {unsigned int rx_q_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xlgmac_pdata*,unsigned int,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct xlgmac_pdata *VAR_5)
{
 unsigned int VAR_6;
 u32 VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5->rx_q_count; VAR_6++) {
  VAR_7 = FUNC_2(FUNC_0(VAR_5, VAR_6, VAR_0));

  VAR_7 = FUNC_1(VAR_7, VAR_2,
          VAR_1, 2);

  VAR_7 = FUNC_1(VAR_7, VAR_4,
          VAR_3, 4);
  FUNC_3(VAR_7, FUNC_0(VAR_5, VAR_6, VAR_0));
 }
}
