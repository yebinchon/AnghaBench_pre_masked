
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sx8_base {int iq_mode; int* used_ldpc_bitrate; int* demod_in_use; int * tuner_use_count; scalar_t__ direct_mode; } ;
struct TYPE_5__ {int tuner; int nr; int demod; struct mci_base* base; } ;
struct sx8 {TYPE_2__ mci; } ;
struct TYPE_4__ {int flags; int s2_modulation_mask; int retry; int frequency; int symbol_rate; int scrambling_sequence_index; int input_stream_id; } ;
struct mci_command {int demod; int output; int tuner; TYPE_1__ dvbs2_search; int command; } ;
struct mci_base {int dev; int tuner_lock; } ;
struct dtv_frontend_properties {int symbol_rate; int stream_id; int frequency; int scrambling_sequence_index; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct sx8* demodulator_priv; } ;
typedef int cmd ;


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
 int FUNC_0 (TYPE_2__*,struct mci_command*,int *) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,char*,size_t,int,int) ;
 int FUNC_3 (struct dvb_frontend*,int,int) ;
 int FUNC_4 (struct mci_command*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_11, u32 VAR_12, u32 VAR_13, u32 VAR_14)
{
 struct sx8 *VAR_15 = VAR_11->demodulator_priv;
 struct mci_base *VAR_16 = VAR_15->mci.base;
 struct sx8_base *VAR_17 = (struct sx8_base *)VAR_16;
 struct dtv_frontend_properties *VAR_18 = &VAR_11->dtv_property_cache;
 u32 VAR_19 = 0, VAR_20;
 u32 VAR_21 = 0;
 struct mci_command VAR_22;
 u32 VAR_23 = VAR_15->mci.tuner;
 u32 VAR_24 = 0;
 int VAR_25 = -1, VAR_26 = 0;

 if (VAR_18->symbol_rate >= (VAR_5 / 2))
  VAR_12 &= ~1;
 if ((VAR_12 & 3) == 0)
  return -VAR_1;

 if (VAR_12 & 2) {
  u32 VAR_27 = VAR_13;

  VAR_24 = 1;
  while (VAR_27 & 1) {
   VAR_27 >>= 1;
   VAR_24++;
  }
 }

 FUNC_5(&VAR_16->tuner_lock);
 if (VAR_17->iq_mode) {
  VAR_26 = -VAR_0;
  goto unlock;
 }

 if (VAR_17->direct_mode) {
  if (VAR_18->symbol_rate >= VAR_5 / 2) {
   if (VAR_15->mci.nr < 4)
    VAR_25 = VAR_15->mci.nr;
  } else {
   VAR_25 = VAR_15->mci.nr;
  }
 } else {
  for (VAR_25 = 0; VAR_25 < VAR_8; VAR_25++) {
   VAR_19 += VAR_17->used_ldpc_bitrate[VAR_25];
   if (VAR_17->demod_in_use[VAR_25])
    VAR_21++;
  }
  if (VAR_19 >= VAR_3 ||
      ((VAR_14 & VAR_9) >
       VAR_10 && VAR_21 > 0)) {
   VAR_26 = -VAR_0;
   goto unlock;
  }
  VAR_20 = VAR_3 - VAR_19;
  if (VAR_20 > VAR_2)
   VAR_20 = VAR_2;

  while (VAR_18->symbol_rate * VAR_24 > VAR_20)
   VAR_24--;
  if (VAR_24 < 2) {
   VAR_26 = -VAR_0;
   goto unlock;
  }

  VAR_13 &= ((1 << (VAR_24 - 1)) - 1);
  if (((VAR_12 & 0x02) != 0) && VAR_13 == 0) {
   VAR_26 = -VAR_0;
   goto unlock;
  }

  VAR_25 = (VAR_18->symbol_rate > (VAR_5 / 2)) ? 3 : 7;
  while (VAR_25 >= 0 && VAR_17->demod_in_use[VAR_25])
   VAR_25--;
 }

 if (VAR_25 < 0) {
  VAR_26 = -VAR_0;
  goto unlock;
 }
 VAR_17->demod_in_use[VAR_25] = 1;
 VAR_17->used_ldpc_bitrate[VAR_15->mci.nr] = VAR_18->symbol_rate
           * VAR_24;
 VAR_15->mci.demod = VAR_25;

 if (!VAR_17->tuner_use_count[VAR_23])
  FUNC_3(VAR_11, VAR_23, 1);
 VAR_17->tuner_use_count[VAR_23]++;
 VAR_17->iq_mode = (VAR_14 > 1);
unlock:
 FUNC_6(&VAR_16->tuner_lock);
 if (VAR_26)
  return VAR_26;
 FUNC_4(&VAR_22, 0, sizeof(VAR_22));

 if (VAR_17->iq_mode) {
  VAR_22.command = VAR_7;
  VAR_22.demod = VAR_15->mci.demod;
  VAR_22.output = 0;
  FUNC_0(&VAR_15->mci, &VAR_22, ((void*)0));
  FUNC_1(&VAR_15->mci, VAR_14);
 }
 if (VAR_18->stream_id != VAR_6 && VAR_18->stream_id != 0x80000000)
  VAR_12 |= 0x80;
 FUNC_2(VAR_16->dev, "MCI-%d: tuner=%d demod=%d\n",
  VAR_15->mci.nr, VAR_15->mci.tuner, VAR_15->mci.demod);
 VAR_22.command = VAR_4;
 VAR_22.dvbs2_search.flags = VAR_12;
 VAR_22.dvbs2_search.s2_modulation_mask = VAR_13;
 VAR_22.dvbs2_search.retry = 2;
 VAR_22.dvbs2_search.frequency = VAR_18->frequency * 1000;
 VAR_22.dvbs2_search.symbol_rate = VAR_18->symbol_rate;
 VAR_22.dvbs2_search.scrambling_sequence_index =
  VAR_18->scrambling_sequence_index | 0x80000000;
 VAR_22.dvbs2_search.input_stream_id =
  (VAR_18->stream_id != VAR_6) ? VAR_18->stream_id : 0;
 VAR_22.tuner = VAR_15->mci.tuner;
 VAR_22.demod = VAR_15->mci.demod;
 VAR_22.output = VAR_15->mci.nr;
 if (VAR_18->stream_id == 0x80000000)
  VAR_22.output |= 0x80;
 VAR_26 = FUNC_0(&VAR_15->mci, &VAR_22, ((void*)0));
 if (VAR_26)
  FUNC_7(VAR_11);
 return VAR_26;
}
