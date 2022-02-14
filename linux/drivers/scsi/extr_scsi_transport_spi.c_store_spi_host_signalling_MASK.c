
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_internal {TYPE_1__* f; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef size_t ssize_t ;
typedef enum spi_signal_type { ____Placeholder_spi_signal_type } spi_signal_type ;
struct TYPE_2__ {int (* set_signalling ) (struct Scsi_Host*,int) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct Scsi_Host*,int) ;
 struct spi_internal* FUNC_2 (int ) ;
 struct Scsi_Host* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_3(VAR_2);
 struct spi_internal *VAR_7 = FUNC_2(VAR_6->transportt);
 enum spi_signal_type VAR_8 = FUNC_0(VAR_4);

 if (!VAR_7->f->set_signalling)
  return -VAR_0;

 if (VAR_8 != VAR_1)
  VAR_7->f->set_signalling(VAR_6, VAR_8);

 return VAR_5;
}
