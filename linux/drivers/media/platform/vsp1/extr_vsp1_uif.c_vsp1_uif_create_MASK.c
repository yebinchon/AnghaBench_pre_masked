
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int index; int type; int * ops; } ;
struct vsp1_uif {int m3w_quirk; TYPE_1__ entity; } ;
struct vsp1_device {int dev; } ;


 int VAR_0 ;
 struct vsp1_uif* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vsp1_uif* FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct vsp1_device*,TYPE_1__*,char*,int,int *,int ) ;
 int VAR_6 ;

struct vsp1_uif *FUNC_5(struct vsp1_device *VAR_7, unsigned int VAR_8)
{
 struct vsp1_uif *VAR_9;
 char VAR_10[6];
 int VAR_11;

 VAR_9 = FUNC_1(VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 if (FUNC_2(VAR_6))
  VAR_9->m3w_quirk = 1;

 VAR_9->entity.ops = &VAR_4;
 VAR_9->entity.type = VAR_3;
 VAR_9->entity.index = VAR_8;


 FUNC_3(VAR_10, "uif.%u", VAR_8 + 4);
 VAR_11 = FUNC_4(VAR_7, &VAR_9->entity, VAR_10, 2, &VAR_5,
          VAR_2);
 if (VAR_11 < 0)
  return FUNC_0(VAR_11);

 return VAR_9;
}
