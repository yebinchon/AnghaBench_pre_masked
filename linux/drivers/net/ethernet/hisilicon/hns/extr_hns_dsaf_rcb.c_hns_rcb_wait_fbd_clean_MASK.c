
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hnae_queue {TYPE_1__* handle; } ;
struct TYPE_2__ {int owner_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct hnae_queue*,int ) ;
 int FUNC_2 (int,int) ;

void FUNC_3(struct hnae_queue **VAR_4, int VAR_5, u32 VAR_6)
{
 int VAR_7, VAR_8;
 u32 VAR_9;

 for (VAR_8 = VAR_7 = 0; VAR_7 < VAR_5; VAR_8++) {
  FUNC_2(200, 300);
  VAR_9 = 0;
  if (VAR_6 & VAR_1)
   VAR_9 += FUNC_1(VAR_4[VAR_7],
       VAR_3);
  if (VAR_6 & VAR_0)
   VAR_9 += FUNC_1(VAR_4[VAR_7],
       VAR_2);
  if (!VAR_9)
   VAR_7++;
  if (VAR_8 >= 10000)
   break;
 }

 if (VAR_7 < VAR_5)
  FUNC_0(VAR_4[VAR_7]->handle->owner_dev,
   "queue(%d) wait fbd(%d) clean fail!!\n", VAR_7, VAR_9);
}
