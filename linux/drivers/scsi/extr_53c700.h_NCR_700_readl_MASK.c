
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__* hostdata; } ;
struct NCR_700_Host_Parameters {int base; } ;
typedef int __u32 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline __u32
FUNC_3(struct Scsi_Host *VAR_1, __u32 VAR_2)
{
 const struct NCR_700_Host_Parameters *VAR_3
  = (struct NCR_700_Host_Parameters *)VAR_1->hostdata[0];
 __u32 VAR_4 = VAR_0 ? FUNC_2(VAR_3->base + VAR_2) :
  FUNC_1(VAR_3->base + VAR_2);


 FUNC_0((VAR_2 & 0x3) != 0);


 return VAR_4;
}
