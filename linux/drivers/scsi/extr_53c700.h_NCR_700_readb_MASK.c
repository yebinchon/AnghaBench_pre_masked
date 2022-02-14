
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__* hostdata; } ;
struct NCR_700_Host_Parameters {scalar_t__ base; } ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline __u8
FUNC_1(struct Scsi_Host *VAR_1, __u32 VAR_2)
{
 const struct NCR_700_Host_Parameters *VAR_3
  = (struct NCR_700_Host_Parameters *)VAR_1->hostdata[0];

 return FUNC_0(VAR_3->base + (VAR_2^VAR_0));
}
