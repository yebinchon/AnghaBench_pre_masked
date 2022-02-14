
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_rx_status {int enc_flags; int bw; } ;
struct ath_htc_rx_status {int rs_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_0(struct ath_rx_status *VAR_5,
       struct ath_htc_rx_status *VAR_6)
{
 VAR_5->enc_flags = 0;
 VAR_5->bw = VAR_2;
 if (VAR_6->rs_flags & VAR_0)
  VAR_5->bw = VAR_3;
 if (VAR_6->rs_flags & VAR_1)
  VAR_5->enc_flags |= VAR_4;
}
