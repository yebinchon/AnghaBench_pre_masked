
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlck_data {int rc; int done; } ;
struct ccw_device {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ccw_device *VAR_0, void *VAR_1, int VAR_2)
{
 struct stlck_data *VAR_3 = VAR_1;

 VAR_3->rc = VAR_2;
 FUNC_0(&VAR_3->done);
}
