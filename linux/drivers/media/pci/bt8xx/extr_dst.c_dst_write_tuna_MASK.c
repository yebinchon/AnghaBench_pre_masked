
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dvb_frontend {struct dst_state* demodulator_priv; } ;
struct dst_state {scalar_t__ type_flags; scalar_t__ dst_type; int diseq_flags; int dst_mutex; void** tx_tuna; scalar_t__ decode_snr; scalar_t__ decode_strength; scalar_t__ decode_lock; scalar_t__ decode_freq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,char*,...) ;
 void* FUNC_1 (void**,int) ;
 scalar_t__ FUNC_2 (struct dst_state*) ;
 int FUNC_3 (struct dst_state*) ;
 scalar_t__ FUNC_4 (struct dst_state*) ;
 int FUNC_5 (struct dvb_frontend*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct dst_state*,scalar_t__*,int ) ;
 int FUNC_9 (struct dst_state*,void**,int) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend *VAR_11)
{
 struct dst_state *VAR_12 = VAR_11->demodulator_priv;
 int VAR_13;
 u8 VAR_14;

 FUNC_0(2, "type_flags 0x%x\n", VAR_12->type_flags);
 VAR_12->decode_freq = 0;
 VAR_12->decode_lock = VAR_12->decode_strength = VAR_12->decode_snr = 0;
 if (VAR_12->dst_type == VAR_4) {
  if (!(VAR_12->diseq_flags & VAR_9))
   FUNC_5(VAR_11, VAR_10);
 }
 VAR_12->diseq_flags &= ~(VAR_8 | VAR_1);
 FUNC_6(&VAR_12->dst_mutex);
 if ((FUNC_2(VAR_12)) < 0) {
  FUNC_0(3, "DST Communication initialization failed.\n");
  goto error;
 }

 if ((VAR_12->type_flags & VAR_2) &&
  (!(VAR_12->dst_type == VAR_3))) {

  VAR_12->tx_tuna[9] = FUNC_1(&VAR_12->tx_tuna[0], 9);
  VAR_13 = FUNC_9(VAR_12, &VAR_12->tx_tuna[0], 10);
 } else {
  VAR_12->tx_tuna[9] = FUNC_1(&VAR_12->tx_tuna[2], 7);
  VAR_13 = FUNC_9(VAR_12, &VAR_12->tx_tuna[2], VAR_6);
 }
 if (VAR_13 < 0) {
  FUNC_4(VAR_12);
  FUNC_0(3, "write not successful\n");
  goto werr;
 }
 if ((FUNC_4(VAR_12)) < 0) {
  FUNC_0(3, "DST PIO disable failed !\n");
  goto error;
 }
 if ((FUNC_8(VAR_12, &VAR_14, VAR_7) < 0)) {
  FUNC_0(3, "read verify not successful.\n");
  goto error;
 }
 if (VAR_14 != VAR_0) {
  FUNC_0(3, "write not acknowledged 0x%02x\n", VAR_14);
  goto error;
 }
 VAR_12->diseq_flags |= VAR_1;
 VAR_13 = FUNC_3(VAR_12);
werr:
 FUNC_7(&VAR_12->dst_mutex);
 return VAR_13;

error:
 FUNC_7(&VAR_12->dst_mutex);
 return -VAR_5;
}
