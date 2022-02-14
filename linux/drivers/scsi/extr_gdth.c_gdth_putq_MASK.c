
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_4__ {char* ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct gdth_cmndinfo {scalar_t__ priority; int internal_command; } ;
struct TYPE_5__ {struct scsi_cmnd* req_first; int smp_lock; } ;
typedef TYPE_2__ gdth_ha_str ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct gdth_cmndinfo* FUNC_2 (struct scsi_cmnd*) ;
 unsigned long VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(gdth_ha_str *VAR_1, struct scsi_cmnd *VAR_2, u8 VAR_3)
{
    struct gdth_cmndinfo *VAR_4 = FUNC_2(VAR_2);
    register struct scsi_cmnd *VAR_5;
    register struct scsi_cmnd *VAR_6;
    unsigned long VAR_7;

    FUNC_0(("gdth_putq() priority %d\n",VAR_3));
    FUNC_3(&VAR_1->smp_lock, VAR_7);

    if (!VAR_4->internal_command)
        VAR_4->priority = VAR_3;

    if (VAR_1->req_first==((void*)0)) {
        VAR_1->req_first = VAR_2;
        VAR_2->SCp.ptr = ((void*)0);
    } else {
        VAR_5 = VAR_1->req_first;
        VAR_6 = (struct scsi_cmnd *)VAR_5->SCp.ptr;

        while (VAR_6 && FUNC_2(VAR_6)->priority <= VAR_3) {
            VAR_5 = VAR_6;
            VAR_6 = (struct scsi_cmnd *)VAR_5->SCp.ptr;
        }
        VAR_5->SCp.ptr = (char *)VAR_2;
        VAR_2->SCp.ptr = (char *)VAR_6;
    }
    FUNC_4(&VAR_1->smp_lock, VAR_7);
}
