
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int flags; scalar_t__ pri2cos_valid; scalar_t__ fw_tx_stats_ext_size; scalar_t__ fw_rx_stats_ext_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct bnxt*) ;

__attribute__((used)) static int FUNC_1(struct bnxt *VAR_7)
{
 int VAR_8 = FUNC_0(VAR_7);

 VAR_8 += VAR_6;

 if (VAR_7->flags & VAR_1)
  VAR_8 += VAR_4;

 if (VAR_7->flags & VAR_2) {
  VAR_8 += VAR_7->fw_rx_stats_ext_size +
        VAR_7->fw_tx_stats_ext_size;
  if (VAR_7->pri2cos_valid)
   VAR_8 += VAR_5;
 }

 if (VAR_7->flags & VAR_0)
  VAR_8 += VAR_3;

 return VAR_8;
}
