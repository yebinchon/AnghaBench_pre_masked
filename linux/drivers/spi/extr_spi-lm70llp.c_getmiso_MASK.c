
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_lm70llp {int port; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct spi_lm70llp* FUNC_1 (struct spi_device*) ;

__attribute__((used)) static inline int FUNC_2(struct spi_device *VAR_1)
{
 struct spi_lm70llp *VAR_2 = FUNC_1(VAR_1);

 return ((VAR_0 == (FUNC_0(VAR_2->port) & VAR_0)) ? 0 : 1);
}
