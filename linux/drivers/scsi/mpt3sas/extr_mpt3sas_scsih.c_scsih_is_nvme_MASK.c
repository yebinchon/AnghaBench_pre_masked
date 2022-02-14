
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ channel; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct scsi_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int
FUNC_1(struct device *VAR_1)
{
 struct scsi_device *VAR_2 = FUNC_0(VAR_1);

 return (VAR_2->channel == VAR_0) ? 1 : 0;
}
