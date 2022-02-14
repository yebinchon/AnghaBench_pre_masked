
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_point {int pointer; } ;
union iwreq_data {struct iw_point data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct _adapter {int pid; scalar_t__ driver_stopped; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 struct _adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct iw_request_info *VAR_2,
    union iwreq_data *VAR_3, char *VAR_4)
{
 struct _adapter *VAR_5 = FUNC_1(VAR_1);
 struct iw_point *VAR_6 = &VAR_3->data;

 if ((VAR_5->driver_stopped) || (VAR_6 == ((void*)0)))
  return -VAR_0;
 if (FUNC_0(&VAR_5->pid, VAR_6->pointer, sizeof(int)))
  return -VAR_0;
 return 0;
}
