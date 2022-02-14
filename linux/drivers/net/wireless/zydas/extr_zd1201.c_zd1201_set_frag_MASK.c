
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {short value; int fixed; scalar_t__ disabled; } ;


 int VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int VAR_3 ;
 struct zd1201* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct zd1201*) ;
 int FUNC_2 (struct zd1201*,int ,short) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, struct iw_request_info *VAR_5,
    struct iw_param *VAR_6, char *VAR_7)
{
 struct zd1201 *VAR_8 = FUNC_0(VAR_4);
 int VAR_9;
 short VAR_10 = VAR_6->value;

 if (VAR_6->disabled || !VAR_6->fixed)
  VAR_10 = VAR_1;
 if (VAR_10 > VAR_1)
  return -VAR_0;
 if (VAR_10 < VAR_2)
  return -VAR_0;
 if (VAR_10 & 1)
  return -VAR_0;
 VAR_9 = FUNC_2(VAR_8, VAR_3, VAR_10);
 if (VAR_9)
  return VAR_9;
 return FUNC_1(VAR_8);
}
