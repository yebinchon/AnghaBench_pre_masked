
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_internal_desc {struct gasket_driver_desc const* driver_desc; int class; } ;
struct gasket_driver_desc {int name; int minor; int major; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct gasket_internal_desc* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(const struct gasket_driver_desc *VAR_4)
{
 int VAR_5, VAR_6;
 struct gasket_internal_desc *VAR_7 = ((void*)0);

 FUNC_2(&VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2[VAR_5].driver_desc == VAR_4) {
   VAR_7 = &VAR_2[VAR_5];
   VAR_6 = VAR_5;
   break;
  }
 }

 if (!VAR_7) {
  FUNC_3(&VAR_3);
  FUNC_5("request to unregister unknown desc: %s, %d:%d\n",
         VAR_4->name, VAR_4->major,
         VAR_4->minor);
  return;
 }

 FUNC_6(FUNC_0(VAR_4->major, VAR_4->minor),
     VAR_0);

 FUNC_1(VAR_7->class);


 VAR_2[VAR_6].driver_desc = ((void*)0);
 FUNC_3(&VAR_3);

 FUNC_4("removed %s driver\n", VAR_4->name);
}
