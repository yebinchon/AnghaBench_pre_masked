
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_state {int mdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct mesh_state *VAR_2, int VAR_3)
{
 if (!FUNC_0(VAR_1))
  return;
 if (VAR_3) {
  FUNC_3(VAR_0, FUNC_1(VAR_2->mdev), 0, 1);
  FUNC_2(200);
 } else {
  FUNC_3(VAR_0, FUNC_1(VAR_2->mdev), 0, 0);
  FUNC_2(10);
 }
}
