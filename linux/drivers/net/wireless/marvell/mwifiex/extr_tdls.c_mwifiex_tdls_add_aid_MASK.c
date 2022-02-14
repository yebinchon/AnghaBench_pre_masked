
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct mwifiex_private {int assoc_rsp_buf; } ;
struct ieee_types_assoc_rsp {int a_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_private *VAR_1,
    struct sk_buff *VAR_2)
{
 struct ieee_types_assoc_rsp *VAR_3;
 u8 *VAR_4;

 VAR_3 = (struct ieee_types_assoc_rsp *)&VAR_1->assoc_rsp_buf;
 VAR_4 = FUNC_1(VAR_2, 4);
 *VAR_4++ = VAR_0;
 *VAR_4++ = 2;
 FUNC_0(VAR_4, &VAR_3->a_id, sizeof(VAR_3->a_id));

 return;
}
