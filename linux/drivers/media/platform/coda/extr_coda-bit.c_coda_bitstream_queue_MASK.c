
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct coda_ctx {int bitstream_fifo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int const*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct coda_ctx *VAR_1, const u8 *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(&VAR_1->bitstream_fifo, VAR_2, VAR_3);

 return (VAR_4 < VAR_3) ? -VAR_0 : 0;
}
