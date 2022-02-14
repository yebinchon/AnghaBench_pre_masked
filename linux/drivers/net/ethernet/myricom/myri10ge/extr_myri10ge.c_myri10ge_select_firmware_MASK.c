
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct myri10ge_priv {int tx_boundary; size_t board_number; int fw_name; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct myri10ge_priv*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int * VAR_6 ;
 char** VAR_7 ;
 char* VAR_8 ;
 int FUNC_5 (TYPE_1__*,int ,int*) ;
 int FUNC_6 (struct myri10ge_priv*,char*,int) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct myri10ge_priv *VAR_9)
{
 int VAR_10 = 0;

 if (VAR_4 == 0) {
  int VAR_11;
  u16 VAR_12;

  FUNC_5(VAR_9->pdev, VAR_2, &VAR_12);
  VAR_11 = (VAR_12 >> 4) & 0x3f;




  if (VAR_11 < 8) {
   FUNC_0(&VAR_9->pdev->dev, "PCIE x%d Link\n",
     VAR_11);
   VAR_9->tx_boundary = 4096;
   FUNC_6(VAR_9, VAR_5, 0);
  } else {
   FUNC_4(VAR_9);
  }
 } else {
  if (VAR_4 == 1) {
   FUNC_0(&VAR_9->pdev->dev,
     "Assuming aligned completions (forced)\n");
   VAR_9->tx_boundary = 4096;
   FUNC_6(VAR_9, VAR_5, 0);
  } else {
   FUNC_0(&VAR_9->pdev->dev,
     "Assuming unaligned completions (forced)\n");
   VAR_9->tx_boundary = 2048;
   FUNC_6(VAR_9, VAR_8, 0);
  }
 }

 FUNC_1(VAR_3);
 if (VAR_6 != ((void*)0)) {
  char *VAR_13 = FUNC_3(VAR_6, VAR_0);
  if (VAR_13) {
   VAR_10 = 1;
   FUNC_6(VAR_9, VAR_13, 1);
  }
 }
 FUNC_2(VAR_3);

 if (VAR_9->board_number < VAR_1 &&
     VAR_7[VAR_9->board_number] != ((void*)0) &&
     FUNC_7(VAR_7[VAR_9->board_number])) {
  FUNC_6(VAR_9, VAR_7[VAR_9->board_number], 0);
  VAR_10 = 1;
 }
 if (VAR_10)
  FUNC_0(&VAR_9->pdev->dev, "overriding firmware to %s\n",
    VAR_9->fw_name);
}
