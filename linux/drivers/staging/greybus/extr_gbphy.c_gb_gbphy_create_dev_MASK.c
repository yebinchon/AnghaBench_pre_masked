
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct greybus_descriptor_cport {int dummy; } ;
struct TYPE_6__ {int dma_mask; int groups; int * type; int * bus; TYPE_1__* parent; } ;
struct gbphy_device {int id; TYPE_2__ dev; struct greybus_descriptor_cport* cport_desc; struct gb_bundle* bundle; } ;
struct TYPE_5__ {int dma_mask; } ;
struct gb_bundle {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct gbphy_device* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int) ;
 struct gbphy_device* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static struct gbphy_device *FUNC_7(struct gb_bundle *VAR_6,
    struct greybus_descriptor_cport *VAR_7)
{
 struct gbphy_device *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(&VAR_4, 1, 0, VAR_1);
 if (VAR_10 < 0)
  return FUNC_0(VAR_10);

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  FUNC_4(&VAR_4, VAR_10);
  return FUNC_0(-VAR_0);
 }

 VAR_8->id = VAR_10;
 VAR_8->bundle = VAR_6;
 VAR_8->cport_desc = VAR_7;
 VAR_8->dev.parent = &VAR_6->dev;
 VAR_8->dev.bus = &VAR_2;
 VAR_8->dev.type = &VAR_5;
 VAR_8->dev.groups = VAR_3;
 VAR_8->dev.dma_mask = VAR_6->dev.dma_mask;
 FUNC_1(&VAR_8->dev, "gbphy%d", VAR_10);

 VAR_9 = FUNC_2(&VAR_8->dev);
 if (VAR_9) {
  FUNC_6(&VAR_8->dev);
  return FUNC_0(VAR_9);
 }

 return VAR_8;
}
