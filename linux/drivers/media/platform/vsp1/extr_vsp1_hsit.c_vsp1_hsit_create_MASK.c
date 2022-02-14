
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int * ops; } ;
struct vsp1_hsit {int inverse; TYPE_1__ entity; } ;
struct vsp1_device {int dev; } ;


 int VAR_0 ;
 struct vsp1_hsit* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vsp1_hsit* FUNC_1 (int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct vsp1_device*,TYPE_1__*,char*,int,int *,int ) ;

struct vsp1_hsit *FUNC_3(struct vsp1_device *VAR_7, bool VAR_8)
{
 struct vsp1_hsit *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_9->inverse = VAR_8;

 VAR_9->entity.ops = &VAR_5;

 if (VAR_8)
  VAR_9->entity.type = VAR_3;
 else
  VAR_9->entity.type = VAR_4;

 VAR_10 = FUNC_2(VAR_7, &VAR_9->entity, VAR_8 ? "hsi" : "hst",
          2, &VAR_6,
          VAR_2);
 if (VAR_10 < 0)
  return FUNC_0(VAR_10);

 return VAR_9;
}
