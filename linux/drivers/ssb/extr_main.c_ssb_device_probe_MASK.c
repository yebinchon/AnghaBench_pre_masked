
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_driver {int (* probe ) (struct ssb_device*,int *) ;} ;
struct ssb_device {int id; } ;
struct device {int driver; } ;


 struct ssb_device* FUNC_0 (struct device*) ;
 struct ssb_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct ssb_device*) ;
 int FUNC_3 (struct ssb_device*) ;
 int FUNC_4 (struct ssb_device*,int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct ssb_device *VAR_1 = FUNC_0(VAR_0);
 struct ssb_driver *VAR_2 = FUNC_1(VAR_0->driver);
 int VAR_3 = 0;

 FUNC_2(VAR_1);
 if (VAR_2 && VAR_2->probe)
  VAR_3 = VAR_2->probe(VAR_1, &VAR_1->id);
 if (VAR_3)
  FUNC_3(VAR_1);

 return VAR_3;
}
