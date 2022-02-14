
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int io_shift; scalar_t__ io_base; } ;
struct TYPE_5__ {TYPE_1__ scsi; } ;
typedef TYPE_2__ FAS216_Info ;


 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned char FUNC_1(FAS216_Info *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_1 << VAR_0->scsi.io_shift;
 return FUNC_0(VAR_0->scsi.io_base + VAR_2);
}
