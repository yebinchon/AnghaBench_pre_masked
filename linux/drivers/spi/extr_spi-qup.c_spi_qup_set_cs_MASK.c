
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_qup {scalar_t__ base; } ;
struct spi_device {int master; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct spi_qup* FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_2, bool VAR_3)
{
 struct spi_qup *VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 VAR_4 = FUNC_1(VAR_2->master);
 VAR_5 = FUNC_0(VAR_4->base + VAR_0);
 VAR_6 = VAR_5;
 if (!VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 if (VAR_5 != VAR_6)
  FUNC_2(VAR_5, VAR_4->base + VAR_0);
}
