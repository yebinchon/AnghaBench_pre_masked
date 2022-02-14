
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym53c500_data {int fast_pio; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_0);
 struct sym53c500_data *VAR_4 =
     (struct sym53c500_data *)VAR_3->hostdata;

 return FUNC_1(VAR_2, 4, "%d\n", VAR_4->fast_pio);
}
