
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct imon_context {int rc_toggle; int release_code; int rdev; scalar_t__ rc_scancode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct imon_context *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 bool VAR_5 = 0;


 VAR_3 = FUNC_0(VAR_1->rdev, VAR_2);
 VAR_1->rc_toggle = 0x0;
 VAR_1->rc_scancode = VAR_2;


 if (VAR_3 == VAR_0) {
  VAR_4 = VAR_2 & ~0x4000;
  VAR_3 = FUNC_0(VAR_1->rdev, VAR_4);
  if (VAR_3 != VAR_0)
   VAR_5 = 1;
 }

 VAR_1->release_code = VAR_5;

 return VAR_3;
}
