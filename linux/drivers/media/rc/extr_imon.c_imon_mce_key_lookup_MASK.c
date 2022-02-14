
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imon_context {int rc_scancode; int release_code; int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static u32 FUNC_1(struct imon_context *VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 if (VAR_3 & 0x80000000)
  VAR_3 = VAR_3 | 0x7000 | 0x8000;

 VAR_2->rc_scancode = VAR_3;
 VAR_4 = FUNC_0(VAR_2->rdev, VAR_3);


 VAR_2->release_code = 0;

 return VAR_4;
}
