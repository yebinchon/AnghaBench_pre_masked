
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ io_base; } ;
struct hclgevf_dev {scalar_t__ reset_type; TYPE_1__* pdev; TYPE_2__ hw; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hclgevf_dev*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hclgevf_dev *VAR_9)
{





 u32 VAR_10;
 int VAR_11;

 if (VAR_9->reset_type == VAR_7)
  return FUNC_1(VAR_9,
      20000,
      2000);
 else if (VAR_9->reset_type == VAR_8)
  VAR_11 = FUNC_3(VAR_9->hw.io_base +
      VAR_5, VAR_10,
      !(VAR_10 & VAR_6),
      20000,
      (20000 * 2000));
 else
  VAR_11 = FUNC_3(VAR_9->hw.io_base +
      VAR_3, VAR_10,
      !(VAR_10 & VAR_4),
      20000,
      (20000 * 2000));


 if (VAR_11) {
  FUNC_0(&VAR_9->pdev->dev,
   "could'nt get reset done status from h/w, timeout!\n");
  return VAR_11;
 }





 FUNC_2(5000);

 return 0;
}
