
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sa_data; int sa_family; } ;
struct TYPE_4__ {scalar_t__ flags; scalar_t__ length; } ;
union iwreq_data {TYPE_1__ ap_addr; TYPE_2__ data; } ;
struct net_device {int dummy; } ;
struct atmel_private {scalar_t__ station_state; scalar_t__ bus_type; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 int FUNC_2 (int ) ;
 struct atmel_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,union iwreq_data*,int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_6)
{
 struct atmel_private *VAR_7 = FUNC_3(VAR_6);


 if (VAR_7->station_state == VAR_5) {
  union iwreq_data VAR_8;

  VAR_8.data.length = 0;
  VAR_8.data.flags = 0;
  VAR_8.ap_addr.sa_family = VAR_0;
  FUNC_2(VAR_8.ap_addr.sa_data);
  FUNC_4(VAR_7->dev, VAR_3, &VAR_8, ((void*)0));
 }

 FUNC_0(VAR_7, VAR_4);

 if (VAR_7->bus_type == VAR_1)
  FUNC_1(VAR_6, VAR_2, 0x0060);
 FUNC_1(VAR_6, VAR_2, 0x0040);
 return 0;
}
