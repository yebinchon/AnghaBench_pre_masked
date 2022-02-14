
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_prev_path_list {scalar_t__ aer; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_0 ;
 struct bnx2x_prev_path_list* FUNC_3 (struct bnx2x*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct bnx2x *VAR_2)
{
 struct bnx2x_prev_path_list *VAR_3;
 bool VAR_4 = 0;

 if (FUNC_4(&VAR_1))
  return 0;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3) {
  if (VAR_3->aer) {
   FUNC_2(VAR_0, "Path %d was marked by AER\n",
      FUNC_1(VAR_2));
  } else {
   VAR_4 = 1;
   FUNC_0("Path %d was already cleaned from previous drivers\n",
           FUNC_1(VAR_2));
  }
 }

 FUNC_5(&VAR_1);

 return VAR_4;
}
