
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
struct TYPE_4__ {int (* write16 ) (struct hyperbus_device*,unsigned long,int ) ;} ;


 struct hyperbus_device* FUNC_0 (struct map_info*) ;
 int FUNC_1 (struct hyperbus_device*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct map_info *VAR_0, map_word VAR_1,
        unsigned long VAR_2)
{
 struct hyperbus_device *VAR_3 = FUNC_0(VAR_0);
 struct hyperbus_ctlr *VAR_4 = VAR_3->ctlr;

 VAR_4->ops->write16(VAR_3, VAR_2, VAR_1.x[0]);
}
