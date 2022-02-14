
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_ring_s {unsigned int hw_head; int idx; } ;
struct aq_hw_s {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aq_hw_s*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 unsigned int FUNC_2 (struct aq_hw_s*,int ) ;

__attribute__((used)) static int FUNC_3(struct aq_hw_s *VAR_2,
         struct aq_ring_s *VAR_3)
{
 int VAR_4 = 0;
 unsigned int VAR_5 = FUNC_2(VAR_2, VAR_3->idx);

 if (FUNC_1(&VAR_2->flags, VAR_0)) {
  VAR_4 = -VAR_1;
  goto err_exit;
 }
 VAR_3->hw_head = VAR_5;
 VAR_4 = FUNC_0(VAR_2);

err_exit:
 return VAR_4;
}
