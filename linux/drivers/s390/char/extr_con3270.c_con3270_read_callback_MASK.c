
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_request {scalar_t__ view; } ;
struct con3270 {int readlet; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct raw3270_request *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_0->view);

 FUNC_1(&((struct con3270 *) VAR_0->view)->readlet);
}
