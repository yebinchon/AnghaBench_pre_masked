
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_core {scalar_t__ use_tz; TYPE_1__* res; struct device* dev; } ;
struct device {int dummy; } ;
typedef int phys_addr_t ;
struct TYPE_2__ {int fwname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct venus_core*,int ,size_t) ;
 int FUNC_5 (struct venus_core*,int ,int *,size_t*) ;

int FUNC_6(struct venus_core *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 phys_addr_t VAR_6;
 size_t VAR_7;
 int VAR_8;

 if (!FUNC_0(VAR_0) ||
     (VAR_4->use_tz && !FUNC_2()))
  return -VAR_2;

 VAR_8 = FUNC_5(VAR_4, VAR_4->res->fwname, &VAR_6, &VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_5, "fail to load video firmware\n");
  return -VAR_1;
 }

 if (VAR_4->use_tz)
  VAR_8 = FUNC_3(VAR_3);
 else
  VAR_8 = FUNC_4(VAR_4, VAR_6, VAR_7);

 return VAR_8;
}
