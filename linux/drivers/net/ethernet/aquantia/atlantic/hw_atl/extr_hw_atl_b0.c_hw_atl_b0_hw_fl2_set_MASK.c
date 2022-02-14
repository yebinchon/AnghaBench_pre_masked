
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_rx_filter_l2 {scalar_t__ queue; int location; int user_priority; scalar_t__ user_priority_en; int ethertype; } ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (struct aq_hw_s*) ;
 int FUNC_1 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_3 (struct aq_hw_s*,int ,int ) ;
 int FUNC_4 (struct aq_hw_s*,unsigned int,int ) ;
 int FUNC_5 (struct aq_hw_s*,scalar_t__,int ) ;
 int FUNC_6 (struct aq_hw_s*,int,int ) ;
 int FUNC_7 (struct aq_hw_s*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct aq_hw_s *VAR_0,
    struct aq_rx_filter_l2 *VAR_1)
{
 FUNC_2(VAR_0, 1U, VAR_1->location);
 FUNC_3(VAR_0, VAR_1->ethertype, VAR_1->location);
 FUNC_6(VAR_0,
          !!VAR_1->user_priority_en,
          VAR_1->location);
 if (VAR_1->user_priority_en)
  FUNC_7(VAR_0,
        VAR_1->user_priority,
        VAR_1->location);

 if (VAR_1->queue < 0) {
  FUNC_1(VAR_0, 0U, VAR_1->location);
  FUNC_4(VAR_0, 0U, VAR_1->location);
 } else {
  FUNC_1(VAR_0, 1U, VAR_1->location);
  FUNC_4(VAR_0, 1U, VAR_1->location);
  FUNC_5(VAR_0, VAR_1->queue, VAR_1->location);
 }

 return FUNC_0(VAR_0);
}
