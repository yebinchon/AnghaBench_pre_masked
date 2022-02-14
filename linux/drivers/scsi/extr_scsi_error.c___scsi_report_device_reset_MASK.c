
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int was_reset; int expecting_cc_ua; } ;



__attribute__((used)) static void FUNC_0(struct scsi_device *VAR_0, void *VAR_1)
{
 VAR_0->was_reset = 1;
 VAR_0->expecting_cc_ua = 1;
}
