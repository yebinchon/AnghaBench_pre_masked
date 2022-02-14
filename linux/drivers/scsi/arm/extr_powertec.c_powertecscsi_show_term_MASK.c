
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powertec_info {scalar_t__ term_ctl; } ;
struct expansion_card {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 struct expansion_card* FUNC_0 (struct device*) ;
 struct Scsi_Host* FUNC_1 (struct expansion_card*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct expansion_card *VAR_3 = FUNC_0(VAR_0);
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_3);
 struct powertec_info *VAR_5 = (struct powertec_info *)VAR_4->hostdata;

 return FUNC_2(VAR_2, "%d\n", VAR_5->term_ctl ? 1 : 0);
}
