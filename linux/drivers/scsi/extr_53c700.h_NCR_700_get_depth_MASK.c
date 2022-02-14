
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct NCR_700_Device_Parameters* hostdata; } ;
struct NCR_700_Device_Parameters {int depth; } ;
typedef int __u8 ;



__attribute__((used)) static inline __u8
FUNC_0(struct scsi_device *VAR_0)
{
 struct NCR_700_Device_Parameters *VAR_1 = VAR_0->hostdata;

 return VAR_1->depth;
}
