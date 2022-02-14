
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mgsl_struct {scalar_t__ bus_type; scalar_t__ io_base; scalar_t__ usc_idle_mode; scalar_t__ loopback_bits; scalar_t__ mbre_bit; int misc_ctrl_value; scalar_t__ lcr_base; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int ,int,int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct mgsl_struct*,int ,int) ;
 int FUNC_4 (struct mgsl_struct*,int ) ;

__attribute__((used)) static void FUNC_5( struct mgsl_struct *VAR_7 )
{
 if ( VAR_7->bus_type == VAR_3 ) {
  int VAR_8;
  u32 VAR_9;




  volatile u32 *VAR_10 = (u32 *)(VAR_7->lcr_base + 0x50);
  u32 *VAR_11 = (u32 *)(VAR_7->lcr_base + 0x28);

  VAR_7->misc_ctrl_value |= VAR_0;
  *VAR_10 = VAR_7->misc_ctrl_value;






  for(VAR_8=0;VAR_8<10;VAR_8++)
   VAR_9 = *VAR_10;

  VAR_7->misc_ctrl_value &= ~VAR_0;
  *VAR_10 = VAR_7->misc_ctrl_value;

  *VAR_11 = FUNC_0(
   1,
   2,
   2,
   0,
   4,
   0,
   0,
   5
   );
 } else {

  FUNC_1( 0,VAR_7->io_base + 8 );
 }

 VAR_7->mbre_bit = 0;
 VAR_7->loopback_bits = 0;
 VAR_7->usc_idle_mode = 0;
 FUNC_2( 0x000c,VAR_7->io_base + VAR_6 );


 FUNC_2( 0,VAR_7->io_base );
 FUNC_2( 0,VAR_7->io_base + VAR_1 );


 FUNC_4( VAR_7, VAR_5 );
 FUNC_3( VAR_7, VAR_4, 0xf0f5 );
 FUNC_3( VAR_7, VAR_2, 0x0004 );

}
