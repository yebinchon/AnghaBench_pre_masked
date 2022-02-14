
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_renament {int dir_nlink_delta; int dir; } ;
typedef int handle_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(handle_t *VAR_0, struct ext4_renament *VAR_1)
{
 if (VAR_1->dir_nlink_delta) {
  if (VAR_1->dir_nlink_delta == -1)
   FUNC_0(VAR_0, VAR_1->dir);
  else
   FUNC_1(VAR_0, VAR_1->dir);
  FUNC_2(VAR_0, VAR_1->dir);
 }
}
