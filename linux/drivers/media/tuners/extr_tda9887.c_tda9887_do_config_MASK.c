
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9887_priv {char* data; int config; int std; scalar_t__ mode; } ;
struct dvb_frontend {struct tda9887_priv* analog_demod_priv; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 char VAR_15 ;
 char VAR_16 ;
 char VAR_17 ;
 char VAR_18 ;
 char VAR_19 ;
 char VAR_20 ;
 char VAR_21 ;
 char VAR_22 ;
 char VAR_23 ;
 char VAR_24 ;
 char VAR_25 ;
 char VAR_26 ;
 char VAR_27 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_28)
{
 struct tda9887_priv *VAR_29 = VAR_28->analog_demod_priv;
 char *VAR_30 = VAR_29->data;

 if (VAR_29->config & VAR_6)
  VAR_30[1] &= ~VAR_21;
 if (VAR_29->config & VAR_7)
  VAR_30[1] |= VAR_21;
 if (VAR_29->config & VAR_8)
  VAR_30[1] &= ~VAR_22;
 if (VAR_29->config & VAR_9)
  VAR_30[1] |= VAR_22;

 if (VAR_29->config & VAR_10)
  VAR_30[1] |= VAR_23;
 if (VAR_29->config & VAR_4)
  VAR_30[1] &= ~VAR_23;

 if (VAR_29->config & VAR_0)
  VAR_30[1] |= VAR_15;
 if (VAR_29->config & VAR_1) {
  VAR_30[2] &= ~0x60;
  switch (VAR_29->config & VAR_1) {
  case 128:
   VAR_30[2] |= VAR_18;
   break;
  case 130:
   VAR_30[2] |= VAR_19 | VAR_16;
   break;
  case 129:
   VAR_30[2] |= VAR_19 | VAR_17;
   break;
  }
 }
 if (VAR_29->config & VAR_12) {
  VAR_30[2] &= ~VAR_25;
  VAR_30[2] |= (VAR_29->config >> 8) & VAR_25;
 }
 if ((VAR_29->config & VAR_5) &&
     (VAR_29->std & VAR_13))
  VAR_30[1] &= ~VAR_23;
 if (VAR_29->config & VAR_3)
  VAR_30[3] &= ~VAR_20;

 if (VAR_29->mode == VAR_14) {
  if (VAR_29->config & VAR_11) {
   VAR_30[3] &= ~VAR_27;
   VAR_30[3] |= VAR_24;
  }
  if (VAR_29->config & VAR_2)
   VAR_30[3] &= ~VAR_26;
 }

 return 0;
}
