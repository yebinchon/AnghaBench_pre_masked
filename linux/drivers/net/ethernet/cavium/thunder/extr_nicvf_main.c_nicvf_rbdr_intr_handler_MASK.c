
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct nicvf {int rbdr_task; TYPE_1__* qs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ rbdr_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nicvf*,int ,scalar_t__) ;
 int FUNC_1 (struct nicvf*,int ,scalar_t__) ;
 int FUNC_2 (struct nicvf*) ;
 int FUNC_3 (struct nicvf*,int ,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct nicvf *VAR_4 = (struct nicvf *)VAR_3;
 u8 VAR_5;


 FUNC_2(VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_4->qs->rbdr_cnt; VAR_5++) {
  if (!FUNC_3(VAR_4, VAR_1, VAR_5))
   continue;
  FUNC_1(VAR_4, VAR_1, VAR_5);
  FUNC_4(&VAR_4->rbdr_task);

  FUNC_0(VAR_4, VAR_1, VAR_5);
 }

 return VAR_0;
}
