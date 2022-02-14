
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct TYPE_8__ {size_t tail; size_t head; int** msg_q; int count; } ;
struct TYPE_5__ {size_t supported; size_t advertising; } ;
struct TYPE_6__ {TYPE_1__ mac; } ;
struct hclgevf_dev {int mbx_event_pending; TYPE_4__ arq; TYPE_3__* pdev; int reset_state; int reset_pending; TYPE_2__ hw; int state; } ;
typedef int speed ;
typedef enum hnae3_reset_type { ____Placeholder_hnae3_reset_type } hnae3_reset_type ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_4__) ;
 int FUNC_4 (struct hclgevf_dev*) ;
 int FUNC_5 (struct hclgevf_dev*,int) ;
 int FUNC_6 (struct hclgevf_dev*,int,int *,int) ;
 int FUNC_7 (struct hclgevf_dev*,size_t,int ) ;
 int FUNC_8 (size_t*,int*,int) ;
 int FUNC_9 (int,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

void FUNC_11(struct hclgevf_dev *VAR_2)
{
 enum hnae3_reset_type VAR_3;
 u16 VAR_4, VAR_5;
 u16 *VAR_6, *VAR_7;
 u8 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u8 VAR_11;




 VAR_2->mbx_event_pending = 0;

 VAR_10 = VAR_2->arq.tail;


 while (VAR_10 != VAR_2->arq.head) {
  if (FUNC_10(VAR_1, &VAR_2->state)) {
   FUNC_2(&VAR_2->pdev->dev,
     "vf crq need init in async\n");
   return;
  }

  VAR_6 = VAR_2->arq.msg_q[VAR_2->arq.head];

  switch (VAR_6[0]) {
  case 130:
   VAR_4 = VAR_6[1];
   FUNC_8(&VAR_9, &VAR_6[2], sizeof(VAR_9));
   VAR_8 = (u8)VAR_6[4];


   FUNC_5(VAR_2, VAR_4);
   FUNC_7(VAR_2, VAR_9, VAR_8);

   break;
  case 129:
   VAR_11 = (u8)VAR_6[1];
   if (VAR_11)
    FUNC_8(&VAR_2->hw.mac.supported, &VAR_6[2],
           sizeof(unsigned long));
   else
    FUNC_8(&VAR_2->hw.mac.advertising, &VAR_6[2],
           sizeof(unsigned long));
   break;
  case 131:





   VAR_3 = (enum hnae3_reset_type)VAR_6[1];
   FUNC_9(VAR_3, &VAR_2->reset_pending);
   FUNC_9(VAR_0, &VAR_2->reset_state);
   FUNC_4(VAR_2);

   break;
  case 128:
   VAR_5 = VAR_6[1];
   VAR_7 = &VAR_6[1];
   FUNC_6(VAR_2, VAR_5,
          (u8 *)VAR_7, 8);
   break;
  default:
   FUNC_1(&VAR_2->pdev->dev,
    "fetched unsupported(%d) message from arq\n",
    VAR_6[0]);
   break;
  }

  FUNC_3(VAR_2->arq);
  FUNC_0(&VAR_2->arq.count);
  VAR_6 = VAR_2->arq.msg_q[VAR_2->arq.head];
 }
}
