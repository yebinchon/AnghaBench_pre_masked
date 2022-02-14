
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfn_array {int pa_nr; int pa_iova_pfn; int pa_pfn; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int,int,int ) ;
 int FUNC_1 (struct device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pfn_array *VAR_3, struct device *VAR_4)
{
 int VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_4, VAR_3->pa_iova_pfn, VAR_3->pa_nr,
        VAR_1 | VAR_2, VAR_3->pa_pfn);

 if (VAR_5 < 0) {
  goto err_out;
 } else if (VAR_5 > 0 && VAR_5 != VAR_3->pa_nr) {
  FUNC_1(VAR_4, VAR_3->pa_iova_pfn, VAR_5);
  VAR_5 = -VAR_0;
  goto err_out;
 }

 return VAR_5;

err_out:
 VAR_3->pa_nr = 0;

 return VAR_5;
}
