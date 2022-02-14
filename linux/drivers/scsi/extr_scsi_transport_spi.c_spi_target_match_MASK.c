
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct attribute_container {int dummy; } ;
struct TYPE_11__ {struct attribute_container ac; } ;
struct TYPE_12__ {TYPE_4__ target_attrs; } ;
struct spi_internal {TYPE_5__ t; TYPE_3__* f; } ;
struct scsi_target {int dummy; } ;
struct device {int parent; } ;
struct Scsi_Host {TYPE_6__* transportt; } ;
struct TYPE_14__ {int class; } ;
struct TYPE_8__ {int * class; } ;
struct TYPE_9__ {TYPE_1__ ac; } ;
struct TYPE_13__ {TYPE_2__ host_attrs; } ;
struct TYPE_10__ {scalar_t__ (* deny_binding ) (struct scsi_target*) ;} ;


 struct Scsi_Host* FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 TYPE_7__ VAR_0 ;
 scalar_t__ FUNC_2 (struct scsi_target*) ;
 struct scsi_target* FUNC_3 (struct device*) ;
 struct spi_internal* FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_5(struct attribute_container *VAR_1,
       struct device *VAR_2)
{
 struct Scsi_Host *VAR_3;
 struct scsi_target *VAR_4;
 struct spi_internal *VAR_5;

 if (!FUNC_1(VAR_2))
  return 0;

 VAR_3 = FUNC_0(VAR_2->parent);
 if (!VAR_3->transportt || VAR_3->transportt->host_attrs.ac.class
     != &VAR_0.class)
  return 0;

 VAR_5 = FUNC_4(VAR_3->transportt);
 VAR_4 = FUNC_3(VAR_2);

 if (VAR_5->f->deny_binding && VAR_5->f->deny_binding(VAR_4))
  return 0;

 return &VAR_5->t.target_attrs.ac == VAR_1;
}
