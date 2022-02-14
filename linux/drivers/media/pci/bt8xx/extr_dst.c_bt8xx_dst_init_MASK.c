
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int ter_tuna_204 ;
struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {int k22; int bandwidth; scalar_t__ dst_type; int type_flags; int tx_tuna; int cur_jiff; scalar_t__ diseq_flags; int tone; int voltage; int inversion; } ;
typedef int sat_tuna_204 ;
typedef int cab_tuna_204 ;
typedef int atsc_tuner ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_9)
{
 struct dst_state *VAR_10 = VAR_9->demodulator_priv;

 static u8 VAR_11[] = { 0x09, 0x00, 0x03, 0xb6, 0x01, 0x00, 0x73, 0x21, 0x00, 0x00 };
 static u8 VAR_12[] = { 0x00, 0x00, 0x03, 0xb6, 0x01, 0x55, 0xbd, 0x50, 0x00, 0x00 };
 static u8 VAR_13[] = { 0x09, 0x00, 0x03, 0xb6, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00 };
 static u8 VAR_14[] = { 0x00, 0x00, 0x03, 0xb6, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00 };
 static u8 VAR_15[] = { 0x09, 0x00, 0x03, 0xb6, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00 };
 static u8 VAR_16[] = { 0x00, 0x00, 0x03, 0xb6, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00 };
 static u8 VAR_17[] = { 0x00, 0x00, 0x03, 0xb6, 0x01, 0x07, 0x00, 0x00, 0x00, 0x00 };

 VAR_10->inversion = VAR_5;
 VAR_10->voltage = VAR_7;
 VAR_10->tone = VAR_6;
 VAR_10->diseq_flags = 0;
 VAR_10->k22 = 0x02;
 VAR_10->bandwidth = 7000000;
 VAR_10->cur_jiff = VAR_8;
 if (VAR_10->dst_type == VAR_3)
  FUNC_0(VAR_10->tx_tuna, ((VAR_10->type_flags & VAR_0) ? VAR_11 : VAR_12), sizeof (VAR_12));
 else if (VAR_10->dst_type == VAR_4)
  FUNC_0(VAR_10->tx_tuna, ((VAR_10->type_flags & VAR_0) ? VAR_13 : VAR_14), sizeof (VAR_14));
 else if (VAR_10->dst_type == VAR_2)
  FUNC_0(VAR_10->tx_tuna, ((VAR_10->type_flags & VAR_0) ? VAR_15 : VAR_16), sizeof (VAR_16));
 else if (VAR_10->dst_type == VAR_1)
  FUNC_0(VAR_10->tx_tuna, VAR_17, sizeof (VAR_17));

 return 0;
}
