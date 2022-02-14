
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* parent; } ;
struct rtc_device {TYPE_4__* nvram; TYPE_3__ dev; } ;
struct nvmem_device {int dummy; } ;
struct TYPE_8__ {char* name; int mode; } ;
struct TYPE_11__ {size_t size; int write; int read; struct nvmem_device* private; TYPE_1__ attr; } ;
struct TYPE_9__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct rtc_device *VAR_4,
         struct nvmem_device *VAR_5, size_t VAR_6)
{
 int VAR_7;

 VAR_4->nvram = FUNC_1(sizeof(*VAR_4->nvram), VAR_1);
 if (!VAR_4->nvram)
  return -VAR_0;

 VAR_4->nvram->attr.name = "nvram";
 VAR_4->nvram->attr.mode = 0644;
 VAR_4->nvram->private = VAR_5;

 FUNC_2(VAR_4->nvram);

 VAR_4->nvram->read = VAR_2;
 VAR_4->nvram->write = VAR_3;
 VAR_4->nvram->size = VAR_6;

 VAR_7 = FUNC_3(&VAR_4->dev.parent->kobj,
        VAR_4->nvram);
 if (VAR_7) {
  FUNC_0(VAR_4->nvram);
  VAR_4->nvram = ((void*)0);
 }

 return VAR_7;
}
