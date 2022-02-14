
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u8 ;
struct mtd_info {int size; } ;
struct spi_nor {int flags; struct mtd_info mtd; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct spi_nor *VAR_5, u8 VAR_6, loff_t *VAR_7,
     uint64_t *VAR_8)
{
 struct mtd_info *VAR_9 = &VAR_5->mtd;
 u8 VAR_10 = VAR_3 | VAR_2 | VAR_1;
 int VAR_11 = FUNC_0(VAR_10) - 1;
 int VAR_12;

 if (!(VAR_6 & VAR_10)) {

  *VAR_7 = 0;
  *VAR_8 = 0;
 } else {
  VAR_12 = ((VAR_6 & VAR_10) ^ VAR_10) >> VAR_11;
  *VAR_8 = VAR_9->size >> VAR_12;
  if (VAR_5->flags & VAR_0 && VAR_6 & VAR_4)
   *VAR_7 = 0;
  else
   *VAR_7 = VAR_9->size - *VAR_8;
 }
}
