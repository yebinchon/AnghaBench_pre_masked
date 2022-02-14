
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct hdlc_proto {int (* ioctl ) (struct net_device*,struct ifreq*) ;struct hdlc_proto* next; } ;
struct TYPE_4__ {TYPE_1__* proto; } ;
struct TYPE_3__ {int (* ioctl ) (struct net_device*,struct ifreq*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct net_device*) ;
 struct hdlc_proto* VAR_2 ;
 int FUNC_1 (struct net_device*,struct ifreq*) ;
 int FUNC_2 (struct net_device*,struct ifreq*) ;

int FUNC_3(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct hdlc_proto *VAR_6 = VAR_2;
 int VAR_7;

 if (VAR_5 != VAR_1)
  return -VAR_0;

 if (FUNC_0(VAR_3)->proto) {
  VAR_7 = FUNC_0(VAR_3)->proto->ioctl(VAR_3, VAR_4);
  if (VAR_7 != -VAR_0)
   return VAR_7;
 }



 while (VAR_6) {
  if ((VAR_7 = VAR_6->ioctl(VAR_3, VAR_4)) != -VAR_0)
   return VAR_7;
  VAR_6 = VAR_6->next;
 }
 return -VAR_0;
}
