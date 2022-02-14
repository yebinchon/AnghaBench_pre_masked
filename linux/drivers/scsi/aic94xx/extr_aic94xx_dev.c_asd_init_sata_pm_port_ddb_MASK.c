
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int port_no; } ;
struct domain_device {TYPE_4__ sata_dev; TYPE_3__* parent; TYPE_2__* port; } ;
struct asd_ha_struct {int dummy; } ;
struct TYPE_7__ {scalar_t__ lldd_dev; } ;
struct TYPE_6__ {TYPE_1__* ha; } ;
struct TYPE_5__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct asd_ha_struct*,int,int ) ;
 int FUNC_1 (struct asd_ha_struct*,int,int) ;
 int FUNC_2 (struct asd_ha_struct*,int,int ,int) ;
 int FUNC_3 (struct asd_ha_struct*,int,int,int) ;
 int FUNC_4 (struct asd_ha_struct*,int) ;
 int FUNC_5 (struct asd_ha_struct*) ;
 int FUNC_6 (struct domain_device*) ;
 int FUNC_7 (struct domain_device*) ;
 int FUNC_8 (struct domain_device*) ;

__attribute__((used)) static int FUNC_9(struct domain_device *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 struct asd_ha_struct *VAR_11 = VAR_6->port->ha->lldd_ha;
 u8 VAR_12;

 VAR_7 = FUNC_5(VAR_11);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_8(VAR_6);
 VAR_12 = (VAR_6->sata_dev.port_no << 4) | VAR_4;
 FUNC_2(VAR_11, VAR_7, VAR_3, VAR_12);
 FUNC_3(VAR_11, VAR_7, VAR_5, 0xFFFF);
 FUNC_3(VAR_11, VAR_7, VAR_0, 0xFFFF);
 FUNC_6(VAR_6);

 VAR_9 = (int) (unsigned long) VAR_6->parent->lldd_dev;
 FUNC_3(VAR_11, VAR_7, VAR_2, VAR_9);
 VAR_10 = FUNC_1(VAR_11, VAR_9, VAR_5);
 FUNC_3(VAR_11, VAR_10, VAR_6->sata_dev.port_no,VAR_7);

 if (FUNC_0(VAR_11, VAR_7, VAR_1) > 0) {
  VAR_8 = FUNC_7(VAR_6);
  if (VAR_8 < 0) {
   FUNC_4(VAR_11, VAR_7);
   return VAR_8;
  }
 }
 return 0;
}
