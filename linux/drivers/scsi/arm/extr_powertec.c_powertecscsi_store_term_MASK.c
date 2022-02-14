
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expansion_card {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef size_t ssize_t ;


 struct expansion_card* FUNC_0 (struct device*) ;
 struct Scsi_Host* FUNC_1 (struct expansion_card*) ;
 int FUNC_2 (struct Scsi_Host*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct expansion_card *VAR_4 = FUNC_0(VAR_0);
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_4);

 if (VAR_3 > 1)
  FUNC_2(VAR_5, VAR_2[0] != '0');

 return VAR_3;
}
