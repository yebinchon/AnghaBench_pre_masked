
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dma_channel {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct dma_channel *VAR_0,
  u16 VAR_1, void *VAR_2, u32 VAR_3)
{
 if ((VAR_1 & 0x3) ||
  ((unsigned long int) VAR_2 & 0x3) ||
  (VAR_3 < 512) ||
  (VAR_3 & 0x3))
  return 0;
 else
  return 1;
}
