
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {int cdev; int port; scalar_t__ line_pos; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct raw3215_info*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct raw3215_info *VAR_0)
{
 unsigned long VAR_1;

 if (FUNC_4(&VAR_0->port))
  return 0;
 VAR_0->line_pos = 0;
 FUNC_5(&VAR_0->port, 1);
 FUNC_2(FUNC_0(VAR_0->cdev), VAR_1);
 FUNC_1(VAR_0);
 FUNC_3(FUNC_0(VAR_0->cdev), VAR_1);

 return 0;
}
