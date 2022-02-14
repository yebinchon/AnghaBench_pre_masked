
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct apr_driver {struct apr_device_id* id_table; } ;
struct apr_device_id {scalar_t__ domain_id; scalar_t__ svc_id; } ;
struct apr_device {scalar_t__ domain_id; scalar_t__ svc_id; } ;


 scalar_t__ FUNC_0 (struct device*,struct device_driver*) ;
 struct apr_device* FUNC_1 (struct device*) ;
 struct apr_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct apr_device *VAR_2 = FUNC_1(VAR_0);
 struct apr_driver *VAR_3 = FUNC_2(VAR_1);
 const struct apr_device_id *VAR_4 = VAR_3->id_table;


 if (FUNC_0(VAR_0, VAR_1))
  return 1;

 if (!VAR_4)
  return 0;

 while (VAR_4->domain_id != 0 || VAR_4->svc_id != 0) {
  if (VAR_4->domain_id == VAR_2->domain_id &&
      VAR_4->svc_id == VAR_2->svc_id)
   return 1;
  VAR_4++;
 }

 return 0;
}
