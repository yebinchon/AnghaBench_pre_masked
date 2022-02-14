
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smb_hdr {int* Protocol; char Command; int Flags; char WordCount; int Flags2; int Mid; int Uid; int Tid; void* PidHigh; void* Pid; int smb_buf_length; } ;
struct cifs_tcon {int Flags; TYPE_1__* ses; scalar_t__ nocase; int tid; } ;
typedef int __u16 ;
struct TYPE_6__ {int tgid; } ;
struct TYPE_5__ {scalar_t__ sign; } ;
struct TYPE_4__ {int capabilities; TYPE_2__* server; int Suid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 TYPE_3__* VAR_9 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int ,int) ;

void
FUNC_4(struct smb_hdr *VAR_10, char VAR_11 ,
  const struct cifs_tcon *VAR_12, int VAR_13
                                                               )
{
 char *VAR_14 = (char *) VAR_10;

 FUNC_3(VAR_14, 0, 256);

 VAR_10->smb_buf_length = FUNC_0(
     (2 * VAR_13) + sizeof(struct smb_hdr) -
     4 +
     2 ) ;

 VAR_10->Protocol[0] = 0xFF;
 VAR_10->Protocol[1] = 'S';
 VAR_10->Protocol[2] = 'M';
 VAR_10->Protocol[3] = 'B';
 VAR_10->Command = VAR_11;
 VAR_10->Flags = 0x00;
 VAR_10->Flags2 = VAR_4;
 VAR_10->Pid = FUNC_1((__u16)VAR_9->tgid);
 VAR_10->PidHigh = FUNC_1((__u16)(VAR_9->tgid >> 16));
 if (VAR_12) {
  VAR_10->Tid = VAR_12->tid;
  if (VAR_12->ses) {
   if (VAR_12->ses->capabilities & VAR_1)
    VAR_10->Flags2 |= VAR_6;
   if (VAR_12->ses->capabilities & VAR_0)
    VAR_10->Flags2 |= VAR_3;


   VAR_10->Uid = VAR_12->ses->Suid;
   VAR_10->Mid = FUNC_2(VAR_12->ses->server);
  }
  if (VAR_12->Flags & VAR_8)
   VAR_10->Flags2 |= VAR_2;
  if (VAR_12->nocase)
   VAR_10->Flags |= VAR_7;
  if ((VAR_12->ses) && (VAR_12->ses->server))
   if (VAR_12->ses->server->sign)
    VAR_10->Flags2 |= VAR_5;
 }


 VAR_10->WordCount = (char) VAR_13;
 return;
}
