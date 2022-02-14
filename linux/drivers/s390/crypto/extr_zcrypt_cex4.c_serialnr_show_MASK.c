
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zcrypt_card {int online; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cca_info {char* serial; } ;
struct ap_card {int id; struct zcrypt_card* private; } ;
typedef int ssize_t ;
typedef int ci ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,struct cca_info*,int ) ;
 int FUNC_1 (struct cca_info*,int ,int) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 struct ap_card* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
        struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct cca_info VAR_5;
 struct ap_card *VAR_6 = FUNC_3(VAR_2);
 struct zcrypt_card *VAR_7 = VAR_6->private;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 if (VAR_1 >= 0)
  FUNC_0(VAR_6->id, VAR_1, &VAR_5, VAR_7->online);

 return FUNC_2(VAR_4, VAR_0, "%s\n", VAR_5.serial);
}
