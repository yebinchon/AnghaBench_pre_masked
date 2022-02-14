
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cxl_afu {int modes_supported; TYPE_3__* adapter; } ;
struct TYPE_8__ {int (* link_ok ) (TYPE_3__*,struct cxl_afu*) ;} ;
struct TYPE_7__ {TYPE_2__* native; } ;
struct TYPE_6__ {TYPE_1__* sl_ops; } ;
struct TYPE_5__ {int (* activate_dedicated_process ) (struct cxl_afu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct cxl_afu*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 (TYPE_3__*,struct cxl_afu*) ;
 int FUNC_3 (struct cxl_afu*) ;

__attribute__((used)) static int FUNC_4(struct cxl_afu *VAR_5, int VAR_6)
{
 if (!VAR_6)
  return 0;
 if (!(VAR_6 & VAR_5->modes_supported))
  return -VAR_2;

 if (!VAR_4->link_ok(VAR_5->adapter, VAR_5)) {
  FUNC_0(1, "Device link is down, refusing to activate!\n");
  return -VAR_3;
 }

 if (VAR_6 == VAR_1)
  return FUNC_1(VAR_5);
 if ((VAR_6 == VAR_0) &&
     (VAR_5->adapter->native->sl_ops->activate_dedicated_process))
  return VAR_5->adapter->native->sl_ops->activate_dedicated_process(VAR_5);

 return -VAR_2;
}
