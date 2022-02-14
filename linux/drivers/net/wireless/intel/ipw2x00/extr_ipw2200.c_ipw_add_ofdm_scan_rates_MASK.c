
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ipw_supported_rates {int num_rates; scalar_t__* supported_rates; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void FUNC_0(struct ipw_supported_rates *VAR_18,
        u8 VAR_19, u32 VAR_20)
{
 u8 VAR_21 = (VAR_1 == VAR_19) ?
     VAR_0 : 0;

 if (VAR_20 & VAR_15)
  VAR_18->supported_rates[VAR_18->num_rates++] = VAR_21 |
      VAR_14;

 if (VAR_20 & VAR_17)
  VAR_18->supported_rates[VAR_18->num_rates++] =
      VAR_16;

 if (VAR_20 & VAR_3)
  VAR_18->supported_rates[VAR_18->num_rates++] = VAR_21 |
      VAR_2;

 if (VAR_20 & VAR_5)
  VAR_18->supported_rates[VAR_18->num_rates++] =
      VAR_4;

 if (VAR_20 & VAR_7)
  VAR_18->supported_rates[VAR_18->num_rates++] = VAR_21 |
      VAR_6;

 if (VAR_20 & VAR_9)
  VAR_18->supported_rates[VAR_18->num_rates++] =
      VAR_8;

 if (VAR_20 & VAR_11)
  VAR_18->supported_rates[VAR_18->num_rates++] =
      VAR_10;

 if (VAR_20 & VAR_13)
  VAR_18->supported_rates[VAR_18->num_rates++] =
      VAR_12;
}
