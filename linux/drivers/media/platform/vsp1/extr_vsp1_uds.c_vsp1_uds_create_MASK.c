
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int index; int type; int * ops; } ;
struct vsp1_uds {TYPE_1__ entity; } ;
struct vsp1_device {int dev; } ;


 int VAR_0 ;
 struct vsp1_uds* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vsp1_uds* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct vsp1_device*,TYPE_1__*,char*,int,int *,int ) ;

struct vsp1_uds *FUNC_4(struct vsp1_device *VAR_6, unsigned int VAR_7)
{
 struct vsp1_uds *VAR_8;
 char VAR_9[6];
 int VAR_10;

 VAR_8 = FUNC_1(VAR_6->dev, sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_8->entity.ops = &VAR_4;
 VAR_8->entity.type = VAR_3;
 VAR_8->entity.index = VAR_7;

 FUNC_2(VAR_9, "uds.%u", VAR_7);
 VAR_10 = FUNC_3(VAR_6, &VAR_8->entity, VAR_9, 2, &VAR_5,
          VAR_2);
 if (VAR_10 < 0)
  return FUNC_0(VAR_10);

 return VAR_8;
}
