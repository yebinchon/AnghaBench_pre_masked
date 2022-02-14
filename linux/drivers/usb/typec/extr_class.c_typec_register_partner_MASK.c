
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct typec_port {int dev; } ;
struct typec_partner_desc {scalar_t__ identity; int accessory; int usb_pd; } ;
struct TYPE_4__ {int * type; int * parent; int class; int groups; } ;
struct typec_partner {TYPE_1__ dev; scalar_t__ identity; int accessory; int usb_pd; int mode_ids; } ;


 int VAR_0 ;
 struct typec_partner* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 struct typec_partner* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

struct typec_partner *FUNC_8(struct typec_port *VAR_5,
          struct typec_partner_desc *VAR_6)
{
 struct typec_partner *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_5(&VAR_7->mode_ids);
 VAR_7->usb_pd = VAR_6->usb_pd;
 VAR_7->accessory = VAR_6->accessory;

 if (VAR_6->identity) {




  VAR_7->dev.groups = VAR_4;
  VAR_7->identity = VAR_6->identity;
 }

 VAR_7->dev.class = VAR_2;
 VAR_7->dev.parent = &VAR_5->dev;
 VAR_7->dev.type = &VAR_3;
 FUNC_3(&VAR_7->dev, "%s-partner", FUNC_2(&VAR_5->dev));

 VAR_8 = FUNC_4(&VAR_7->dev);
 if (VAR_8) {
  FUNC_1(&VAR_5->dev, "failed to register partner (%d)\n", VAR_8);
  FUNC_7(&VAR_7->dev);
  return FUNC_0(VAR_8);
 }

 return VAR_7;
}
