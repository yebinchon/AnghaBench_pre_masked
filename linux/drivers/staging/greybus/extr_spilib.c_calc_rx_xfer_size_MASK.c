
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct gb_spi_transfer_response {int dummy; } ;



__attribute__((used)) static size_t FUNC_0(u32 VAR_0, u32 *VAR_1, u32 VAR_2,
    size_t VAR_3)
{
 size_t VAR_4;

 VAR_3 -= sizeof(struct gb_spi_transfer_response);

 if (VAR_0 + VAR_2 > VAR_3)
  VAR_4 = VAR_3 - VAR_0;
 else
  VAR_4 = VAR_2;


 if (*VAR_1 && VAR_4 > *VAR_1)
  VAR_4 = *VAR_1;
 if (*VAR_1 && VAR_4 < *VAR_1)
  *VAR_1 = VAR_4;

 return VAR_4;
}
