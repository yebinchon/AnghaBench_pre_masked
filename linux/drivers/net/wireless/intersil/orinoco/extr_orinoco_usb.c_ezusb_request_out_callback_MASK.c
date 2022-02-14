
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ status; struct request_context* context; } ;
struct request_context {int state; int timer; int in_rid; scalar_t__ killed; struct ezusb_priv* upriv; } ;
struct ezusb_priv {int req_lock; } ;
typedef enum ezusb_state { ____Placeholder_ezusb_state } ezusb_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,scalar_t__) ;
 int FUNC_2 (struct request_context*) ;
 int FUNC_3 (struct ezusb_priv*,int *,scalar_t__) ;
 int FUNC_4 (struct request_context*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_4)
{
 unsigned long VAR_5;
 enum ezusb_state VAR_6;
 struct request_context *VAR_7 = VAR_4->context;
 struct ezusb_priv *VAR_8 = VAR_7->upriv;

 FUNC_6(&VAR_8->req_lock, VAR_5);

 FUNC_0(&VAR_7->timer);

 if (VAR_7->killed) {
  FUNC_7(&VAR_8->req_lock, VAR_5);
  FUNC_5("interrupt called with dead ctx\n");
  goto out;
 }

 VAR_6 = VAR_7->state;

 if (VAR_4->status == 0) {
  switch (VAR_6) {
  case 130:
   if (VAR_7->in_rid) {
    VAR_7->state = VAR_2;

    FUNC_3(VAR_8, &VAR_7->timer,
      VAR_3 + VAR_0);
    FUNC_7(&VAR_8->req_lock,
             VAR_5);
    break;
   }

  case 128:

   VAR_7->state = VAR_1;
   FUNC_7(&VAR_8->req_lock, VAR_5);
   FUNC_2(VAR_7);
   break;

  default:
   FUNC_7(&VAR_8->req_lock, VAR_5);
   FUNC_1("Unexpected state(0x%x, %d) in OUT URB",
       VAR_6, VAR_4->status);
   break;
  }
 } else {



  switch (VAR_6) {
  case 130:
  case 128:
   VAR_7->state = 131;


  case 131:
  case 129:
   FUNC_7(&VAR_8->req_lock, VAR_5);

   FUNC_2(VAR_7);
   break;

  default:
   FUNC_7(&VAR_8->req_lock, VAR_5);

   FUNC_1("Unexpected state(0x%x, %d) in OUT URB",
       VAR_6, VAR_4->status);
   break;
  }
 }
 out:
 FUNC_4(VAR_7);
}
