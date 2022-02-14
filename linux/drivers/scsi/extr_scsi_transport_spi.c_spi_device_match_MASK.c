
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spi_internal {TYPE_3__* f; } ;
struct scsi_device {int sdev_target; struct Scsi_Host* host; } ;
struct device {int dummy; } ;
struct attribute_container {int dummy; } ;
struct Scsi_Host {TYPE_4__* transportt; } ;
struct TYPE_10__ {int class; } ;
struct TYPE_6__ {int * class; } ;
struct TYPE_7__ {TYPE_1__ ac; } ;
struct TYPE_9__ {TYPE_2__ host_attrs; } ;
struct TYPE_8__ {scalar_t__ (* deny_binding ) (int ) ;} ;


 int FUNC_0 (struct device*) ;
 TYPE_5__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct scsi_device* FUNC_2 (struct device*) ;
 struct spi_internal* FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct attribute_container *VAR_1,
       struct device *VAR_2)
{
 struct scsi_device *VAR_3;
 struct Scsi_Host *VAR_4;
 struct spi_internal *VAR_5;

 if (!FUNC_0(VAR_2))
  return 0;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = VAR_3->host;
 if (!VAR_4->transportt || VAR_4->transportt->host_attrs.ac.class
     != &VAR_0.class)
  return 0;



 VAR_5 = FUNC_3(VAR_4->transportt);
 if (VAR_5->f->deny_binding && VAR_5->f->deny_binding(VAR_3->sdev_target))
  return 0;
 return 1;
}
