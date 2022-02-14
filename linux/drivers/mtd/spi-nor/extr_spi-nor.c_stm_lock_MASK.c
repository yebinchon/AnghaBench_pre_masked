
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u8 ;
struct mtd_info {scalar_t__ size; } ;
struct spi_nor {int flags; struct mtd_info mtd; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct spi_nor*) ;
 scalar_t__ FUNC_3 (struct spi_nor*,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct spi_nor*,int,int) ;

__attribute__((used)) static int FUNC_5(struct spi_nor *VAR_7, loff_t VAR_8, uint64_t VAR_9)
{
 struct mtd_info *VAR_10 = &VAR_7->mtd;
 int VAR_11, VAR_12;
 u8 VAR_13 = VAR_4 | VAR_3 | VAR_2;
 u8 VAR_14 = FUNC_0(VAR_13) - 1, VAR_15, VAR_16;
 loff_t VAR_17;
 bool VAR_18 = 1, VAR_19 = VAR_7->flags & VAR_1;
 bool VAR_20;

 VAR_11 = FUNC_2(VAR_7);
 if (VAR_11 < 0)
  return VAR_11;


 if (FUNC_3(VAR_7, VAR_8, VAR_9, VAR_11))
  return 0;


 if (!FUNC_3(VAR_7, 0, VAR_8, VAR_11))
  VAR_19 = 0;


 if (!FUNC_3(VAR_7, VAR_8 + VAR_9, VAR_10->size - (VAR_8 + VAR_9),
    VAR_11))
  VAR_18 = 0;

 if (!VAR_19 && !VAR_18)
  return -VAR_0;


 VAR_20 = VAR_18;


 if (VAR_20)
  VAR_17 = VAR_10->size - VAR_8;
 else
  VAR_17 = VAR_8 + VAR_9;
 VAR_15 = FUNC_1(VAR_10->size) - FUNC_1(VAR_17);
 VAR_16 = VAR_13 - (VAR_15 << VAR_14);
 if (VAR_16 & ~VAR_13)
  return -VAR_0;

 if (!(VAR_16 & VAR_13))
  return -VAR_0;

 VAR_12 = (VAR_11 & ~VAR_13 & ~VAR_6) | VAR_16;


 VAR_12 |= VAR_5;

 if (!VAR_20)
  VAR_12 |= VAR_6;


 if (VAR_12 == VAR_11)
  return 0;


 if ((VAR_12 & VAR_13) < (VAR_11 & VAR_13))
  return -VAR_0;

 return FUNC_4(VAR_7, VAR_12, VAR_13);
}
