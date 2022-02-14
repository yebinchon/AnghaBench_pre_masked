
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ci_hdrc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ci_hdrc*,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ci_hdrc *VAR_2, u32 VAR_3)
{
 unsigned long VAR_4 = 10000;

 while (VAR_4--) {
  if (!FUNC_0(VAR_2, VAR_1, VAR_3))
   return 0;

  FUNC_1(1);
 }

 return -VAR_0;
}
