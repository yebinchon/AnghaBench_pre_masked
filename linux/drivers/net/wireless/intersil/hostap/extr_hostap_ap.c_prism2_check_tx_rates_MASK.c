
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int tx_supp_rates; int* supported_rates; int tx_max_rate; int tx_rate; int tx_rate_idx; int local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sta_info*,int ) ;

__attribute__((used)) static void FUNC_1(struct sta_info *VAR_4)
{
 int VAR_5;

 VAR_4->tx_supp_rates = 0;
 for (VAR_5 = 0; VAR_5 < sizeof(VAR_4->supported_rates); VAR_5++) {
  if ((VAR_4->supported_rates[VAR_5] & 0x7f) == 2)
   VAR_4->tx_supp_rates |= VAR_1;
  if ((VAR_4->supported_rates[VAR_5] & 0x7f) == 4)
   VAR_4->tx_supp_rates |= VAR_2;
  if ((VAR_4->supported_rates[VAR_5] & 0x7f) == 11)
   VAR_4->tx_supp_rates |= VAR_3;
  if ((VAR_4->supported_rates[VAR_5] & 0x7f) == 22)
   VAR_4->tx_supp_rates |= VAR_0;
 }
 VAR_4->tx_max_rate = VAR_4->tx_rate = VAR_4->tx_rate_idx = 0;
 if (VAR_4->tx_supp_rates & VAR_1) {
  VAR_4->tx_max_rate = 0;
  if (FUNC_0(0, VAR_4, VAR_4->local)) {
   VAR_4->tx_rate = 10;
   VAR_4->tx_rate_idx = 0;
  }
 }
 if (VAR_4->tx_supp_rates & VAR_2) {
  VAR_4->tx_max_rate = 1;
  if (FUNC_0(1, VAR_4, VAR_4->local)) {
   VAR_4->tx_rate = 20;
   VAR_4->tx_rate_idx = 1;
  }
 }
 if (VAR_4->tx_supp_rates & VAR_3) {
  VAR_4->tx_max_rate = 2;
  if (FUNC_0(2, VAR_4, VAR_4->local)) {
   VAR_4->tx_rate = 55;
   VAR_4->tx_rate_idx = 2;
  }
 }
 if (VAR_4->tx_supp_rates & VAR_0) {
  VAR_4->tx_max_rate = 3;
  if (FUNC_0(3, VAR_4, VAR_4->local)) {
   VAR_4->tx_rate = 110;
   VAR_4->tx_rate_idx = 3;
  }
 }
}
