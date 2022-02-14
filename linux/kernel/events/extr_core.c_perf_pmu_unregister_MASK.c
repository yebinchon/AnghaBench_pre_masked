
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {scalar_t__ type; int dev; scalar_t__ nr_addr_filters; int pmu_disable_count; int entry; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pmu*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;

void FUNC_11(struct pmu *VAR_6)
{
 FUNC_6(&VAR_4);
 FUNC_5(&VAR_6->entry);





 FUNC_10(&VAR_5);
 FUNC_9();

 FUNC_2(VAR_6->pmu_disable_count);
 if (VAR_6->type >= VAR_0)
  FUNC_4(&VAR_3, VAR_6->type);
 if (VAR_2) {
  if (VAR_6->nr_addr_filters)
   FUNC_1(VAR_6->dev, &VAR_1);
  FUNC_0(VAR_6->dev);
  FUNC_8(VAR_6->dev);
 }
 FUNC_3(VAR_6);
 FUNC_7(&VAR_4);
}
