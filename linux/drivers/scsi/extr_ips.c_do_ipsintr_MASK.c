
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct Scsi_Host {int host_lock; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int (* intr ) (TYPE_2__*) ;} ;
struct TYPE_7__ {size_t host_num; TYPE_1__ func; int active; } ;
typedef TYPE_2__ ips_ha_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 struct Scsi_Host** VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_4, void *VAR_5)
{
 ips_ha_t *VAR_6;
 struct Scsi_Host *VAR_7;
 int VAR_8;

 FUNC_1("do_ipsintr", 2);

 VAR_6 = (ips_ha_t *) VAR_5;
 if (!VAR_6)
  return VAR_2;
 VAR_7 = VAR_3[VAR_6->host_num];

 if (!VAR_7) {
  (*VAR_6->func.intr) (VAR_6);
  return VAR_1;
 }

 FUNC_3(VAR_7->host_lock);

 if (!VAR_6->active) {
  FUNC_4(VAR_7->host_lock);
  return VAR_1;
 }

 VAR_8 = (*VAR_6->func.intr) (VAR_6);

 FUNC_4(VAR_7->host_lock);


 FUNC_2(VAR_6, VAR_0);
 return FUNC_0(VAR_8);
}
