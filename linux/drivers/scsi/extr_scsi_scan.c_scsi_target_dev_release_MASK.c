
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int dummy; } ;
struct device {struct device* parent; } ;


 int FUNC_0 (struct scsi_target*) ;
 int FUNC_1 (struct device*) ;
 struct scsi_target* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct device *VAR_1 = VAR_0->parent;
 struct scsi_target *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2);
 FUNC_1(VAR_1);
}
