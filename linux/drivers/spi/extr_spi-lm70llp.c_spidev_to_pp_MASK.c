
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_lm70llp {int dummy; } ;
struct spi_device {struct spi_lm70llp* controller_data; } ;



__attribute__((used)) static inline struct spi_lm70llp *FUNC_0(struct spi_device *VAR_0)
{
 return VAR_0->controller_data;
}
