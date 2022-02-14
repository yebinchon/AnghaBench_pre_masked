
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ end; scalar_t__ start; } ;
struct nd_region {scalar_t__ bb_state; int bb; scalar_t__ ndr_size; scalar_t__ ndr_start; int dev; } ;
struct device {int dummy; } ;
typedef enum nvdimm_event { ____Placeholder_nvdimm_event } nvdimm_event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct nd_region*,int *,struct resource*) ;
 int FUNC_3 (scalar_t__) ;
 struct nd_region* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2, enum nvdimm_event VAR_3)
{
 if (VAR_3 == VAR_0) {
  struct nd_region *VAR_4 = FUNC_4(VAR_2);
  struct resource VAR_5;

  if (FUNC_1(&VAR_4->dev)) {
   VAR_5.start = VAR_4->ndr_start;
   VAR_5.end = VAR_4->ndr_start +
    VAR_4->ndr_size - 1;
   FUNC_2(VAR_4,
     &VAR_4->bb, &VAR_5);
   if (VAR_4->bb_state)
    FUNC_3(VAR_4->bb_state);
  }
 }
 FUNC_0(VAR_2, &VAR_3, VAR_1);
}
