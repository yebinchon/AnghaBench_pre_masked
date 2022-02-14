
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct spi_nor {struct intel_spi* priv; } ;
struct intel_spi {int atomic_preopcode; scalar_t__ swseq_reg; scalar_t__ base; scalar_t__ sregs; scalar_t__ locked; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct intel_spi*,int,int) ;
 int FUNC_1 (struct intel_spi*,int,int,int ) ;
 int FUNC_2 (struct intel_spi*,int*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct spi_nor *VAR_5, u8 VAR_6, u8 *VAR_7, int VAR_8)
{
 struct intel_spi *VAR_9 = VAR_5->priv;
 int VAR_10;
 if (VAR_6 == VAR_4) {
  u16 VAR_11;

  if (!VAR_9->swseq_reg)
   return 0;

  VAR_11 = FUNC_3(VAR_9->sregs + VAR_3);
  if ((VAR_11 & 0xff) != VAR_6 && (VAR_11 >> 8) != VAR_6) {
   if (VAR_9->locked)
    return -VAR_0;
   FUNC_4(VAR_6, VAR_9->sregs + VAR_3);
  }





  VAR_9->atomic_preopcode = VAR_6;
  return 0;
 }

 FUNC_4(0, VAR_9->base + VAR_1);


 VAR_10 = FUNC_2(VAR_9, VAR_7, VAR_8);
 if (VAR_10)
  return VAR_10;

 if (VAR_9->swseq_reg)
  return FUNC_1(VAR_9, VAR_6, VAR_8,
       VAR_2);
 return FUNC_0(VAR_9, VAR_6, VAR_8);
}
