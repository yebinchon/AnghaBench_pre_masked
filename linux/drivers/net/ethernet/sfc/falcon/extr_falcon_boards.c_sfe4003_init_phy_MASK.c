
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_board {int minor; scalar_t__ major; } ;
struct ef4_nic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct falcon_board* FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*,int ,int ) ;
 int FUNC_2 (struct ef4_nic*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ef4_nic *VAR_3)
{
 struct falcon_board *VAR_4 = FUNC_0(VAR_3);


 if (VAR_4->minor < 3 && VAR_4->major == 0)
  return;

 FUNC_1(VAR_3, VAR_1, VAR_2);
 FUNC_2(VAR_3, VAR_1, VAR_0);
}
