
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath6kl_sdio {int dma_buffer_mutex; int func; int * dma_buffer; } ;
struct ath6kl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int,int *,int) ;
 struct ath6kl_sdio* FUNC_1 (struct ath6kl*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct ath6kl *VAR_5, u32 VAR_6, u8 *VAR_7,
           u32 VAR_8, u32 VAR_9)
{
 struct ath6kl_sdio *VAR_10 = FUNC_1(VAR_5);
 u8 *VAR_11 = ((void*)0);
 int VAR_12;
 bool VAR_13 = 0;

 if (VAR_9 & VAR_1)
  VAR_8 = FUNC_6(VAR_8, VAR_2);

 if (FUNC_2(VAR_7)) {
  if (!VAR_10->dma_buffer)
   return -VAR_0;
  FUNC_4(&VAR_10->dma_buffer_mutex);
  VAR_11 = VAR_10->dma_buffer;

  if (VAR_9 & VAR_4)
   FUNC_3(VAR_11, VAR_7, VAR_8);

  VAR_13 = 1;
 } else {
  VAR_11 = VAR_7;
 }

 VAR_12 = FUNC_0(VAR_10->func, VAR_9, VAR_6, VAR_11, VAR_8);
 if ((VAR_9 & VAR_3) && VAR_13)
  FUNC_3(VAR_7, VAR_11, VAR_8);

 if (VAR_13)
  FUNC_5(&VAR_10->dma_buffer_mutex);

 return VAR_12;
}
