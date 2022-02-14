
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_dev {struct uwb_beca_e* bce; } ;
struct uwb_beca_e {int mutex; int rssi_stats; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *,char*) ;
 struct uwb_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1, char *VAR_2)
{
 struct uwb_dev *VAR_3 = FUNC_3(VAR_0);
 struct uwb_beca_e *VAR_4 = VAR_3->bce;
 size_t VAR_5;

 FUNC_0(&VAR_4->mutex);
 VAR_5 = FUNC_2(&VAR_3->bce->rssi_stats, VAR_2);
 FUNC_1(&VAR_4->mutex);
 return VAR_5;
}
