
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct map_info {int dummy; } ;
struct hyperbus_device {struct hyperbus_ctlr* ctlr; } ;
struct hyperbus_ctlr {TYPE_1__* ops; } ;
struct TYPE_5__ {int * x; } ;
typedef TYPE_2__ map_word ;
struct TYPE_4__ {int (* read16 ) (struct hyperbus_device*,unsigned long) ;} ;


 struct hyperbus_device* FUNC_0 (struct map_info*) ;
 int FUNC_1 (struct hyperbus_device*,unsigned long) ;

__attribute__((used)) static map_word FUNC_2(struct map_info *VAR_0, unsigned long VAR_1)
{
 struct hyperbus_device *VAR_2 = FUNC_0(VAR_0);
 struct hyperbus_ctlr *VAR_3 = VAR_2->ctlr;
 map_word VAR_4;

 VAR_4.x[0] = VAR_3->ops->read16(VAR_2, VAR_1);

 return VAR_4;
}
