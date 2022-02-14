
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mgsl_struct {unsigned char serial_signals; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (struct mgsl_struct*,int ) ;
 int FUNC_1 (struct mgsl_struct*,int ,int ) ;

__attribute__((used)) static void FUNC_2( struct mgsl_struct *VAR_5 )
{
 u16 VAR_6;
 unsigned char VAR_7 = VAR_5->serial_signals;



 VAR_6 = FUNC_0( VAR_5, VAR_2 );

 if ( VAR_7 & VAR_4 )
  VAR_6 &= ~(VAR_1);
 else
  VAR_6 |= VAR_1;

 if ( VAR_7 & VAR_3 )
  VAR_6 &= ~(VAR_0);
 else
  VAR_6 |= VAR_0;

 FUNC_1( VAR_5, VAR_2, VAR_6 );

}
