
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct myri10ge_priv {int features; int max_tso6; int max_intr_slots; TYPE_1__* pdev; } ;
struct myri10ge_cmd {int data0; } ;
struct mcp_dma_addr {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct myri10ge_priv*,int ,struct myri10ge_cmd*,int ) ;

__attribute__((used)) static int FUNC_2(struct myri10ge_priv *VAR_7)
{
 struct myri10ge_cmd VAR_8;
 int VAR_9;


 VAR_7->features = VAR_4 | VAR_3 | VAR_5;
 VAR_9 = FUNC_1(VAR_7, VAR_1,
       &VAR_8, 0);
 if (VAR_9 == 0) {
  VAR_7->max_tso6 = VAR_8.data0;
  VAR_7->features |= VAR_6;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_2, &VAR_8, 0);
 if (VAR_9 != 0) {
  FUNC_0(&VAR_7->pdev->dev,
   "failed MXGEFW_CMD_GET_RX_RING_SIZE\n");
  return -VAR_0;
 }

 VAR_7->max_intr_slots = 2 * (VAR_8.data0 / sizeof(struct mcp_dma_addr));

 return 0;
}
