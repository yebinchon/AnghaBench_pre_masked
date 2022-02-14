
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int flags; } ;
struct mgsl_struct {int current_rx_buffer; int rx_buffer_count; TYPE_1__ params; TYPE_2__* rx_buffer_list; } ;
struct TYPE_4__ {int phys_entry; int count; scalar_t__ status; } ;
typedef TYPE_2__ DMABUFFERENTRY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct mgsl_struct*) ;
 int FUNC_1 (struct mgsl_struct*,int) ;
 int FUNC_2 (struct mgsl_struct*,int ) ;
 int FUNC_3 (struct mgsl_struct*,int) ;
 int FUNC_4 (struct mgsl_struct*,int ) ;
 int FUNC_5 (struct mgsl_struct*,int ) ;
 int FUNC_6 (struct mgsl_struct*,int ) ;
 int FUNC_7 (struct mgsl_struct*,int ,int) ;
 int FUNC_8 (struct mgsl_struct*,int ,int) ;
 int FUNC_9 (struct mgsl_struct*,int ) ;
 int FUNC_10 (struct mgsl_struct*,int ) ;
 int FUNC_11 (struct mgsl_struct*,int) ;

__attribute__((used)) static void FUNC_12( struct mgsl_struct *VAR_21 )
{
 int VAR_22;
 int VAR_23;
 int VAR_24;
 bool VAR_25 = 0;
 bool VAR_26 = 0;
 bool VAR_27 = 0;

 DMABUFFERENTRY *VAR_28 = VAR_21->rx_buffer_list;
 u32 VAR_29;

 FUNC_2( VAR_21, VAR_9 );
 FUNC_9( VAR_21, VAR_15 );
 FUNC_10( VAR_21, VAR_19 );




 VAR_24 = VAR_22 = VAR_23 = VAR_21->current_rx_buffer;






 while( !VAR_28[VAR_23].count )
 {



  if ( !VAR_25 )
  {
   VAR_25 = 1;
   VAR_24 = VAR_23;
   VAR_26 = 0;
  }

  if ( VAR_28[VAR_23].status )
  {






   VAR_25 = 0;
   VAR_26 = 1;
  }


    VAR_23++;
    if ( VAR_23 == VAR_21->rx_buffer_count )
     VAR_23 = 0;

  if ( VAR_22 == VAR_23 )
  {



   FUNC_0( VAR_21 );
   VAR_24 = 0;
   VAR_25 = 0;
   VAR_27 = 1;
   break;
  }
 }

 if ( VAR_25 && !VAR_26 )
 {







  VAR_22 = VAR_24;

  do
  {
   *((unsigned long *)&(VAR_21->rx_buffer_list[VAR_22++].count)) = VAR_7;


     if ( VAR_22 == VAR_21->rx_buffer_count )
      VAR_22 = 0;

  } while( VAR_22 != VAR_23 );

  VAR_27 = 1;
 }

 if ( VAR_27 )
 {
  FUNC_11(VAR_21,VAR_20);
  FUNC_1(VAR_21, VAR_17|VAR_18);
  FUNC_11(VAR_21, VAR_17|VAR_18);

  FUNC_4(VAR_21,VAR_6);


  FUNC_8( VAR_21, VAR_4, (u16)(FUNC_6(VAR_21,VAR_4) | VAR_1) );


  VAR_29 = VAR_21->rx_buffer_list[VAR_24].phys_entry;
  FUNC_7( VAR_21, VAR_13, (u16)VAR_29 );
  FUNC_7( VAR_21, VAR_14, (u16)(VAR_29 >> 16) );

  FUNC_11( VAR_21, VAR_20 );
  FUNC_1( VAR_21, VAR_17 | VAR_18 );
  FUNC_3( VAR_21, VAR_18 );




  FUNC_7( VAR_21, VAR_16, VAR_3 | VAR_2 );
  FUNC_7( VAR_21, VAR_5, (u16)(FUNC_5(VAR_21,VAR_5) | VAR_0) );
  FUNC_2( VAR_21, VAR_8 );
  if ( VAR_21->params.flags & VAR_12 )
   FUNC_4(VAR_21,VAR_10);
  else
   FUNC_4(VAR_21,VAR_11);
 }
 else
 {

  FUNC_8( VAR_21, VAR_4, (u16)(FUNC_6(VAR_21,VAR_4) | VAR_1) );
  FUNC_10( VAR_21, VAR_19 );
 }

}
