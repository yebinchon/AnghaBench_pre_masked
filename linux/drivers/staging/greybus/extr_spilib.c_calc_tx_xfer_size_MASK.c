
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gb_spi_transfer_request {int dummy; } ;
struct gb_spi_transfer {int dummy; } ;



__attribute__((used)) static size_t FUNC_0(u32 VAR_0, u32 VAR_1, size_t VAR_2,
    size_t VAR_3)
{
 size_t VAR_4;

 VAR_3 -= sizeof(struct gb_spi_transfer_request);
 VAR_4 = (VAR_1 + 1) * sizeof(struct gb_spi_transfer);

 if (VAR_0 + VAR_4 + VAR_2 > VAR_3)
  return VAR_3 - (VAR_0 + sizeof(struct gb_spi_transfer));

 return VAR_2;
}
