
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {unsigned char cmd_len; unsigned int* cmnd; TYPE_1__* device; } ;
struct atp_unit {TYPE_2__** id; int * in_snd; int * quend; int * quhd; int * last_cmd; int * working; } ;
struct Scsi_Host {int hostdata; } ;
struct TYPE_4__ {scalar_t__ last_len; struct scsi_cmnd* curr_req; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct atp_unit*,unsigned char,int) ;
 unsigned int FUNC_1 (struct atp_unit*,unsigned char,int) ;
 int FUNC_2 (char*,...) ;
 unsigned char FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd * VAR_1)
{
 unsigned char VAR_2, VAR_3, VAR_4;
 struct scsi_cmnd *VAR_5;
 struct atp_unit *VAR_6;
 struct Scsi_Host *VAR_7;
 VAR_7 = VAR_1->device->host;

 VAR_6 = (struct atp_unit *)&VAR_7->hostdata;
 VAR_4 = FUNC_3(VAR_1);
 FUNC_2(" atp870u: abort Channel = %x \n", VAR_4);
 FUNC_2("working=%x last_cmd=%x ", VAR_6->working[VAR_4], VAR_6->last_cmd[VAR_4]);
 FUNC_2(" quhdu=%x quendu=%x ", VAR_6->quhd[VAR_4], VAR_6->quend[VAR_4]);
 for (VAR_2 = 0; VAR_2 < 0x18; VAR_2++) {
  FUNC_2(" r%2x=%2x", VAR_2, FUNC_0(VAR_6, VAR_4, VAR_2));
 }
 FUNC_2(" r1c=%2x", FUNC_0(VAR_6, VAR_4, 0x1c));
 FUNC_2(" r1f=%2x in_snd=%2x ", FUNC_0(VAR_6, VAR_4, 0x1f), VAR_6->in_snd[VAR_4]);
 FUNC_2(" d00=%2x", FUNC_1(VAR_6, VAR_4, 0x00));
 FUNC_2(" d02=%2x", FUNC_1(VAR_6, VAR_4, 0x02));
 for(VAR_2=0;VAR_2<16;VAR_2++) {
    if (VAR_6->id[VAR_4][VAR_2].curr_req != ((void*)0)) {
  VAR_5 = VAR_6->id[VAR_4][VAR_2].curr_req;
  FUNC_2("\n que cdb= ");
  for (VAR_3=0; VAR_3 < VAR_5->cmd_len; VAR_3++) {
      FUNC_2(" %2x ",VAR_5->cmnd[VAR_3]);
  }
  FUNC_2(" last_lenu= %x ",(unsigned int)VAR_6->id[VAR_4][VAR_2].last_len);
    }
 }
 return VAR_0;
}
