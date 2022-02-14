
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; scalar_t__ actual_length; } ;
struct TYPE_4__ {scalar_t__ data_length; TYPE_1__* srb; } ;
struct TYPE_3__ {int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4( struct urb* VAR_4 )

{
 int VAR_5 = VAR_4->status;
 FUNC_0();

 if ( VAR_3->data_length != VAR_4->actual_length ) {
  FUNC_2(VAR_3->srb, VAR_3->data_length -
          VAR_4->actual_length);
 } else if ( FUNC_3(VAR_5) ) {
  VAR_3->srb->result = (VAR_5 == -VAR_2 ? VAR_0 : VAR_1)<<16;
 }

 FUNC_1(VAR_4);
}
