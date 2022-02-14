
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfn_array {int pa_iova_pfn; scalar_t__ pa_nr; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pfn_array *VAR_0, struct device *VAR_1)
{

 if (VAR_0->pa_nr)
  FUNC_1(VAR_1, VAR_0->pa_iova_pfn, VAR_0->pa_nr);
 VAR_0->pa_nr = 0;
 FUNC_0(VAR_0->pa_iova_pfn);
}
