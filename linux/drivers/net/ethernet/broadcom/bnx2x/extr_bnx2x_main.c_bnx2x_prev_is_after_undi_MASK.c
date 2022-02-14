
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int ) ;

__attribute__((used)) static bool FUNC_2(struct bnx2x *VAR_3)
{



 if (!(FUNC_1(VAR_3, VAR_2) &
     VAR_1))
  return 0;

 if (FUNC_1(VAR_3, VAR_0) == 0x7) {
  FUNC_0("UNDI previously loaded\n");
  return 1;
 }

 return 0;
}
