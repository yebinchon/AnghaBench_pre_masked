
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int stop_bits; int data_bits; scalar_t__ parity; scalar_t__ loopback; int data_rate; } ;
struct mgsl_struct {int loopback_bits; scalar_t__ io_base; TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct mgsl_struct*,scalar_t__) ;
 int FUNC_2 (struct mgsl_struct*,scalar_t__) ;
 int FUNC_3 (struct mgsl_struct*) ;
 int FUNC_4 (struct mgsl_struct*,int ) ;
 int FUNC_5 (struct mgsl_struct*) ;
 int FUNC_6 (struct mgsl_struct*,int ,int) ;
 int FUNC_7 (struct mgsl_struct*,int ) ;
 int FUNC_8 (struct mgsl_struct*,int ) ;
 int FUNC_9 (struct mgsl_struct*,int ) ;
 int FUNC_10 (struct mgsl_struct*,int ) ;
 int FUNC_11 (struct mgsl_struct*,int ) ;
 int FUNC_12 (struct mgsl_struct*) ;
 int FUNC_13 (struct mgsl_struct*) ;

__attribute__((used)) static void FUNC_14( struct mgsl_struct *VAR_24 )
{
 u16 VAR_25;


 FUNC_3( VAR_24 );

 FUNC_0( 0, VAR_24->io_base );
 FUNC_4( VAR_24, VAR_11 );

 FUNC_12( VAR_24 );
 VAR_25 = 0;
 if ( VAR_24->params.stop_bits != 1 )
  VAR_25 |= VAR_2;
 FUNC_6( VAR_24, VAR_10, VAR_25 );
 VAR_25 = 0;

 if ( VAR_24->params.data_bits != 8 )
  VAR_25 |= VAR_5 | VAR_4 | VAR_3;

 if ( VAR_24->params.parity != VAR_0 ) {
  VAR_25 |= VAR_6;
  if ( VAR_24->params.parity != VAR_1 )
   VAR_25 |= VAR_7;
 }

 FUNC_6( VAR_24, VAR_16, VAR_25 );




 FUNC_7( VAR_24, VAR_12 );
 FUNC_6( VAR_24, VAR_15, 0x0000 );

 FUNC_9( VAR_24, VAR_17 );
 FUNC_1( VAR_24, VAR_14 );
 VAR_25 = 0;

 if ( VAR_24->params.data_bits != 8 )
  VAR_25 |= VAR_5 | VAR_4 | VAR_3;

 if ( VAR_24->params.parity != VAR_0 ) {
  VAR_25 |= VAR_6;
  if ( VAR_24->params.parity != VAR_1 )
   VAR_25 |= VAR_7;
 }

 FUNC_6( VAR_24, VAR_20, VAR_25 );

 FUNC_13( VAR_24 );




 FUNC_8( VAR_24, VAR_18 );
 FUNC_6( VAR_24, VAR_19, 0x1f40 );

 FUNC_10( VAR_24, VAR_23 );
 FUNC_1( VAR_24, VAR_22 );

 FUNC_11( VAR_24, VAR_24->params.data_rate );
 FUNC_6( VAR_24, VAR_9, 0x0020 );

 FUNC_2( VAR_24, VAR_22 + VAR_21 +
         VAR_13 + VAR_14 );

 FUNC_1( VAR_24, VAR_22 + VAR_21 +
    VAR_13 + VAR_14 );

 FUNC_5( VAR_24 );

 if (VAR_24->params.loopback) {
  VAR_24->loopback_bits = 0x300;
  FUNC_0(0x0300, VAR_24->io_base + VAR_8);
 }

}
