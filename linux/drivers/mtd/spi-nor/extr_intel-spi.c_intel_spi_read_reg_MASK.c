
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_nor {struct intel_spi* priv; } ;
struct intel_spi {scalar_t__ swseq_reg; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_spi*,int ,int) ;
 int FUNC_1 (struct intel_spi*,int *,int) ;
 int FUNC_2 (struct intel_spi*,int ,int,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_2, u8 VAR_3, u8 *VAR_4, int VAR_5)
{
 struct intel_spi *VAR_6 = VAR_2->priv;
 int VAR_7;


 FUNC_3(0, VAR_6->base + VAR_0);

 if (VAR_6->swseq_reg)
  VAR_7 = FUNC_2(VAR_6, VAR_3, VAR_5,
      VAR_1);
 else
  VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_5);

 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_6, VAR_4, VAR_5);
}
