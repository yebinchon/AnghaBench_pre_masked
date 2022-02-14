
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_3__ {scalar_t__ scan_timestamp; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hostap_interface* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*,struct iw_request_info*,char*,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(struct net_device *VAR_4,
        struct iw_request_info *VAR_5,
        struct iw_point *VAR_6, char *VAR_7)
{



 struct hostap_interface *VAR_8;
 local_info_t *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_0(VAR_4);
 VAR_9 = VAR_8->local;



 if (VAR_9->scan_timestamp &&
     FUNC_2(VAR_3, VAR_9->scan_timestamp + 3 * VAR_2)) {
  return -VAR_0;
 }
 VAR_9->scan_timestamp = 0;

 VAR_10 = FUNC_1(VAR_9, VAR_5, VAR_7, VAR_6->length);

 if (VAR_10 >= 0) {
  VAR_6->length = VAR_10;
  return 0;
 } else {
  VAR_6->length = 0;
  return VAR_10;
 }

}
