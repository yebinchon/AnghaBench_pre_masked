
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_driver {int (* remove ) (struct scm_device*) ;} ;
struct scm_device {int dummy; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct scm_device*) ;
 struct scm_device* FUNC_1 (struct device*) ;
 struct scm_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct scm_device *VAR_2 = FUNC_1(VAR_1);
 struct scm_driver *VAR_3 = FUNC_2(VAR_1->driver);

 return VAR_3->remove ? VAR_3->remove(VAR_2) : -VAR_0;
}
