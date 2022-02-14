
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 struct Scsi_Host* FUNC_0 (int *,struct device*,unsigned int) ;
 int FUNC_1 (struct device*,struct Scsi_Host*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, unsigned int VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_0(&VAR_0, VAR_1, VAR_2);

 if (!VAR_3)
  return 0;

 FUNC_1(VAR_1, VAR_3);
 return 1;
}
