
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; int flags; short value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct zd1201* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct zd1201*,int ,short*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_9,
    struct iw_request_info *VAR_10, struct iw_param *VAR_11, char *VAR_12)
{
 struct zd1201 *VAR_13 = FUNC_0(VAR_9);
 short VAR_14, VAR_15, VAR_16;
 int VAR_17;

 VAR_17 = FUNC_1(VAR_13, VAR_7, &VAR_14);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_1(VAR_13, VAR_8, &VAR_15);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_1(VAR_13, VAR_6, &VAR_16);
 if (VAR_17)
  return VAR_17;
 VAR_11->disabled = VAR_14 ? 0 : 1;
 if (VAR_11->flags & VAR_4) {
  if (VAR_11->flags & VAR_2) {
   VAR_11->value = VAR_16;
   VAR_11->flags = VAR_2;
  } else {
   VAR_11->value = VAR_16 * VAR_15 / 4;
   VAR_11->flags = VAR_3;
  }
 }
 if (VAR_11->flags & VAR_1) {
  if (VAR_14 && VAR_15)
   VAR_11->flags = VAR_5;
  else
   VAR_11->flags = VAR_0;
 }

 return 0;
}
