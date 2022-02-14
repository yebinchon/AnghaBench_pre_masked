
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_transport_attrs {int min_period; } ;
struct spi_internal {TYPE_2__* f; } ;
struct TYPE_3__ {int parent; } ;
struct scsi_target {int starget_data; TYPE_1__ dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef int ssize_t ;
struct TYPE_4__ {int set_period; } ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 struct spi_internal* FUNC_2 (int ) ;
 struct scsi_target* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct scsi_target *VAR_4 = FUNC_3(VAR_1);
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_4->dev.parent);
 struct spi_internal *VAR_6 = FUNC_2(VAR_5->transportt);
 struct spi_transport_attrs *VAR_7 =
  (struct spi_transport_attrs *)&VAR_4->starget_data;

 if (!VAR_6->f->set_period)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_7->min_period);
}
