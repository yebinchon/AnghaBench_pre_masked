
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3270 {int model; int rows; int cols; int cdev; } ;
struct diag210 {int vrdclen; int vrdccrmd; int vrdcdvno; } ;
struct ccw_dev_id {int devno; } ;


 int FUNC_0 (int ,struct ccw_dev_id*) ;
 int FUNC_1 (struct diag210*) ;

__attribute__((used)) static void
FUNC_2(struct raw3270 *VAR_0)
{
 int VAR_1, VAR_2;
 struct ccw_dev_id VAR_3;
 struct diag210 VAR_4;

 FUNC_0(VAR_0->cdev, &VAR_3);
 VAR_4.vrdcdvno = VAR_3.devno;
 VAR_4.vrdclen = sizeof(struct diag210);
 VAR_1 = FUNC_1(&VAR_4);
 VAR_2 = VAR_4.vrdccrmd;

 if (VAR_1 || VAR_2 < 2 || VAR_2 > 5)
  VAR_2 = 2;
 switch (VAR_2) {
 case 2:
  VAR_0->model = VAR_2;
  VAR_0->rows = 24;
  VAR_0->cols = 80;
  break;
 case 3:
  VAR_0->model = VAR_2;
  VAR_0->rows = 32;
  VAR_0->cols = 80;
  break;
 case 4:
  VAR_0->model = VAR_2;
  VAR_0->rows = 43;
  VAR_0->cols = 80;
  break;
 case 5:
  VAR_0->model = VAR_2;
  VAR_0->rows = 27;
  VAR_0->cols = 132;
  break;
 }
}
