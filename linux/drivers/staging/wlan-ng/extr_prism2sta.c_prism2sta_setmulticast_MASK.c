
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wlandevice {struct hfa384x* priv; } ;
struct net_device {int flags; } ;
struct hfa384x {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hfa384x*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct wlandevice *VAR_6,
      struct net_device *VAR_7)
{
 int VAR_8 = 0;
 struct hfa384x *VAR_9 = VAR_6->priv;

 u16 VAR_10;


 if (VAR_9->state != VAR_1)
  goto exit;

 if ((VAR_7->flags & (VAR_3 | VAR_2)) != 0)
  VAR_10 = VAR_5;
 else
  VAR_10 = VAR_4;

 VAR_8 =
     FUNC_0(VAR_9, VAR_0,
        VAR_10);
exit:
 return VAR_8;
}
