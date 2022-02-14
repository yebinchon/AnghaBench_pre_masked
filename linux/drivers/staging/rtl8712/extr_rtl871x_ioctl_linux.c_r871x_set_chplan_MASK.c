
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_point {int dummy; } ;
union iwreq_data {struct iw_point data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct _adapter {scalar_t__ driver_stopped; } ;


 int VAR_0 ;
 struct _adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct _adapter*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct iw_request_info *VAR_2,
    union iwreq_data *VAR_3, char *VAR_4)
{
 int VAR_5 = 0;
 struct _adapter *VAR_6 = FUNC_0(VAR_1);
 struct iw_point *VAR_7 = &VAR_3->data;
 int VAR_8 = -1;

 if ((VAR_6->driver_stopped) || (VAR_7 == ((void*)0))) {
  VAR_5 = -VAR_0;
  goto exit;
 }
 VAR_8 = (int)*VAR_4;
 FUNC_1(VAR_6, VAR_8);

exit:

 return VAR_5;
}
