
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_bflags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct scsi_device *VAR_2)
{
 VAR_2->sdev_bflags = VAR_0 | VAR_1;

 return 0;
}
