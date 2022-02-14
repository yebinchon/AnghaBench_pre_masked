
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int wiphy; } ;
struct lbs_private {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct wireless_dev* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct wireless_dev*) ;
 struct wireless_dev* FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *,int) ;

struct wireless_dev *FUNC_5(struct device *VAR_3)
{
 int VAR_4 = 0;
 struct wireless_dev *VAR_5;

 VAR_5 = FUNC_3(sizeof(struct wireless_dev), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->wiphy = FUNC_4(&VAR_2, sizeof(struct lbs_private));
 if (!VAR_5->wiphy) {
  FUNC_1(VAR_3, "cannot allocate wiphy\n");
  VAR_4 = -VAR_0;
  goto err_wiphy_new;
 }

 return VAR_5;

 err_wiphy_new:
 FUNC_2(VAR_5);
 return FUNC_0(VAR_4);
}
