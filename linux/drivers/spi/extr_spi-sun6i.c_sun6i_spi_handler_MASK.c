
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun6i_spi {int len; int done; int fifo_depth; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sun6i_spi*,int) ;
 int FUNC_2 (struct sun6i_spi*,int ) ;
 int FUNC_3 (struct sun6i_spi*,int ) ;
 int FUNC_4 (struct sun6i_spi*,int ) ;
 int FUNC_5 (struct sun6i_spi*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct sun6i_spi *VAR_9 = VAR_8;
 u32 VAR_10 = FUNC_4(VAR_9, VAR_6);


 if (VAR_10 & VAR_4) {
  FUNC_5(VAR_9, VAR_6, VAR_4);
  FUNC_2(VAR_9, VAR_9->fifo_depth);
  FUNC_0(&VAR_9->done);
  return VAR_0;
 }


 if (VAR_10 & VAR_3) {
  FUNC_2(VAR_9, VAR_2);

  FUNC_5(VAR_9, VAR_6, VAR_3);
  return VAR_0;
 }


 if (VAR_10 & VAR_5) {
  FUNC_3(VAR_9, VAR_2);

  if (!VAR_9->len)

   FUNC_1(VAR_9, VAR_5);


  FUNC_5(VAR_9, VAR_6, VAR_5);

  return VAR_0;
 }

 return VAR_1;
}
