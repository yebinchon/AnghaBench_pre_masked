
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ channel; int host; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct scsi_device *VAR_1 = FUNC_1(VAR_0);

 return VAR_1->channel == FUNC_0(VAR_1->host);
}
