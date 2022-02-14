
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dst_state {int diseq_flags; int decode_lock; int decode_strength; int decode_snr; scalar_t__ dst_type; int* rxbuffer; scalar_t__ cur_jiff; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dst_state*,int*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct dst_state *VAR_8)
{
 int VAR_9;
 u8 VAR_10[] = { 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfb };

 if ((VAR_8->diseq_flags & VAR_0) == 0) {
  VAR_8->decode_lock = VAR_8->decode_strength = VAR_8->decode_snr = 0;
  return 0;
 }
 if (0 == (VAR_8->diseq_flags & VAR_5)) {
  VAR_8->decode_lock = VAR_8->decode_strength = VAR_8->decode_snr = 0;
  return 0;
 }
 if (FUNC_1(VAR_7, VAR_8->cur_jiff + (VAR_6 / 5))) {
  VAR_9 = FUNC_0(VAR_8, VAR_10, 8);
  if (VAR_9 < 0)
   return VAR_9;
  if (VAR_8->dst_type == VAR_3) {
   VAR_8->decode_lock = ((VAR_8->rxbuffer[6] & 0x10) == 0) ? 1 : 0;
   VAR_8->decode_strength = VAR_8->rxbuffer[5] << 8;
   VAR_8->decode_snr = VAR_8->rxbuffer[2] << 8 | VAR_8->rxbuffer[3];
  } else if ((VAR_8->dst_type == VAR_4) || (VAR_8->dst_type == VAR_2)) {
   VAR_8->decode_lock = (VAR_8->rxbuffer[1]) ? 1 : 0;
   VAR_8->decode_strength = VAR_8->rxbuffer[4] << 8;
   VAR_8->decode_snr = VAR_8->rxbuffer[3] << 8;
  } else if (VAR_8->dst_type == VAR_1) {
   VAR_8->decode_lock = (VAR_8->rxbuffer[6] == 0x00) ? 1 : 0;
   VAR_8->decode_strength = VAR_8->rxbuffer[4] << 8;
   VAR_8->decode_snr = VAR_8->rxbuffer[2] << 8 | VAR_8->rxbuffer[3];
  }
  VAR_8->cur_jiff = VAR_7;
 }
 return 0;
}
