
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* update_cache; TYPE_7__* write_cache; TYPE_4__* read_cache; } ;
struct spinand_device {int flags; TYPE_6__ op_templates; } ;
struct TYPE_12__ {int buswidth; } ;
struct TYPE_14__ {TYPE_5__ data; } ;
struct TYPE_10__ {int buswidth; } ;
struct TYPE_11__ {TYPE_3__ data; } ;
struct TYPE_8__ {int buswidth; } ;
struct TYPE_9__ {TYPE_1__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spinand_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct spinand_device *VAR_2)
{
 bool VAR_3 = 0;

 if (!(VAR_2->flags & VAR_1))
  return 0;

 if (VAR_2->op_templates.read_cache->data.buswidth == 4 ||
     VAR_2->op_templates.write_cache->data.buswidth == 4 ||
     VAR_2->op_templates.update_cache->data.buswidth == 4)
  VAR_3 = 1;

 return FUNC_0(VAR_2, VAR_0,
          VAR_3 ? VAR_0 : 0);
}
