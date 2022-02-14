
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct typec_plug_desc {int index; } ;
struct TYPE_5__ {int * type; TYPE_4__* parent; int class; } ;
struct typec_plug {int index; TYPE_1__ dev; int mode_ids; } ;
struct TYPE_6__ {int parent; } ;
struct typec_cable {TYPE_4__ dev; } ;


 int VAR_0 ;
 struct typec_plug* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 struct typec_plug* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

struct typec_plug *FUNC_9(struct typec_cable *VAR_4,
           struct typec_plug_desc *VAR_5)
{
 struct typec_plug *VAR_6;
 char VAR_7[8];
 int VAR_8;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_8(VAR_7, "plug%d", VAR_5->index);

 FUNC_5(&VAR_6->mode_ids);
 VAR_6->index = VAR_5->index;
 VAR_6->dev.class = VAR_2;
 VAR_6->dev.parent = &VAR_4->dev;
 VAR_6->dev.type = &VAR_3;
 FUNC_3(&VAR_6->dev, "%s-%s", FUNC_2(VAR_4->dev.parent), VAR_7);

 VAR_8 = FUNC_4(&VAR_6->dev);
 if (VAR_8) {
  FUNC_1(&VAR_4->dev, "failed to register plug (%d)\n", VAR_8);
  FUNC_7(&VAR_6->dev);
  return FUNC_0(VAR_8);
 }

 return VAR_6;
}
