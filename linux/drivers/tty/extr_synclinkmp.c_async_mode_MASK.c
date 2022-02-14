
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int stop_bits; int data_bits; scalar_t__ parity; int data_rate; scalar_t__ loopback; } ;
struct TYPE_13__ {int port_num; int serial_signals; unsigned char ie0_value; unsigned char ie1_value; unsigned char ie2_value; TYPE_2__ params; TYPE_1__** port_array; } ;
struct TYPE_11__ {unsigned char ctrlreg_value; } ;
typedef TYPE_3__ SLMP_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned char VAR_17 ;
 int VAR_18 ;
 unsigned char VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned char VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_6(SLMP_INFO *VAR_26)
{

   unsigned char VAR_27;

 FUNC_3(VAR_26);
 FUNC_0(VAR_26);
 VAR_27 = 0x00;
 if (VAR_26->params.stop_bits != 1)
  VAR_27 |= VAR_3;
 FUNC_5(VAR_26, VAR_14, VAR_27);
 VAR_27 = 0x40;
 switch (VAR_26->params.data_bits) {
 case 7: VAR_27 |= VAR_6 + VAR_4; break;
 case 6: VAR_27 |= VAR_7 + VAR_5; break;
 case 5: VAR_27 |= VAR_7 + VAR_6 + VAR_5 + VAR_4; break;
 }
 if (VAR_26->params.parity != VAR_0) {
  VAR_27 |= VAR_3;
  if (VAR_26->params.parity == VAR_1)
   VAR_27 |= VAR_2;
 }
 FUNC_5(VAR_26, VAR_15, VAR_27);
 VAR_27 = 0x00;
 if (VAR_26->params.loopback)
  VAR_27 |= (VAR_3 + VAR_2);
 FUNC_5(VAR_26, VAR_16, VAR_27);







 VAR_27=VAR_8;
 FUNC_5(VAR_26, VAR_20, VAR_27);







 VAR_27=VAR_8;
 FUNC_5(VAR_26, VAR_25, VAR_27);





 VAR_26->port_array[0]->ctrlreg_value |= (VAR_2 << (VAR_26->port_num * 2));
 FUNC_4(VAR_26);

 FUNC_2(VAR_26);






 FUNC_5(VAR_26, VAR_18, 0x00);






 FUNC_5(VAR_26, VAR_22, 0x10);






 FUNC_5(VAR_26, VAR_23, 0x1e);
 VAR_27 = 0x10;
 if (!(VAR_26->serial_signals & VAR_21))
  VAR_27 |= 0x01;
 FUNC_5(VAR_26, VAR_10, VAR_27);


 VAR_26->ie0_value |= VAR_24 + VAR_19;
 FUNC_5(VAR_26, VAR_11, VAR_26->ie0_value);


 VAR_26->ie1_value = VAR_9;
 FUNC_5(VAR_26, VAR_12, VAR_26->ie1_value);


 VAR_26->ie2_value = VAR_17;
 FUNC_5(VAR_26, VAR_13, VAR_26->ie2_value);

 FUNC_1( VAR_26, VAR_26->params.data_rate * 16 );
}
