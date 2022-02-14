
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_ring_s {int idx; int sw_tail; } ;
struct aq_hw_s {int dummy; } ;


 int FUNC_0 (struct aq_hw_s*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct aq_hw_s *VAR_0,
         struct aq_ring_s *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->sw_tail, VAR_1->idx);
 return 0;
}
