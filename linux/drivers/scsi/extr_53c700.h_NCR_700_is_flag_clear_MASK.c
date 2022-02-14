
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_target; } ;
typedef int __u32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(struct scsi_device *VAR_0, __u32 VAR_1)
{
 return (FUNC_0(VAR_0->sdev_target) & VAR_1) == 0;
}
