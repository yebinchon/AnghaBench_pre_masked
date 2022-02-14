
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mgsl_struct {scalar_t__ bus_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mgsl_struct*,int ) ;
 int FUNC_1 (struct mgsl_struct*,int ,int) ;

__attribute__((used)) static void FUNC_2( struct mgsl_struct *VAR_7, u32 VAR_8 )
{
 if ( VAR_8 ) {
  FUNC_1( VAR_7, VAR_2, 0x0f64 );
  if ( VAR_7->bus_type == VAR_5 )
   FUNC_1( VAR_7, VAR_6, (u16)((691200/VAR_8) - 1) );
  else
   FUNC_1( VAR_7, VAR_6, (u16)((921600/VAR_8) - 1) );
  FUNC_1( VAR_7, VAR_3,
       (u16)((FUNC_0( VAR_7, VAR_3 ) & ~VAR_1) | VAR_0) );




  FUNC_1( VAR_7, VAR_4,
       (u16)((FUNC_0(VAR_7, VAR_4) & 0xfff8) | 0x0004) );
 } else {

  FUNC_1( VAR_7, VAR_3, (u16)(FUNC_0( VAR_7, VAR_3 ) & ~VAR_0) );
 }

}
