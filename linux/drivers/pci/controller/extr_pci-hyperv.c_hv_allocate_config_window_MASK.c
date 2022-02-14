
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_pcibus_device {TYPE_1__* mem_config; int hdev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__**,int ,int ,int,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct hv_pcibus_device *VAR_2)
{
 int VAR_3;





 VAR_3 = FUNC_0(&VAR_2->mem_config, VAR_2->hdev, 0, -1,
      VAR_1, 0x1000, 0);
 if (VAR_3)
  return VAR_3;
 VAR_2->mem_config->flags |= VAR_0;

 return 0;
}
