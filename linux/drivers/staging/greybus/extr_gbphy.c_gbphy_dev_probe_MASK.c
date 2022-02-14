
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbphy_driver {int (* probe ) (struct gbphy_device*,struct gbphy_device_id const*) ;} ;
struct gbphy_device_id {int dummy; } ;
struct gbphy_device {int bundle; } ;
struct device {int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct gbphy_device_id* FUNC_2 (struct gbphy_device*,struct gbphy_driver*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*,int ) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct gbphy_device*,struct gbphy_device_id const*) ;
 struct gbphy_device* FUNC_13 (struct device*) ;
 struct gbphy_driver* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_2)
{
 struct gbphy_driver *VAR_3 = FUNC_14(VAR_2->driver);
 struct gbphy_device *VAR_4 = FUNC_13(VAR_2);
 const struct gbphy_device_id *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_5)
  return -VAR_0;


 VAR_6 = FUNC_0(VAR_4->bundle);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_9(VAR_2, VAR_1);
 FUNC_11(VAR_2);
 FUNC_6(VAR_2);
 FUNC_8(VAR_2);
 FUNC_5(VAR_2);





 VAR_6 = VAR_3->probe(VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_2);
  FUNC_10(VAR_2);
  FUNC_7(VAR_2);
  FUNC_4(VAR_2);
 }

 FUNC_1(VAR_4->bundle);

 return VAR_6;
}
