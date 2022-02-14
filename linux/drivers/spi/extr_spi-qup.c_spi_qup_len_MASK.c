
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_qup {unsigned int n_words; unsigned int w_size; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct spi_qup *VAR_0)
{
 return VAR_0->n_words * VAR_0->w_size;
}
