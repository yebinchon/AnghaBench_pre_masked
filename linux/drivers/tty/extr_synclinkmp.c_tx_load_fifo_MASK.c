
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_7__ {scalar_t__ tx; } ;
struct TYPE_8__ {int tx_count; scalar_t__ tx_get; scalar_t__ max_frame_size; TYPE_1__ icount; scalar_t__* tx_buf; scalar_t__ x_char; } ;
typedef TYPE_2__ SLMP_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(SLMP_INFO *VAR_3)
{
 u8 VAR_4[2];



 if ( !VAR_3->tx_count && !VAR_3->x_char )
  return;



 while( VAR_3->tx_count && (FUNC_0(VAR_3,VAR_1) & VAR_0) ) {




  if ( (VAR_3->tx_count > 1) && !VAR_3->x_char ) {

   VAR_4[0] = VAR_3->tx_buf[VAR_3->tx_get++];
   if (VAR_3->tx_get >= VAR_3->max_frame_size)
    VAR_3->tx_get -= VAR_3->max_frame_size;
   VAR_4[1] = VAR_3->tx_buf[VAR_3->tx_get++];
   if (VAR_3->tx_get >= VAR_3->max_frame_size)
    VAR_3->tx_get -= VAR_3->max_frame_size;

   FUNC_2(VAR_3, VAR_2, *((u16 *)VAR_4));

   VAR_3->tx_count -= 2;
   VAR_3->icount.tx += 2;
  } else {


   if (VAR_3->x_char) {

    FUNC_1(VAR_3, VAR_2, VAR_3->x_char);
    VAR_3->x_char = 0;
   } else {
    FUNC_1(VAR_3, VAR_2, VAR_3->tx_buf[VAR_3->tx_get++]);
    if (VAR_3->tx_get >= VAR_3->max_frame_size)
     VAR_3->tx_get -= VAR_3->max_frame_size;
    VAR_3->tx_count--;
   }
   VAR_3->icount.tx++;
  }
 }
}
