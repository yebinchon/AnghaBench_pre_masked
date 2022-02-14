
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct i2400m {int wimax_dev; } ;
struct genl_info {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int,struct device*,char*,struct wimax_dev*,struct i2400m*,void const*,size_t,struct genl_info const*,int) ;
 int FUNC_3 (int,struct device*,char*,struct wimax_dev*,struct i2400m*,void const*,size_t,struct genl_info const*) ;
 struct device* FUNC_4 (struct i2400m*) ;
 struct sk_buff* FUNC_5 (struct i2400m*,void const*,size_t) ;
 struct i2400m* FUNC_6 (struct wimax_dev*) ;
 int FUNC_7 (int *,struct sk_buff*) ;

__attribute__((used)) static
int FUNC_8(struct wimax_dev *VAR_0,
       const char *VAR_1,
       const void *VAR_2, size_t VAR_3,
       const struct genl_info *VAR_4)
{
 int VAR_5;
 struct i2400m *VAR_6 = FUNC_6(VAR_0);
 struct device *VAR_7 = FUNC_4(VAR_6);
 struct sk_buff *VAR_8;

 FUNC_3(4, VAR_7, "(wimax_dev %p [i2400m %p] msg_buf %p "
    "msg_len %zu genl_info %p)\n", VAR_0, VAR_6,
    VAR_2, VAR_3, VAR_4);
 VAR_8 = FUNC_5(VAR_6, VAR_2, VAR_3);
 VAR_5 = FUNC_1(VAR_8);
 if (FUNC_0(VAR_8))
  goto error_msg_to_dev;
 VAR_5 = FUNC_7(&VAR_6->wimax_dev, VAR_8);
error_msg_to_dev:
 FUNC_2(4, VAR_7, "(wimax_dev %p [i2400m %p] msg_buf %p msg_len %zu "
  "genl_info %p) = %d\n", VAR_0, VAR_6, VAR_2, VAR_3,
  VAR_4, VAR_5);
 return VAR_5;
}
