
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_tcb_desc {int* empkt_len; int empkt_num; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static void FUNC_8(struct rtl_tcb_desc *VAR_0,
          u8 *VAR_1)
{
 FUNC_7(VAR_1, 0, 8);

 FUNC_6(VAR_1, VAR_0->empkt_num);
 FUNC_0(VAR_1, VAR_0->empkt_len[0]);
 FUNC_1(VAR_1, VAR_0->empkt_len[1]);
 FUNC_2(VAR_1, VAR_0->empkt_len[2] & 0xF);
 FUNC_3(VAR_1, VAR_0->empkt_len[2] >> 4);
 FUNC_4(VAR_1, VAR_0->empkt_len[3]);
 FUNC_5(VAR_1, VAR_0->empkt_len[4]);
}
