
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_res {void* data; int release; int entry; } ;
struct spi_device {int dummy; } ;
typedef int spi_res_release_t ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct spi_res* FUNC_1 (int,int ) ;

void *FUNC_2(struct spi_device *VAR_0,
      spi_res_release_t VAR_1,
      size_t VAR_2, gfp_t VAR_3)
{
 struct spi_res *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4) + VAR_2, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->entry);
 VAR_4->release = VAR_1;

 return VAR_4->data;
}
