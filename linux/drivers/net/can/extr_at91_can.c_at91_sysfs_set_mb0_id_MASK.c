
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct at91_priv {unsigned long mb0_id; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,int ,unsigned long*) ;
 struct at91_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct net_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
  struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct net_device *VAR_9 = FUNC_4(VAR_5);
 struct at91_priv *VAR_10 = FUNC_1(VAR_9);
 unsigned long VAR_11;
 ssize_t VAR_12;
 int VAR_13;

 FUNC_2();

 if (VAR_9->flags & VAR_4) {
  VAR_12 = -VAR_3;
  goto out;
 }

 VAR_13 = FUNC_0(VAR_7, 0, &VAR_11);
 if (VAR_13) {
  VAR_12 = VAR_13;
  goto out;
 }

 if (VAR_11 & VAR_0)
  VAR_11 &= VAR_1 | VAR_0;
 else
  VAR_11 &= VAR_2;

 VAR_10->mb0_id = VAR_11;
 VAR_12 = VAR_8;

 out:
 FUNC_3();
 return VAR_12;
}
