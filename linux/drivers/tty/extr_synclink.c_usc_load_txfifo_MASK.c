
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ tx; } ;
struct mgsl_struct {int xmit_cnt; int x_char; int* xmit_buf; int xmit_tail; TYPE_1__ icount; scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct mgsl_struct*,int ) ;
 int FUNC_3 (struct mgsl_struct*,int ) ;

__attribute__((used)) static void FUNC_4( struct mgsl_struct *VAR_7 )
{
 int VAR_8;
 u8 VAR_9[2];

 if ( !VAR_7->xmit_cnt && !VAR_7->x_char )
  return;


 FUNC_3( VAR_7, VAR_4 );



 while( (VAR_8 = FUNC_2(VAR_7, VAR_6) >> 8) && VAR_7->xmit_cnt ) {



  if ( (VAR_7->xmit_cnt > 1) && (VAR_8 > 1) && !VAR_7->x_char ) {


   VAR_9[0] = VAR_7->xmit_buf[VAR_7->xmit_tail++];
   VAR_7->xmit_tail = VAR_7->xmit_tail & (VAR_3-1);
   VAR_9[1] = VAR_7->xmit_buf[VAR_7->xmit_tail++];
   VAR_7->xmit_tail = VAR_7->xmit_tail & (VAR_3-1);

   FUNC_1( *((u16 *)VAR_9), VAR_7->io_base + VAR_1);

   VAR_7->xmit_cnt -= 2;
   VAR_7->icount.tx += 2;
  } else {


   FUNC_1( (FUNC_0( VAR_7->io_base + VAR_0) & 0x0780) | (VAR_5+VAR_2),
    VAR_7->io_base + VAR_0 );

   if (VAR_7->x_char) {

    FUNC_1( VAR_7->x_char,VAR_7->io_base + VAR_0 );
    VAR_7->x_char = 0;
   } else {
    FUNC_1( VAR_7->xmit_buf[VAR_7->xmit_tail++],VAR_7->io_base + VAR_0 );
    VAR_7->xmit_tail = VAR_7->xmit_tail & (VAR_3-1);
    VAR_7->xmit_cnt--;
   }
   VAR_7->icount.tx++;
  }
 }

}
