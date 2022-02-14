
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_switch {int dev; int rpm_complete; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct tb_switch*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct tb_switch *VAR_0)
{
 if (FUNC_2(VAR_0)) {
  if (!FUNC_3(&VAR_0->rpm_complete,
       FUNC_1(500))) {
   FUNC_0(&VAR_0->dev, "runtime resuming timed out\n");
  }
 }
 return 0;
}
