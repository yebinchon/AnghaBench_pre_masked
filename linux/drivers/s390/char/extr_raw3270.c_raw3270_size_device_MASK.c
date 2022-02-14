
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sdpid; int hauai; int wauai; } ;
struct TYPE_5__ {int qcode; int h; int w; int flags0; int l; } ;
struct raw3270_ua {TYPE_3__ aua; TYPE_2__ uab; } ;
struct TYPE_4__ {scalar_t__ rc; } ;
struct raw3270 {int* init_data; int model; int rows; int cols; int flags; TYPE_1__ init_readmod; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct raw3270 *VAR_1)
{
 struct raw3270_ua *VAR_2;


 VAR_2 = (struct raw3270_ua *) (VAR_1->init_data + 1);

 if (VAR_1->init_readmod.rc || VAR_1->init_data[0] != 0x88 ||
     VAR_2->uab.qcode != 0x81) {

  VAR_1->model = 2;
  VAR_1->rows = 24;
  VAR_1->cols = 80;
  return;
 }

 VAR_1->rows = VAR_2->uab.h;
 VAR_1->cols = VAR_2->uab.w;

 if ((VAR_2->uab.flags0 & 0x0d) == 0x01)
  FUNC_0(VAR_0, &VAR_1->flags);

 if (VAR_2->uab.l == sizeof(struct raw3270_ua) &&
     VAR_2->aua.sdpid == 0x02) {
  VAR_1->rows = VAR_2->aua.hauai;
  VAR_1->cols = VAR_2->aua.wauai;
 }

 VAR_1->model = 0;
 if (VAR_1->rows == 24 && VAR_1->cols == 80)
  VAR_1->model = 2;
 if (VAR_1->rows == 32 && VAR_1->cols == 80)
  VAR_1->model = 3;
 if (VAR_1->rows == 43 && VAR_1->cols == 80)
  VAR_1->model = 4;
 if (VAR_1->rows == 27 && VAR_1->cols == 132)
  VAR_1->model = 5;
}
