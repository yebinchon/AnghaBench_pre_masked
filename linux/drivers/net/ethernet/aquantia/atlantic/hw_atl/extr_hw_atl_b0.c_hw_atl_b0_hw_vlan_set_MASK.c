
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_rx_filter_vlan {int queue; int vlan_id; scalar_t__ enable; } ;
struct aq_hw_s {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,unsigned int,int) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int,int) ;
 int FUNC_3 (struct aq_hw_s*,int ,int) ;
 int FUNC_4 (struct aq_hw_s*,unsigned int,int) ;
 int FUNC_5 (struct aq_hw_s*,int,int) ;

__attribute__((used)) static int FUNC_6(struct aq_hw_s *VAR_1,
     struct aq_rx_filter_vlan *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_2(VAR_1, 0U, VAR_3);
  FUNC_4(VAR_1, 0U, VAR_3);
  if (VAR_2[VAR_3].enable) {
   FUNC_3(VAR_1,
         VAR_2[VAR_3].vlan_id,
         VAR_3);
   FUNC_1(VAR_1, 1U, VAR_3);
   FUNC_2(VAR_1, 1U, VAR_3);
   if (VAR_2[VAR_3].queue != 0xFF) {
    FUNC_5(VAR_1,
           VAR_2[VAR_3].queue,
           VAR_3);
    FUNC_4(VAR_1, 1U, VAR_3);
   }
  }
 }

 return FUNC_0(VAR_1);
}
