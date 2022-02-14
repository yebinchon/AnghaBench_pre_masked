
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scm_driver {int (* notify ) (struct scm_device*,int ) ;} ;
struct scm_device {int dummy; } ;
struct device {scalar_t__ driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct scm_device*,int ) ;
 struct scm_device* FUNC_1 (struct device*) ;
 struct scm_driver* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct scm_driver *VAR_3 = FUNC_2(VAR_1->driver);
 struct scm_device *VAR_4 = FUNC_1(VAR_1);

 if (VAR_1->driver && VAR_3->notify)
  VAR_3->notify(VAR_4, VAR_0);

 return 0;
}
