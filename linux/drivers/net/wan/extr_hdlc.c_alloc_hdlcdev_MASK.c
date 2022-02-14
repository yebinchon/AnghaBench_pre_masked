
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hdlc_device {int dummy; } ;
struct TYPE_2__ {void* priv; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int,char*,int ,int ) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int VAR_1 ;

struct net_device *FUNC_2(void *VAR_2)
{
 struct net_device *VAR_3;
 VAR_3 = FUNC_0(sizeof(struct hdlc_device), "hdlc%d",
      VAR_0, VAR_1);
 if (VAR_3)
  FUNC_1(VAR_3)->priv = VAR_2;
 return VAR_3;
}
