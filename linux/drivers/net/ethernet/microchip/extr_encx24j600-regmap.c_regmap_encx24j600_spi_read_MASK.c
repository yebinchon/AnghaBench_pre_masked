
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct encx24j600_context {int spi; } ;
typedef int reg ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int *,size_t) ;

int FUNC_1(void *VAR_1, u8 VAR_2, u8 *VAR_3, size_t VAR_4)
{
 struct encx24j600_context *VAR_5 = VAR_1;

 if (VAR_2 == VAR_0 && VAR_4 > 1)
  VAR_4 = 1;

 return FUNC_0(VAR_5->spi, &VAR_2, sizeof(VAR_2), VAR_3, VAR_4);
}
