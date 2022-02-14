
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct aq_rx_filter_l3l4 {int cmd; int p_src; int p_dst; int * ip_src; int * ip_dst; int is_ipv6; int location; } ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,struct aq_rx_filter_l3l4*) ;
 int FUNC_2 (struct aq_hw_s*,int ,int ) ;
 int FUNC_3 (struct aq_hw_s*,int ,int ) ;
 int FUNC_4 (struct aq_hw_s*,int ,int ) ;
 int FUNC_5 (struct aq_hw_s*,int ,int ) ;
 int FUNC_6 (struct aq_hw_s*,int ,int ) ;
 int FUNC_7 (struct aq_hw_s*,int ,int *) ;
 int FUNC_8 (struct aq_hw_s*,int ,int *) ;

__attribute__((used)) static int FUNC_9(struct aq_hw_s *VAR_0,
      struct aq_rx_filter_l3l4 *VAR_1)
{
 u8 VAR_2 = VAR_1->location;

 FUNC_1(VAR_0, VAR_1);

 if (VAR_1->cmd) {
  if (!VAR_1->is_ipv6) {
   FUNC_5(VAR_0,
         VAR_2,
         VAR_1->ip_dst[0]);
   FUNC_6(VAR_0,
        VAR_2,
        VAR_1->ip_src[0]);
  } else {
   FUNC_7(VAR_0,
         VAR_2,
         VAR_1->ip_dst);
   FUNC_8(VAR_0,
        VAR_2,
        VAR_1->ip_src);
  }
 }
 FUNC_2(VAR_0, VAR_1->p_dst, VAR_2);
 FUNC_3(VAR_0, VAR_1->p_src, VAR_2);
 FUNC_4(VAR_0, VAR_2, VAR_1->cmd);

 return FUNC_0(VAR_0);
}
