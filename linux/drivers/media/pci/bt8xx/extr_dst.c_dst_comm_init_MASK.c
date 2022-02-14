
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int type_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct dst_state*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct dst_state*) ;

int FUNC_5(struct dst_state *VAR_1)
{
 FUNC_0(2, "Initializing DST.\n");
 if ((FUNC_1(VAR_1)) < 0) {
  FUNC_3("PIO Enable Failed\n");
  return -1;
 }
 if ((FUNC_4(VAR_1)) < 0) {
  FUNC_3("RDC 8820 State RESET Failed.\n");
  return -1;
 }
 if (VAR_1->type_flags & VAR_0)
  FUNC_2(100);
 else
  FUNC_2(5);

 return 0;
}
