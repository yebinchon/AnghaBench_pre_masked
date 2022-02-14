
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_dspi {int bytes_per_word; int len; scalar_t__ tx; } ;



__attribute__((used)) static u32 FUNC_0(struct fsl_dspi *VAR_0)
{
 u32 VAR_1 = 0;

 if (VAR_0->tx) {
  if (VAR_0->bytes_per_word == 1)
   VAR_1 = *(u8 *)VAR_0->tx;
  else if (VAR_0->bytes_per_word == 2)
   VAR_1 = *(u16 *)VAR_0->tx;
  else
   VAR_1 = *(u32 *)VAR_0->tx;
  VAR_0->tx += VAR_0->bytes_per_word;
 }
 VAR_0->len -= VAR_0->bytes_per_word;
 return VAR_1;
}
