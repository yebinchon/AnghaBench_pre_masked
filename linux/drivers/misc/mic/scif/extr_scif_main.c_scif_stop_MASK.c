
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_dev {int dummy; } ;
struct TYPE_2__ {int maxid; } ;


 struct scif_dev* VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_1 (struct scif_dev*) ;

void FUNC_2(struct scif_dev *VAR_2)
{
 struct scif_dev *VAR_3;
 int VAR_4;

 for (VAR_4 = VAR_1.maxid; VAR_4 >= 0; VAR_4--) {
  VAR_3 = &VAR_0[VAR_4];
  if (FUNC_1(VAR_3))
   continue;
  FUNC_0(VAR_4);
 }
}
