
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int coreid; } ;
struct ssb_device {int core_index; TYPE_1__ id; } ;
struct ssb_bus {struct ssb_device* mapped_device; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ssb_bus*,int ) ;

__attribute__((used)) static int FUNC_3(struct ssb_bus *VAR_0, struct ssb_device *VAR_1)
{
 int VAR_2;






 VAR_2 = FUNC_2(VAR_0, VAR_1->core_index);
 if (!VAR_2)
  VAR_0->mapped_device = VAR_1;

 return VAR_2;
}
