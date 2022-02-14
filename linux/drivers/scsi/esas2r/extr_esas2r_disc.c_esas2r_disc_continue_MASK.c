
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_request {int * interrupt_cx; } ;
struct esas2r_disc_context {int flags; int state; } ;
struct esas2r_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_3 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_4 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_5 (struct esas2r_adapter*) ;
 int FUNC_6 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_7 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_8 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_9 (struct esas2r_adapter*,struct esas2r_request*) ;
 int FUNC_10 (struct esas2r_adapter*) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static bool FUNC_12(struct esas2r_adapter *VAR_4,
     struct esas2r_request *VAR_5)
{
 struct esas2r_disc_context *VAR_6 =
  (struct esas2r_disc_context *)VAR_5->interrupt_cx;
 bool VAR_7;


 while (VAR_6->flags & (VAR_2 | VAR_3)) {
  VAR_7 = 0;

  switch (VAR_6->state) {
  case 133:

   VAR_7 = FUNC_4(VAR_4, VAR_5);
   break;

  case 134:

   VAR_7 = FUNC_3(VAR_4, VAR_5);
   break;

  case 135:

   VAR_7 = FUNC_2(VAR_4, VAR_5);
   break;

  case 128:

   VAR_7 = FUNC_9(VAR_4, VAR_5);
   break;

  case 131:

   VAR_7 = FUNC_6(VAR_4, VAR_5);
   break;

  case 129:

   VAR_7 = FUNC_8(VAR_4, VAR_5);
   break;
  case 130:

   VAR_7 = FUNC_7(VAR_4, VAR_5);
   break;
  case 132:

   VAR_6->flags &= ~(VAR_2 | VAR_3);
   break;

  default:

   FUNC_1();
   VAR_6->state = 132;
   break;
  }

  if (VAR_7)
   return 1;
 }


 VAR_5->interrupt_cx = ((void*)0);

 if (!FUNC_11(VAR_1, &VAR_4->flags))
  FUNC_5(VAR_4);

 FUNC_0(VAR_0, &VAR_4->flags);


 return FUNC_10(VAR_4);
}
