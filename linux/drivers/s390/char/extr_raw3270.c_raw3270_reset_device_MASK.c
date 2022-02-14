
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270 {int cdev; } ;


 int FUNC_0 (struct raw3270*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct raw3270 *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 FUNC_2(FUNC_1(VAR_0->cdev), VAR_1);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_3(FUNC_1(VAR_0->cdev), VAR_1);
 return VAR_2;
}
