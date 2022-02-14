
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lbs_fw_table {scalar_t__ model; int * fwname; int * helper; } ;
struct firmware {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,int *,struct device*) ;

int FUNC_3(struct device *VAR_1, u32 VAR_2,
   const struct lbs_fw_table *VAR_3,
   const struct firmware **VAR_4,
   const struct firmware **VAR_5)
{
 const struct lbs_fw_table *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4 == ((void*)0));
 FUNC_0(VAR_5 == ((void*)0));


 VAR_6 = VAR_3;
 while (VAR_6 && VAR_6->helper) {
  if (VAR_6->model != VAR_2)
   goto next;

  if (*VAR_4 == ((void*)0)) {
   VAR_7 = FUNC_2(VAR_4, VAR_6->helper, VAR_1);
   if (VAR_7)
    goto next;





   if (VAR_6->fwname == ((void*)0))
    return 0;
  }

  if (*VAR_5 == ((void*)0)) {
   VAR_7 = FUNC_2(VAR_5, VAR_6->fwname, VAR_1);
   if (VAR_7) {



    FUNC_1(*VAR_4);
    *VAR_4 = ((void*)0);
   }
  }

  if (*VAR_4 && *VAR_5)
   return 0;

  next:
  VAR_6++;
 }


 FUNC_1(*VAR_4);
 *VAR_4 = ((void*)0);
 FUNC_1(*VAR_5);
 *VAR_5 = ((void*)0);

 return -VAR_0;
}
