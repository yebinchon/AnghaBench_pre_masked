
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CommandList {scalar_t__ scsi_cmd; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct CommandList *VAR_1)
{
 return VAR_1->scsi_cmd == VAR_0;
}
