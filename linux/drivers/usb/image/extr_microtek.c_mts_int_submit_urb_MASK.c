
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int usb_complete_t ;
struct urb {int dummy; } ;
struct TYPE_7__ {TYPE_2__* srb; TYPE_1__* instance; } ;
struct TYPE_6__ {int result; } ;
struct TYPE_5__ {int usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (struct urb*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct urb*,int ,int,void*,unsigned int,int ,TYPE_3__*) ;
 int FUNC_5 (struct urb*,int ) ;

__attribute__((used)) static inline
void FUNC_6 (struct urb* VAR_3,
   int VAR_4,
   void* VAR_5,
   unsigned VAR_6,
   usb_complete_t VAR_7 )



{
 int VAR_8;

 FUNC_1();

 FUNC_4(VAR_3,
        VAR_2->instance->usb_dev,
        VAR_4,
        VAR_5,
        VAR_6,
        VAR_7,
        VAR_2
  );

 VAR_8 = FUNC_5( VAR_3, VAR_1 );
 if ( FUNC_3(VAR_8) ) {
  FUNC_0( "could not submit URB! Error was %d\n",(int)VAR_8 );
  VAR_2->srb->result = VAR_0 << 16;
  FUNC_2(VAR_3);
 }
}
