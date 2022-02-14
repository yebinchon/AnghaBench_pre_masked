
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ci_hdrc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct ci_hdrc*,int ) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ci_hdrc *VAR_3)
{
 unsigned long VAR_4 = VAR_2 + FUNC_2(5000);
 u32 VAR_5 = VAR_1;

 while (FUNC_1(VAR_3, VAR_5)) {
  if (FUNC_4(VAR_2, VAR_4)) {
   FUNC_0(VAR_3->dev, "timeout waiting for %08x in OTGSC\n",
     VAR_5);
   return -VAR_0;
  }
  FUNC_3(20);
 }

 return 0;
}
