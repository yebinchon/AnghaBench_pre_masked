
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s5k5baf {int error; int fiv; int sd; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct s5k5baf*) ;
 int FUNC_1 (struct s5k5baf*,int) ;
 int FUNC_2 (struct s5k5baf*,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static void FUNC_5(struct s5k5baf *VAR_3)
{
 u16 VAR_4, VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_3, VAR_2);
 if (VAR_3->error)
  return;

 for (VAR_6 = 5; VAR_6 > 0; --VAR_6) {
  FUNC_1(VAR_3, VAR_5);
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_3->error)
   return;
  switch (VAR_4) {
  case 128:
   ++VAR_5;
   break;
  case 0:
   VAR_3->fiv = VAR_5;
   FUNC_4(&VAR_3->sd,
      "found valid frame interval: %d00us\n", VAR_5);
   return;
  default:
   FUNC_3(&VAR_3->sd,
     "error setting frame interval: %d\n", VAR_4);
   VAR_3->error = -VAR_0;
  }
 }
 FUNC_3(&VAR_3->sd, "cannot find correct frame interval\n");
 VAR_3->error = -VAR_1;
}
