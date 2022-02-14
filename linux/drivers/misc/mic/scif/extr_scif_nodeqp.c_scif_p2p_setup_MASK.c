
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_dev {int dummy; } ;
struct TYPE_2__ {int maxid; int p2p_enable; } ;


 int FUNC_0 (struct scif_dev*) ;
 struct scif_dev* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct scif_dev*,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_2, VAR_3;

 if (!VAR_1.p2p_enable)
  return;

 for (VAR_2 = 1; VAR_2 <= VAR_1.maxid; VAR_2++)
  if (!FUNC_0(&VAR_0[VAR_2]))
   return;

 for (VAR_2 = 1; VAR_2 <= VAR_1.maxid; VAR_2++) {
  for (VAR_3 = 1; VAR_3 <= VAR_1.maxid; VAR_3++) {
   struct scif_dev *VAR_4 = &VAR_0[VAR_2];

   if (VAR_2 == VAR_3)
    continue;
   FUNC_1(VAR_4, VAR_3);
  }
 }
}
