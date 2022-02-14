
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct domain_device {scalar_t__ dev_type; scalar_t__ frame_rcvd; scalar_t__ lldd_dev; TYPE_2__* port; } ;
struct dev_to_host_fis {int status; } ;
struct asd_ha_struct {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ha; } ;
struct TYPE_3__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct asd_ha_struct*,int,int ,int ) ;
 int FUNC_1 (struct asd_ha_struct*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct domain_device *VAR_6)
{
 struct asd_ha_struct *VAR_7 = VAR_6->port->ha->lldd_ha;
 int VAR_8 = (int) (unsigned long) VAR_6->lldd_dev;

 FUNC_1(VAR_7, VAR_8, VAR_0, 0xFFFF);
 if (VAR_6->dev_type == VAR_2 || VAR_6->dev_type == VAR_3 ||
     VAR_6->dev_type == VAR_4) {
  struct dev_to_host_fis *VAR_9 = (struct dev_to_host_fis *)
   VAR_6->frame_rcvd;
  FUNC_0(VAR_7, VAR_8, VAR_5, VAR_9->status);
 }
 FUNC_1(VAR_7, VAR_8, VAR_1, 0xFFFF);

 return 0;
}
