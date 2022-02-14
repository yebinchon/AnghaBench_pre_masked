
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ mode; } ;
struct mgsl_struct {int idle_mode; TYPE_1__ params; int tcsr_value; scalar_t__ usc_idle_mode; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mgsl_struct*,int ,int ) ;
 int FUNC_1 (struct mgsl_struct*,unsigned char,unsigned char) ;

__attribute__((used)) static void FUNC_2( struct mgsl_struct *VAR_10 )
{
 u16 VAR_11 = VAR_2;



 switch( VAR_10->idle_mode ){
 case 132: VAR_11 = VAR_2; break;
 case 133: VAR_11 = VAR_1; break;
 case 128: VAR_11 = VAR_7; break;
 case 130: VAR_11 = VAR_5; break;
 case 134: VAR_11 = VAR_0; break;
 case 129: VAR_11 = VAR_6; break;
 case 131: VAR_11 = VAR_3; break;
 }

 VAR_10->usc_idle_mode = VAR_11;

 VAR_10->tcsr_value &= ~VAR_4;
 VAR_10->tcsr_value += VAR_11;
 FUNC_0(VAR_10, VAR_9, VAR_10->tcsr_value);
 if ( VAR_10->params.mode == VAR_8 ) {
  unsigned char VAR_12 = 0;
  switch( VAR_10->idle_mode ) {
  case 132:
   VAR_12 = 0x7e;
   break;
  case 133:
   VAR_12 = 0x55;
   break;
  case 128:
  case 129:
   VAR_12 = 0x00;
   break;
  case 130:
  case 131:
   VAR_12 = 0xff;
   break;
  case 134:
   VAR_12 = 0xaa;
   break;
  }

  FUNC_1(VAR_10,VAR_12,VAR_12);
 }

}
