
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mgsl_struct {int params; int irq_spinlock; TYPE_1__* rx_buffer_list; TYPE_2__* tx_buffer_list; } ;
struct TYPE_4__ {unsigned int count; unsigned int rcc; int status; char* virt_addr; unsigned long phys_entry; } ;
struct TYPE_3__ {unsigned short status; unsigned int count; unsigned long phys_entry; int virt_addr; } ;
typedef int MGSL_PARAMS ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
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
 unsigned int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned long VAR_25 ;
 scalar_t__ FUNC_0 (char*,int ,unsigned int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (struct mgsl_struct*,int ) ;
 unsigned short FUNC_8 (struct mgsl_struct*,int ) ;
 int FUNC_9 (struct mgsl_struct*,int ) ;
 int FUNC_10 (struct mgsl_struct*,int ,unsigned short) ;
 int FUNC_11 (struct mgsl_struct*,int ,unsigned short) ;
 int FUNC_12 (struct mgsl_struct*,int ) ;
 int FUNC_13 (struct mgsl_struct*,int ) ;
 int FUNC_14 (struct mgsl_struct*,int) ;
 int FUNC_15 (struct mgsl_struct*) ;
 int FUNC_16 (struct mgsl_struct*) ;

__attribute__((used)) static bool FUNC_17( struct mgsl_struct *VAR_26 )
{
 unsigned short VAR_27;
 unsigned long VAR_28;
 unsigned int VAR_29;
 unsigned int VAR_30;
 char *VAR_31;
 bool VAR_32 = 1;
 unsigned short VAR_33=0;
 unsigned long VAR_34;
 unsigned long VAR_35;
 MGSL_PARAMS VAR_36;


 FUNC_1(&VAR_36,&VAR_26->params,sizeof(MGSL_PARAMS));

 FUNC_1(&VAR_26->params,&VAR_24,sizeof(MGSL_PARAMS));



 FUNC_4(&VAR_26->irq_spinlock,VAR_35);



 FUNC_15(VAR_26);
 FUNC_16(VAR_26);
 FUNC_14(VAR_26,1);
 FUNC_10( VAR_26, VAR_13, 0xe200 );

 FUNC_5(&VAR_26->irq_spinlock,VAR_35);




 VAR_29 = 40;




 VAR_26->tx_buffer_list[0].count = VAR_29;
 VAR_26->tx_buffer_list[0].rcc = VAR_29;
 VAR_26->tx_buffer_list[0].status = 0x4000;



 VAR_31 = VAR_26->tx_buffer_list[0].virt_addr;
 for (VAR_30 = 0; VAR_30 < VAR_29; VAR_30++ )
  *VAR_31++ = VAR_30;




 VAR_26->rx_buffer_list[0].status = 0;
 VAR_26->rx_buffer_list[0].count = VAR_29 + 4;



 FUNC_2( VAR_26->rx_buffer_list[0].virt_addr, 0, VAR_29 + 4 );




 VAR_26->tx_buffer_list[1].count = 0;
 VAR_26->rx_buffer_list[1].count = 0;






 FUNC_4(&VAR_26->irq_spinlock,VAR_35);


 FUNC_12( VAR_26, VAR_15 );


 VAR_28 = VAR_26->rx_buffer_list[0].phys_entry;
 FUNC_10( VAR_26, VAR_9, (unsigned short)VAR_28 );
 FUNC_10( VAR_26, VAR_10, (unsigned short)(VAR_28 >> 16) );


 FUNC_8( VAR_26, VAR_13 );
 FUNC_7( VAR_26, VAR_7 );


 FUNC_11( VAR_26, VAR_14, (unsigned short)((FUNC_9(VAR_26, VAR_14) & 0xfffc) | 0x0002) );

 FUNC_5(&VAR_26->irq_spinlock,VAR_35);







 VAR_34 = VAR_25 + FUNC_3(100);

 for(;;) {
  if (FUNC_6(VAR_25, VAR_34)) {
   VAR_32 = 0;
   break;
  }

  FUNC_4(&VAR_26->irq_spinlock,VAR_35);
  VAR_33 = FUNC_8( VAR_26, VAR_13 );
  FUNC_5(&VAR_26->irq_spinlock,VAR_35);

  if ( !(VAR_33 & VAR_3) && (VAR_33 & VAR_4) ) {



   break;
  }
 }






 FUNC_4(&VAR_26->irq_spinlock,VAR_35);




 FUNC_11( VAR_26, VAR_17, (unsigned short)VAR_26->tx_buffer_list[0].count );
 FUNC_12( VAR_26, VAR_16 );



 VAR_28 = VAR_26->tx_buffer_list[0].phys_entry;
 FUNC_10( VAR_26, VAR_11, (unsigned short)VAR_28 );
 FUNC_10( VAR_26, VAR_12, (unsigned short)(VAR_28 >> 16) );



 FUNC_11( VAR_26, VAR_18, (unsigned short)(( FUNC_9(VAR_26, VAR_18) & 0x0f00) | 0xfa) );
 FUNC_7( VAR_26, VAR_8 );



 FUNC_13( VAR_26, VAR_19 );

 FUNC_5(&VAR_26->irq_spinlock,VAR_35);







 VAR_34 = VAR_25 + FUNC_3(100);

 for(;;) {
  if (FUNC_6(VAR_25, VAR_34)) {
   VAR_32 = 0;
   break;
  }

  FUNC_4(&VAR_26->irq_spinlock,VAR_35);
  VAR_27 = FUNC_9(VAR_26, VAR_22) >> 8;
  FUNC_5(&VAR_26->irq_spinlock,VAR_35);

  if ( VAR_27 < 16 )
   break;
  else
   if ( VAR_29 < 32 ) {


    if ( VAR_27 <= (32 - VAR_29) )
     break;
   }
 }


 if ( VAR_32 )
 {


  FUNC_4(&VAR_26->irq_spinlock,VAR_35);


  FUNC_13( VAR_26, VAR_20 );
  FUNC_11( VAR_26, VAR_23, (unsigned short)((FUNC_9(VAR_26, VAR_23) & 0xfffc) | 0x0002) );

  FUNC_5(&VAR_26->irq_spinlock,VAR_35);







  VAR_34 = VAR_25 + FUNC_3(100);



  FUNC_4(&VAR_26->irq_spinlock,VAR_35);
  VAR_33 = FUNC_9( VAR_26, VAR_18 );
  FUNC_5(&VAR_26->irq_spinlock,VAR_35);

  while ( !(VAR_33 & (VAR_5 | VAR_4 | VAR_3 | VAR_1 | VAR_0)) ) {
   if (FUNC_6(VAR_25, VAR_34)) {
    VAR_32 = 0;
    break;
   }

   FUNC_4(&VAR_26->irq_spinlock,VAR_35);
   VAR_33 = FUNC_9( VAR_26, VAR_18 );
   FUNC_5(&VAR_26->irq_spinlock,VAR_35);
  }
 }


 if ( VAR_32 ){

  if ( VAR_33 & (VAR_4 | VAR_0) )
   VAR_32 = 0;
 }

 if ( VAR_32 ) {



  VAR_34 = VAR_25 + FUNC_3(100);


  VAR_33=VAR_26->rx_buffer_list[0].status;
  while ( VAR_33 == 0 ) {
   if (FUNC_6(VAR_25, VAR_34)) {
    VAR_32 = 0;
    break;
   }
   VAR_33=VAR_26->rx_buffer_list[0].status;
  }
 }


 if ( VAR_32 ) {

  VAR_33 = VAR_26->rx_buffer_list[0].status;

  if ( VAR_33 & (VAR_6 | VAR_2 | VAR_0) ) {

   VAR_32 = 0;
  } else {
   if ( FUNC_0( VAR_26->tx_buffer_list[0].virt_addr ,
    VAR_26->rx_buffer_list[0].virt_addr, VAR_29 ) ){
    VAR_32 = 0;
   }
  }
 }

 FUNC_4(&VAR_26->irq_spinlock,VAR_35);
 FUNC_15( VAR_26 );
 FUNC_5(&VAR_26->irq_spinlock,VAR_35);


 FUNC_1(&VAR_26->params,&VAR_36,sizeof(MGSL_PARAMS));

 return VAR_32;

}
