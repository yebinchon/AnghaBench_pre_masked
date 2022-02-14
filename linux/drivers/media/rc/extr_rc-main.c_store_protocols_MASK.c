
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rc_scancode_filter {scalar_t__ mask; scalar_t__ data; } ;
struct rc_dev {scalar_t__ enabled_protocols; int (* change_protocol ) (struct rc_dev*,scalar_t__*) ;scalar_t__ driver_type; int (* s_filter ) (struct rc_dev*,struct rc_scancode_filter*) ;int lock; int dev; struct rc_scancode_filter scancode_filter; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rc_dev*,scalar_t__*,char const*) ;
 int FUNC_5 (struct rc_dev*,scalar_t__*) ;
 int FUNC_6 (struct rc_dev*,struct rc_scancode_filter*) ;
 int FUNC_7 (struct rc_dev*,struct rc_scancode_filter*) ;
 struct rc_dev* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct rc_dev *VAR_6 = FUNC_8(VAR_2);
 u64 *VAR_7;
 struct rc_scancode_filter *VAR_8;
 u64 VAR_9, VAR_10;
 ssize_t VAR_11;

 FUNC_0(&VAR_6->dev, "Normal protocol change requested\n");
 VAR_7 = &VAR_6->enabled_protocols;
 VAR_8 = &VAR_6->scancode_filter;

 if (!VAR_6->change_protocol) {
  FUNC_0(&VAR_6->dev, "Protocol switching not supported\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_6->lock);

 VAR_9 = *VAR_7;
 VAR_10 = VAR_9;
 VAR_11 = FUNC_4(VAR_6, &VAR_10, VAR_4);
 if (VAR_11 < 0)
  goto out;

 if (VAR_6->driver_type == VAR_1)
  FUNC_1(&VAR_10);

 VAR_11 = VAR_6->change_protocol(VAR_6, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_6->dev, "Error setting protocols to 0x%llx\n",
   (long long)VAR_10);
  goto out;
 }

 if (VAR_10 != VAR_9) {
  *VAR_7 = VAR_10;
  FUNC_0(&VAR_6->dev, "Protocols changed to 0x%llx\n",
   (long long)VAR_10);
 }
 if (VAR_6->s_filter && VAR_8->mask) {
  if (VAR_10)
   VAR_11 = VAR_6->s_filter(VAR_6, VAR_8);
  else
   VAR_11 = -1;

  if (VAR_11 < 0) {
   VAR_8->data = 0;
   VAR_8->mask = 0;
   VAR_6->s_filter(VAR_6, VAR_8);
  }
 }

 VAR_11 = VAR_5;

out:
 FUNC_3(&VAR_6->lock);
 return VAR_11;
}
