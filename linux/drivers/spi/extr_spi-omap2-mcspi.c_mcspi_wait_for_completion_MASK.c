
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap2_mcspi {scalar_t__ slave_aborted; int master; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct completion*) ;
 scalar_t__ FUNC_2 (struct completion*) ;

__attribute__((used)) static int FUNC_3(struct omap2_mcspi *VAR_1,
         struct completion *VAR_2)
{
 if (FUNC_0(VAR_1->master)) {
  if (FUNC_2(VAR_2) ||
      VAR_1->slave_aborted)
   return -VAR_0;
 } else {
  FUNC_1(VAR_2);
 }

 return 0;
}
