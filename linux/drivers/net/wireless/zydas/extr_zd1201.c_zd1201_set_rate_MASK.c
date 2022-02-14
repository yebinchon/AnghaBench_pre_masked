
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; int fixed; } ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int VAR_4 ;
 struct zd1201* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct zd1201*) ;
 int FUNC_2 (struct zd1201*,int ,short) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5,
    struct iw_request_info *VAR_6, struct iw_param *VAR_7, char *VAR_8)
{
 struct zd1201 *VAR_9 = FUNC_0(VAR_5);
 short VAR_10;
 int VAR_11;

 switch (VAR_7->value) {
  case 1000000:
   VAR_10 = VAR_0;
   break;
  case 2000000:
   VAR_10 = VAR_2;
   break;
  case 5500000:
   VAR_10 = VAR_3;
   break;
  case 11000000:
  default:
   VAR_10 = VAR_1;
   break;
 }
 if (!VAR_7->fixed) {
  VAR_10 |= VAR_10-1;
 }

 VAR_11 = FUNC_2(VAR_9, VAR_4, VAR_10);
 if (VAR_11)
  return VAR_11;

 return FUNC_1(VAR_9);
}
