
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep11_target_dev {int dom_id; int ap_id; } ;


 unsigned int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(unsigned int VAR_0,
      unsigned short VAR_1,
      struct ep11_target_dev *VAR_2)
{
 while (VAR_1-- > 0) {
  if (FUNC_0(VAR_2->ap_id, VAR_2->dom_id) == VAR_0)
   return 1;
  VAR_2++;
 }
 return 0;
}
