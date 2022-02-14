
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct scif_dev {int disconn_rescnt; int disconn_wq; } ;
struct TYPE_2__ {size_t maxid; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct scif_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct scif_dev* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (struct scif_dev*) ;
 int FUNC_4 (size_t,size_t) ;
 int FUNC_5 (int ,int,int ) ;

void FUNC_6(u32 VAR_4, bool VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 u32 VAR_8 = 0;
 struct scif_dev *VAR_9 = &VAR_2[VAR_4];

 if (!VAR_4)
  return;

 FUNC_2(&VAR_9->disconn_rescnt, 0);


 for (VAR_8 = 1; VAR_8 <= VAR_3.maxid; VAR_8++) {
  if (VAR_8 == VAR_4)
   continue;
  VAR_6 = FUNC_4(VAR_8, VAR_4);
  if (!VAR_6)
   VAR_7++;
 }

 VAR_6 = FUNC_5(VAR_9->disconn_wq,
     (FUNC_1(&VAR_9->disconn_rescnt)
     == VAR_7), VAR_1);

 if (VAR_5 && FUNC_0(VAR_9))




  FUNC_3(VAR_9);
 FUNC_2(&VAR_9->disconn_rescnt, 0);

 VAR_6 = FUNC_4(VAR_0, VAR_4);
 if (!VAR_6)

  FUNC_5(VAR_9->disconn_wq,
       (FUNC_1(&VAR_9->disconn_rescnt) == 1),
       VAR_1);
}
