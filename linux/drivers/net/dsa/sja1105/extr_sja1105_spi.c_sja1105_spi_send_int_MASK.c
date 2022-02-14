
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sja1105_private {int dummy; } ;
typedef scalar_t__ sja1105_spi_rw_mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int*,int,int ,int) ;
 int FUNC_1 (struct sja1105_private const*,scalar_t__,int,int *,int) ;
 int FUNC_2 (int *,int*,int,int ,int) ;

int FUNC_3(const struct sja1105_private *VAR_4,
    sja1105_spi_rw_mode_t VAR_5, u64 VAR_6,
    u64 *VAR_7, u64 VAR_8)
{
 u8 VAR_9[VAR_1];
 int VAR_10;

 if (VAR_8 > VAR_1)
  return -VAR_0;

 if (VAR_5 == VAR_3)
  FUNC_0(VAR_9, VAR_7, 8 * VAR_8 - 1, 0,
        VAR_8);

 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_9,
      VAR_8);

 if (VAR_5 == VAR_2)
  FUNC_2(VAR_9, VAR_7, 8 * VAR_8 - 1, 0,
          VAR_8);

 return VAR_10;
}
