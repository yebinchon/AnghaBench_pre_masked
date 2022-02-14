
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct AdapterControlBlock {int firm_sdram_size; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct AdapterControlBlock *VAR_5 =
  (struct AdapterControlBlock *) VAR_4->hostdata;

 return FUNC_1(VAR_3, VAR_0,
   "%4d\n",
   VAR_5->firm_sdram_size);
}
