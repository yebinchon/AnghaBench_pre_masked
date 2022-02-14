
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct device {int parent; } ;
struct class_interface {int dummy; } ;


 int FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (struct scsi_device*) ;
 struct scsi_device* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0,
       struct class_interface *VAR_1)
{
 struct scsi_device *VAR_2 = FUNC_3(VAR_0->parent);

 if (!FUNC_0(VAR_2))
  FUNC_1(VAR_2);
 else
  FUNC_2(VAR_2);
}
