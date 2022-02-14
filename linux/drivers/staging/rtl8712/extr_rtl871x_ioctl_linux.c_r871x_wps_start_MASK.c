
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_point {int pointer; } ;
union iwreq_data {struct iw_point data; } ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {int (* LedControlHandler ) (struct _adapter*,int ) ;} ;
struct _adapter {TYPE_1__ ledpriv; scalar_t__ driver_stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*,int ,int) ;
 struct _adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct _adapter*,int ) ;
 int FUNC_3 (struct _adapter*,int ) ;
 int FUNC_4 (struct _adapter*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
      struct iw_request_info *VAR_6,
      union iwreq_data *VAR_7, char *VAR_8)
{
 struct _adapter *VAR_9 = FUNC_1(VAR_5);
 struct iw_point *VAR_10 = &VAR_7->data;
 u32 VAR_11 = 0;

 if ((VAR_9->driver_stopped) || (VAR_10 == ((void*)0)))
  return -VAR_1;
 if (FUNC_0((void *)&VAR_11, VAR_10->pointer, 4))
  return -VAR_0;
 if (VAR_11 == 0)
  VAR_11 = *VAR_8;
 if (VAR_11 == 1)
  VAR_9->ledpriv.LedControlHandler(VAR_9,
      VAR_2);
 else if (VAR_11 == 2)
  VAR_9->ledpriv.LedControlHandler(VAR_9,
      VAR_3);
 else if (VAR_11 == 3)
  VAR_9->ledpriv.LedControlHandler(VAR_9,
      VAR_4);
 return 0;
}
