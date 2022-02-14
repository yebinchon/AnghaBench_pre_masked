
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int use_10_for_rw; int use_10_for_ms; int request_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct scsi_device *VAR_1)
{
 VAR_1->use_10_for_rw = 1;
 VAR_1->use_10_for_ms = 1;
 FUNC_0(VAR_1->request_queue, 60 * VAR_0);

 return 0;
}
