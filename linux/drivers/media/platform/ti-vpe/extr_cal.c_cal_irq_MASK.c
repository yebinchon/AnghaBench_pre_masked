
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cal_dmaqueue {int active; } ;
struct cal_dev {struct cal_ctx** ctx; } ;
struct cal_ctx {scalar_t__ cur_frm; scalar_t__ next_frm; int slock; struct cal_dmaqueue vidq; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct cal_ctx*) ;
 int FUNC_2 (struct cal_ctx*) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct cal_dev*,int ) ;
 int FUNC_6 (struct cal_dev*,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_1, void *VAR_2)
{
 struct cal_dev *VAR_3 = (struct cal_dev *)VAR_2;
 struct cal_ctx *VAR_4;
 struct cal_dmaqueue *VAR_5;
 u32 VAR_6, VAR_7;


 VAR_6 = FUNC_5(VAR_3, FUNC_0(2));
 if (VAR_6) {

  FUNC_6(VAR_3, FUNC_0(2), VAR_6);


  if (FUNC_3(VAR_6, 1)) {
   VAR_4 = VAR_3->ctx[0];

   if (VAR_4->cur_frm != VAR_4->next_frm)
    FUNC_1(VAR_4);
  }

  if (FUNC_3(VAR_6, 2)) {
   VAR_4 = VAR_3->ctx[1];

   if (VAR_4->cur_frm != VAR_4->next_frm)
    FUNC_1(VAR_4);
  }
 }


 VAR_7 = FUNC_5(VAR_3, FUNC_0(3));
 if (VAR_7) {

  FUNC_6(VAR_3, FUNC_0(3), VAR_7);


  if (FUNC_3(VAR_7, 1)) {
   VAR_4 = VAR_3->ctx[0];
   VAR_5 = &VAR_4->vidq;

   FUNC_7(&VAR_4->slock);
   if (!FUNC_4(&VAR_5->active) &&
       VAR_4->cur_frm == VAR_4->next_frm)
    FUNC_2(VAR_4);
   FUNC_8(&VAR_4->slock);
  }

  if (FUNC_3(VAR_7, 2)) {
   VAR_4 = VAR_3->ctx[1];
   VAR_5 = &VAR_4->vidq;

   FUNC_7(&VAR_4->slock);
   if (!FUNC_4(&VAR_5->active) &&
       VAR_4->cur_frm == VAR_4->next_frm)
    FUNC_2(VAR_4);
   FUNC_8(&VAR_4->slock);
  }
 }

 return VAR_0;
}
