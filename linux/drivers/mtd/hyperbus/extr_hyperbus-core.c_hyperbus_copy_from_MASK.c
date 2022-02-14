
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct map_info {int dummy; } ;
struct hyperbus_device {struct hyperbus_ctlr* ctlr; } ;
struct hyperbus_ctlr {TYPE_1__* ops; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* copy_from ) (struct hyperbus_device*,void*,unsigned long,int ) ;} ;


 struct hyperbus_device* FUNC_0 (struct map_info*) ;
 int FUNC_1 (struct hyperbus_device*,void*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct map_info *VAR_0, void *VAR_1,
          unsigned long VAR_2, ssize_t VAR_3)
{
 struct hyperbus_device *VAR_4 = FUNC_0(VAR_0);
 struct hyperbus_ctlr *VAR_5 = VAR_4->ctlr;

 VAR_5->ops->copy_from(VAR_4, VAR_1, VAR_2, VAR_3);
}
