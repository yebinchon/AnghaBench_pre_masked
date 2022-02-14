
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bnx2x_virtf*,int ) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_3(struct bnx2x *VAR_2,
           struct bnx2x_virtf *VAR_3,
           bool VAR_4)
{
 if (!FUNC_2(VAR_3, VAR_1)) {
  if (VAR_4)
   FUNC_0("Slowpath objects not yet initialized!\n");
  else
   FUNC_1(VAR_0, "Slowpath objects not yet initialized!\n");
  return 0;
 }
 return 1;
}
