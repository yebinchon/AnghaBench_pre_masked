
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep11_target_dev {unsigned int ap_id; } ;



__attribute__((used)) static bool FUNC_0(unsigned int VAR_0,
     unsigned short VAR_1,
     struct ep11_target_dev *VAR_2)
{
 while (VAR_1-- > 0) {
  if (VAR_0 == VAR_2->ap_id)
   return 1;
  VAR_2++;
 }
 return 0;
}
