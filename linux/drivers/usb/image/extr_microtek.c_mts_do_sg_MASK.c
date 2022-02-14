
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct urb {int status; } ;
struct TYPE_9__ {TYPE_1__* curr_sg; int data_pipe; TYPE_5__* srb; int fragment; } ;
struct TYPE_8__ {int result; } ;
struct TYPE_7__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 () ;
 TYPE_6__* VAR_3 ;
 void FUNC_2 (struct urb*) ;
 int FUNC_3 (struct urb*,int ,int ,int ,void (*) (struct urb*)) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10 (struct urb* VAR_4)
{
 int VAR_5 = VAR_4->status;
 FUNC_1();

 FUNC_0("Processing fragment %d of %d\n", VAR_3->fragment,
                                           FUNC_5(VAR_3->srb));

 if (FUNC_9(VAR_5)) {
                VAR_3->srb->result = (VAR_5 == -VAR_2 ? VAR_0 : VAR_1)<<16;
  FUNC_4(VAR_4);
        }

 VAR_3->curr_sg = FUNC_7(VAR_3->curr_sg);
 FUNC_3(VAR_4,
      VAR_3->data_pipe,
      FUNC_8(VAR_3->curr_sg),
      VAR_3->curr_sg->length,
      FUNC_6(VAR_3->curr_sg) ?
      FUNC_2 : FUNC_10);
}
