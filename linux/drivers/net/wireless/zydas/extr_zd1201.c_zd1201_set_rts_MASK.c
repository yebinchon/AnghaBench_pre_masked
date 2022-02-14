
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {short value; int fixed; scalar_t__ disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 struct zd1201* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct zd1201*) ;
 int FUNC_2 (struct zd1201*,int ,short) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct iw_request_info *VAR_4,
    struct iw_param *VAR_5, char *VAR_6)
{
 struct zd1201 *VAR_7 = FUNC_0(VAR_3);
 int VAR_8;
 short VAR_9 = VAR_5->value;

 if (VAR_5->disabled || !VAR_5->fixed)
  VAR_9 = VAR_2;
 if (VAR_9 > VAR_2)
  return -VAR_0;
 if (VAR_9 < 0)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_7, VAR_1, VAR_9);
 if (VAR_8)
  return VAR_8;
 return FUNC_1(VAR_7);
}
