
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gb_spi_transfer_request {int dummy; } ;
struct gb_spi_transfer {int dummy; } ;



__attribute__((used)) static int FUNC_0(u32 VAR_0, u32 VAR_1, size_t VAR_2)
{
 size_t VAR_3;

 VAR_2 -= sizeof(struct gb_spi_transfer_request);
 VAR_3 = (VAR_1 + 1) * sizeof(struct gb_spi_transfer);

 return VAR_0 + VAR_3 > VAR_2 ? 0 : 1;
}
