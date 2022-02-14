
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_qup {scalar_t__ base; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,unsigned long,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct spi_qup*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spi_qup *VAR_8, u32 VAR_9)
{
 unsigned long VAR_10;
 u32 VAR_11;

 VAR_10 = 0;
 while (!FUNC_2(VAR_8)) {

  FUNC_3(VAR_7, VAR_7 * 2);

  if (++VAR_10 > VAR_6)
   return -VAR_0;
 }

 if (VAR_10)
  FUNC_0(VAR_8->dev, "invalid state for %ld,us %d\n",
   VAR_10, VAR_9);

 VAR_11 = FUNC_1(VAR_8->base + VAR_1);




 if (((VAR_11 & VAR_3) == VAR_4) &&
     (VAR_9 == VAR_5)) {
  FUNC_4(VAR_2, VAR_8->base + VAR_1);
  FUNC_4(VAR_2, VAR_8->base + VAR_1);
 } else {
  VAR_11 &= ~VAR_3;
  VAR_11 |= VAR_9;
  FUNC_4(VAR_11, VAR_8->base + VAR_1);
 }

 VAR_10 = 0;
 while (!FUNC_2(VAR_8)) {

  FUNC_3(VAR_7, VAR_7 * 2);

  if (++VAR_10 > VAR_6)
   return -VAR_0;
 }

 return 0;
}
