
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct solo_dev {int pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,void*,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct solo_dev*,int,int ,int ,int ,int,int ) ;

int FUNC_5(struct solo_dev *VAR_4, int VAR_5,
   void *VAR_6, u32 VAR_7, u32 VAR_8,
   int VAR_9, u32 VAR_10)
{
 dma_addr_t VAR_11;
 int VAR_12;

 if (FUNC_0((unsigned long)VAR_6 & 0x03))
  return -VAR_0;
 if (FUNC_0(!VAR_8))
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_4->pdev, VAR_6, VAR_8,
      VAR_5 ? VAR_3 : VAR_2);
 if (FUNC_1(VAR_4->pdev, VAR_11))
  return -VAR_1;

 VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_11, VAR_7, VAR_8,
        VAR_9, VAR_10);

 FUNC_3(VAR_4->pdev, VAR_11, VAR_8,
    VAR_5 ? VAR_3 : VAR_2);

 return VAR_12;
}
