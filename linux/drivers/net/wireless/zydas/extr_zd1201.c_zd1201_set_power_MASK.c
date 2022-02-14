
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; short value; scalar_t__ disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct zd1201* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct zd1201*,int ,short*) ;
 int FUNC_2 (struct zd1201*,int ,short) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
    struct iw_request_info *VAR_7, struct iw_param *VAR_8, char *VAR_9)
{
 struct zd1201 *VAR_10 = FUNC_0(VAR_6);
 short VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_11 = VAR_8->disabled ? 0 : 1;
 if (VAR_11) {
  if (VAR_8->flags & VAR_1) {
   VAR_12 = VAR_8->value;
   VAR_14 = FUNC_2(VAR_10,
       VAR_3, VAR_12);
   if (VAR_14)
    return VAR_14;
   goto out;
  }
  if (VAR_8->flags & VAR_2) {
   VAR_14 = FUNC_1(VAR_10,
       VAR_3, &VAR_12);
   if (VAR_14)
    return VAR_14;
   VAR_13 = VAR_8->value * 4 / VAR_12;
   if (VAR_13 > 4)
    VAR_13 = 4;
   if (VAR_13 < 0)
    VAR_13 = 0;
   VAR_14 = FUNC_2(VAR_10, VAR_5,
       VAR_13);
   if (VAR_14)
    return VAR_14;
   goto out;
  }
  return -VAR_0;
 }
out:
 return FUNC_2(VAR_10, VAR_4, VAR_11);
}
