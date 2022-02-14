
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int serial_signals; int port_num; } ;
typedef TYPE_1__ SLMP_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(SLMP_INFO *VAR_11)
{
 u16 VAR_12 = FUNC_0(VAR_11, VAR_4);
 u16 VAR_13 = FUNC_1(VAR_11);
 u16 VAR_14;


 VAR_11->serial_signals &= VAR_10 | VAR_8;



 if (!(VAR_12 & VAR_3))
  VAR_11->serial_signals |= VAR_5;

 if ( !(VAR_12 & VAR_2))
  VAR_11->serial_signals |= VAR_6;

 VAR_14 = VAR_1 << (VAR_11->port_num * 2);
 if (!(VAR_13 & VAR_14))
  VAR_11->serial_signals |= VAR_9;

 VAR_14 = VAR_0 << (VAR_11->port_num * 2);
 if (!(VAR_13 & VAR_14))
  VAR_11->serial_signals |= VAR_7;
}
