
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_vol {scalar_t__ posix_paths; scalar_t__ no_psx_acl; scalar_t__ no_linux_ext; } ;
struct TYPE_2__ {scalar_t__ Capability; } ;
struct cifs_tcon {int unix_ext; TYPE_1__ fsUnixInfo; } ;
struct cifs_sb_info {int mnt_cifs_flags; } ;
typedef int __u64 ;


 int FUNC_0 (unsigned int,struct cifs_tcon*) ;
 scalar_t__ FUNC_1 (unsigned int,struct cifs_tcon*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(unsigned int VAR_14, struct cifs_tcon *VAR_15,
     struct cifs_sb_info *VAR_16, struct smb_vol *VAR_17)
{
 __u64 VAR_18 = FUNC_3(VAR_15->fsUnixInfo.Capability);

 if (VAR_17 && VAR_17->no_linux_ext) {
  VAR_15->fsUnixInfo.Capability = 0;
  VAR_15->unix_ext = 0;
  FUNC_2(VAR_12, "Linux protocol extensions disabled\n");
  return;
 } else if (VAR_17)
  VAR_15->unix_ext = 1;

 if (VAR_15->unix_ext == 0) {
  FUNC_2(VAR_12, "Unix extensions disabled so not set on reconnect\n");
  return;
 }

 if (!FUNC_0(VAR_14, VAR_15)) {
  __u64 VAR_19 = FUNC_3(VAR_15->fsUnixInfo.Capability);
  FUNC_2(VAR_12, "unix caps which server supports %lld\n", VAR_19);


  if (VAR_17 == ((void*)0)) {


   if ((VAR_18 & VAR_7) == 0)
    VAR_19 &= ~VAR_7;
   if ((VAR_18 & VAR_8) == 0) {
    if (VAR_19 & VAR_8)
     FUNC_2(VAR_13, "POSIXPATH support change\n");
    VAR_19 &= ~VAR_8;
   } else if ((VAR_19 & VAR_8) == 0) {
    FUNC_2(VAR_13, "possible reconnect error\n");
    FUNC_2(VAR_13, "server disabled POSIX path support\n");
   }
  }

  if (VAR_19 & VAR_10)
   FUNC_2(VAR_13, "per-share encryption not supported yet\n");

  VAR_19 &= VAR_2;
  if (VAR_17 && VAR_17->no_psx_acl)
   VAR_19 &= ~VAR_7;
  else if (VAR_7 & VAR_19) {
   FUNC_2(VAR_12, "negotiated posix acl support\n");
   if (VAR_16)
    VAR_16->mnt_cifs_flags |=
     VAR_0;
  }

  if (VAR_17 && VAR_17->posix_paths == 0)
   VAR_19 &= ~VAR_8;
  else if (VAR_19 & VAR_8) {
   FUNC_2(VAR_12, "negotiate posix pathnames\n");
   if (VAR_16)
    VAR_16->mnt_cifs_flags |=
     VAR_1;
  }

  FUNC_2(VAR_12, "Negotiate caps 0x%x\n", (int)VAR_19);
  if (FUNC_1(VAR_14, VAR_15, VAR_19)) {
   if (VAR_17 == ((void*)0)) {
    FUNC_2(VAR_12, "resetting capabilities failed\n");
   } else
    FUNC_2(VAR_13, "Negotiating Unix capabilities with the server failed. Consider mounting with the Unix Extensions disabled if problems are found by specifying the nounix mount option.\n");

  }
 }
}
