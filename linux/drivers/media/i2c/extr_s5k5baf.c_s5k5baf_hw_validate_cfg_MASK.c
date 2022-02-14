
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s5k5baf {int apply_cfg; scalar_t__ error; int sd; } ;



 scalar_t__ VAR_0 ;
 int FUNC_0 (struct s5k5baf*) ;
 int FUNC_1 (struct s5k5baf*) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3(struct s5k5baf *VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_1->error)
  return;

 switch (VAR_2) {
 case 0:
  VAR_1->apply_cfg = 1;
  return;
 case 128:
  FUNC_1(VAR_1);
  if (!VAR_1->error)
   VAR_1->apply_cfg = 1;
  return;
 default:
  FUNC_2(&VAR_1->sd,
    "error setting format: %d\n", VAR_2);
  VAR_1->error = -VAR_0;
 }
}
