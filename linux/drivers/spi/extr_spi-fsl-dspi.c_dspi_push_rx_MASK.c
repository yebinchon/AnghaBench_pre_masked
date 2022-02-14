
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_dspi {int bits_per_word; int bytes_per_word; scalar_t__ rx; } ;



__attribute__((used)) static void FUNC_0(struct fsl_dspi *VAR_0, u32 VAR_1)
{
 if (!VAR_0->rx)
  return;


 VAR_1 &= (1 << VAR_0->bits_per_word) - 1;

 if (VAR_0->bytes_per_word == 1)
  *(u8 *)VAR_0->rx = VAR_1;
 else if (VAR_0->bytes_per_word == 2)
  *(u16 *)VAR_0->rx = VAR_1;
 else
  *(u32 *)VAR_0->rx = VAR_1;
 VAR_0->rx += VAR_0->bytes_per_word;
}
