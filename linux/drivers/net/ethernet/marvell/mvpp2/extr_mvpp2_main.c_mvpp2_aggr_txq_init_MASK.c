
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;
struct mvpp2_tx_queue {int descs_dma; int last_desc; int next_desc_to_proc; int descs; } ;
struct mvpp2 {scalar_t__ hw_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int,int*,int ) ;
 int FUNC_4 (struct mvpp2*,int ) ;
 int FUNC_5 (struct mvpp2*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_6,
          struct mvpp2_tx_queue *VAR_7,
          unsigned int VAR_8, struct mvpp2 *VAR_9)
{
 u32 VAR_10;


 VAR_7->descs = FUNC_3(&VAR_6->dev,
          VAR_4 * VAR_5,
          &VAR_7->descs_dma, VAR_1);
 if (!VAR_7->descs)
  return -VAR_0;

 VAR_7->last_desc = VAR_4 - 1;


 VAR_7->next_desc_to_proc = FUNC_4(VAR_9,
       FUNC_2(VAR_8));




 if (VAR_9->hw_version == VAR_2)
  VAR_10 = VAR_7->descs_dma;
 else
  VAR_10 = VAR_7->descs_dma >>
   VAR_3;

 FUNC_5(VAR_9, FUNC_0(VAR_8), VAR_10);
 FUNC_5(VAR_9, FUNC_1(VAR_8),
      VAR_4);

 return 0;
}
