
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blogic_adapter {char const* full_model; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;



__attribute__((used)) static const char *FUNC_0(struct Scsi_Host *VAR_0)
{
 struct blogic_adapter *VAR_1 =
    (struct blogic_adapter *) VAR_0->hostdata;
 return VAR_1->full_model;
}
