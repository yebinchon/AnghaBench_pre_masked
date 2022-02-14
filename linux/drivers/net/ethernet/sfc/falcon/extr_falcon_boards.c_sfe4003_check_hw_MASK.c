
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_board {scalar_t__ major; int minor; } ;
struct ef4_nic {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ef4_nic*,unsigned int) ;
 struct falcon_board* FUNC_1 (struct ef4_nic*) ;

__attribute__((used)) static int FUNC_2(struct ef4_nic *VAR_1)
{
 struct falcon_board *VAR_2 = FUNC_1(VAR_1);



 unsigned VAR_3 =
  (VAR_2->major == 0 && VAR_2->minor <= 2) ?
  ~VAR_0 : ~0;

 return FUNC_0(VAR_1, VAR_3);
}
