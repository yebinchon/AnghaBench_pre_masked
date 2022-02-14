
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {int req_stat; struct esas2r_disc_context* interrupt_cx; } ;
struct esas2r_disc_context {int disc_evt; int state; int flags; } ;
struct esas2r_adapter {scalar_t__ disc_wait_time; int flags; struct esas2r_disc_context disc_ctx; struct esas2r_request general_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

bool FUNC_7(struct esas2r_adapter *VAR_11)
{
 struct esas2r_request *VAR_12 = &VAR_11->general_req;
 struct esas2r_disc_context *VAR_13 = &VAR_11->disc_ctx;
 bool VAR_14;

 FUNC_3();

 if (FUNC_6(VAR_0, &VAR_11->flags)) {
  FUNC_4();

  return 0;
 }


 if (VAR_13->disc_evt) {
  if (FUNC_6(VAR_1, &VAR_11->flags)
      && VAR_11->disc_wait_time == 0) {






   FUNC_4();

   return 0;
  }
 } else {


  FUNC_1("disc done");

  FUNC_5(VAR_2, &VAR_11->flags);

  FUNC_4();

  return 0;
 }


 FUNC_2("disc_evt: %d", VAR_13->disc_evt);
 FUNC_5(VAR_0, &VAR_11->flags);
 VAR_13->flags = 0;

 if (FUNC_6(VAR_1, &VAR_11->flags))
  VAR_13->flags |= VAR_7;

 VAR_12->interrupt_cx = VAR_13;
 VAR_12->req_stat = VAR_10;


 if (VAR_13->disc_evt & VAR_4) {
  VAR_13->disc_evt &= ~VAR_4;

  VAR_13->flags |= VAR_6;
  VAR_13->state = VAR_8;
 } else if (VAR_13->disc_evt & VAR_3) {
  VAR_13->disc_evt &= ~VAR_3;

  VAR_13->flags |= VAR_5;
  VAR_13->state = VAR_9;
 }


 if (!FUNC_6(VAR_1, &VAR_11->flags))
  VAR_14 = FUNC_0(VAR_11, VAR_12);
 else
  VAR_14 = 1;

 FUNC_4();

 return VAR_14;
}
