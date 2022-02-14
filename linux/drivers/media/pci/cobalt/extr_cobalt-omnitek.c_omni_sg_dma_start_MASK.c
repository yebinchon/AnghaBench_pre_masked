
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sg_dma_desc_info {scalar_t__ bus; } ;
struct cobalt_stream {int dma_channel; struct cobalt* cobalt; } ;
struct cobalt {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct cobalt_stream *VAR_4, struct sg_dma_desc_info *VAR_5)
{
 struct cobalt *VAR_6 = VAR_4->cobalt;

 FUNC_2((u32)((u64)VAR_5->bus >> 32), FUNC_1(VAR_4->dma_channel) + 4);
 FUNC_2((u32)VAR_5->bus & VAR_1, FUNC_1(VAR_4->dma_channel));
 FUNC_2(VAR_0 | VAR_2 | VAR_3, FUNC_0(VAR_4->dma_channel));
}
