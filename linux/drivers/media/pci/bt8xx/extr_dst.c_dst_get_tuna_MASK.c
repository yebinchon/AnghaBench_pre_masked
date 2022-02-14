
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int diseq_flags; int type_flags; scalar_t__ dst_type; int* rx_tuna; int decode_freq; int decode_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct dst_state*,int ) ;
 int FUNC_3 (struct dst_state*,int*,int) ;

__attribute__((used)) static int FUNC_4(struct dst_state *VAR_8)
{
 int VAR_9;

 if ((VAR_8->diseq_flags & VAR_0) == 0)
  return 0;
 VAR_8->diseq_flags &= ~(VAR_6);
 if (!FUNC_2(VAR_8, VAR_7))
  return -VAR_4;
 if ((VAR_8->type_flags & VAR_1) &&
  !(VAR_8->dst_type == VAR_2))

  VAR_9 = FUNC_3(VAR_8, VAR_8->rx_tuna, 10);
 else
  VAR_9 = FUNC_3(VAR_8, &VAR_8->rx_tuna[2], VAR_5);
 if (VAR_9 < 0) {
  FUNC_0(3, "read not successful\n");
  return VAR_9;
 }
 if ((VAR_8->type_flags & VAR_1) &&
    !(VAR_8->dst_type == VAR_2)) {

  if (VAR_8->rx_tuna[9] != FUNC_1(&VAR_8->rx_tuna[0], 9)) {
   FUNC_0(2, "checksum failure ?\n");
   return -VAR_4;
  }
 } else {
  if (VAR_8->rx_tuna[9] != FUNC_1(&VAR_8->rx_tuna[2], 7)) {
   FUNC_0(2, "checksum failure?\n");
   return -VAR_4;
  }
 }
 if (VAR_8->rx_tuna[2] == 0 && VAR_8->rx_tuna[3] == 0)
  return 0;
 if (VAR_8->dst_type == VAR_3) {
  VAR_8->decode_freq = ((VAR_8->rx_tuna[2] & 0x7f) << 8) + VAR_8->rx_tuna[3];
 } else {
  VAR_8->decode_freq = ((VAR_8->rx_tuna[2] & 0x7f) << 16) + (VAR_8->rx_tuna[3] << 8) + VAR_8->rx_tuna[4];
 }
 VAR_8->decode_freq = VAR_8->decode_freq * 1000;
 VAR_8->decode_lock = 1;
 VAR_8->diseq_flags |= VAR_6;

 return 1;
}
