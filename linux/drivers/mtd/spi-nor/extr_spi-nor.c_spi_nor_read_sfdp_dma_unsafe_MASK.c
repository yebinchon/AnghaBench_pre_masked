
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_nor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t,int ) ;
 int FUNC_2 (void*,void*,size_t) ;
 int FUNC_3 (struct spi_nor*,int ,size_t,void*) ;

__attribute__((used)) static int FUNC_4(struct spi_nor *VAR_2, u32 VAR_3,
     size_t VAR_4, void *VAR_5)
{
 void *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_6);
 FUNC_2(VAR_5, VAR_6, VAR_4);
 FUNC_0(VAR_6);

 return VAR_7;
}
