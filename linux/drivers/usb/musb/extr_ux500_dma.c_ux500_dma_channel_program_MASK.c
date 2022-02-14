
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct dma_channel {scalar_t__ status; scalar_t__ actual_len; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct dma_channel*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dma_channel *VAR_3,
    u16 VAR_4, u8 VAR_5,
    dma_addr_t VAR_6, u32 VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_3->status == VAR_2 ||
  VAR_3->status == VAR_0);

 VAR_3->status = VAR_0;
 VAR_3->actual_len = 0;
 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!VAR_8)
  VAR_3->status = VAR_1;

 return VAR_8;
}
