
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;

int FUNC_5(struct bnx2x *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1, VAR_0);

 if (FUNC_1(VAR_1)) {

  FUNC_3(VAR_1);


  VAR_2 = FUNC_4(VAR_1);
  if (VAR_2)
   FUNC_0("Can't change NIC mode!\n");
  return VAR_2;
 }

 return 0;
}
