
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct adv7842_state {int dummy; } ;
struct adv7842_format_info {scalar_t__ code; } ;


 unsigned int FUNC_0 (struct adv7842_format_info const*) ;
 struct adv7842_format_info const* VAR_0 ;

__attribute__((used)) static const struct adv7842_format_info *
FUNC_1(struct adv7842_state *VAR_1, u32 VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  if (VAR_0[VAR_3].code == VAR_2)
   return &VAR_0[VAR_3];
 }

 return ((void*)0);
}
