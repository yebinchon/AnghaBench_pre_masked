
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct wusbhc {scalar_t__ ports_max; int mutex; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,scalar_t__,int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (struct wusbhc*,scalar_t__) ;
 int FUNC_4 (struct wusbhc*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct wusbhc *VAR_4, u16 VAR_5,
       u8 VAR_6, u8 VAR_7)
{
 struct device *VAR_8 = VAR_4->dev;

 if (VAR_7 > VAR_4->ports_max)
  return -VAR_0;

 switch (VAR_5) {


 case 134:
 case 135:
 case 132:
 case 136:
 case 133:
  return 0;
 case 130:

  FUNC_1(&VAR_4->mutex);
  FUNC_3(VAR_4, VAR_7)->status |= VAR_3;
  FUNC_2(&VAR_4->mutex);
  return 0;
 case 129:
  return FUNC_4(VAR_4, VAR_7);
 case 131:
 case 128:
  FUNC_0(VAR_8, "(port_idx %d) set feat %d/%d UNIMPLEMENTED\n",
   VAR_7, VAR_5, VAR_6);
  return -VAR_1;
 default:
  FUNC_0(VAR_8, "(port_idx %d) set feat %d/%d UNKNOWN\n",
   VAR_7, VAR_5, VAR_6);
  return -VAR_2;
 }

 return 0;
}
