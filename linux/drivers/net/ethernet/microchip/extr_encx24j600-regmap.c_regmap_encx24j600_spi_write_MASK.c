
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct encx24j600_context {int spi; } ;


 int FUNC_0 (struct encx24j600_context*,int,int const*,size_t) ;
 int FUNC_1 (int ,int*,int) ;

int FUNC_2(void *VAR_0, u8 VAR_1, const u8 *VAR_2,
    size_t VAR_3)
{
 struct encx24j600_context *VAR_4 = VAR_0;

 if (VAR_1 < 0xc0)
  return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);


 return FUNC_1(VAR_4->spi, &VAR_1, 1);
}
