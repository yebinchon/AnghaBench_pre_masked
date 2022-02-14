
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int flags; TYPE_1__* request; } ;
struct TYPE_2__ {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(unsigned char *VAR_2, struct scsi_cmnd *VAR_3)
{
        if (VAR_3->flags & VAR_0) {
  *VAR_2++ = VAR_1;
         *VAR_2++ = VAR_3->request->tag;
         return 2;
 }

 return 0;
}
