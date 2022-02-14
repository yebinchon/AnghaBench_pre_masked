
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270_request {scalar_t__ view; } ;
struct fs3270 {int wait; } ;


 int FUNC_0 (struct raw3270_request*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct raw3270_request *VAR_0, void *VAR_1)
{
 struct fs3270 *VAR_2;

 VAR_2 = (struct fs3270 *) VAR_0->view;
 FUNC_0(VAR_0);
 FUNC_1(&VAR_2->wait);
}
