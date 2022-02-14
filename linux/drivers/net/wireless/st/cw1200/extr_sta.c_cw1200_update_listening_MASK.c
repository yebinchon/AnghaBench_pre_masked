
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {scalar_t__ join_status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (struct cw1200_common*) ;
 int FUNC_2 (struct cw1200_common*,int) ;

void FUNC_3(struct cw1200_common *VAR_2, bool VAR_3)
{
 if (VAR_3) {
  if (VAR_2->join_status == VAR_1) {
   if (!FUNC_1(VAR_2))
    VAR_2->join_status = VAR_0;
   FUNC_2(VAR_2, 1);
  }
 } else {
  if (VAR_2->join_status == VAR_0) {
   if (!FUNC_0(VAR_2))
    VAR_2->join_status = VAR_1;
   FUNC_2(VAR_2, 0);
  }
 }
}
