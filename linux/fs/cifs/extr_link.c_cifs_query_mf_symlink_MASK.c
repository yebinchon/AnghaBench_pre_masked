
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_open_parms {unsigned char const* path; int reconnect; struct cifs_fid* fid; int disposition; int create_options; int desired_access; struct cifs_sb_info* cifs_sb; struct cifs_tcon* tcon; } ;
struct cifs_io_parms {int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; int netfid; } ;
struct cifs_fid {int netfid; } ;
struct TYPE_5__ {int tgid; } ;
struct TYPE_4__ {scalar_t__ EndOfFile; } ;
typedef TYPE_1__ FILE_ALL_INFO ;


 int FUNC_0 (unsigned int,struct cifs_tcon*,int ) ;
 int FUNC_1 (unsigned int,struct cifs_io_parms*,unsigned int*,char**,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned int,struct cifs_open_parms*,int*,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__* VAR_6 ;

int
FUNC_4(unsigned int VAR_7, struct cifs_tcon *VAR_8,
        struct cifs_sb_info *VAR_9, const unsigned char *VAR_10,
        char *VAR_11, unsigned int *VAR_12)
{
 int VAR_13;
 int VAR_14 = 0;
 struct cifs_fid VAR_15;
 struct cifs_open_parms VAR_16;
 struct cifs_io_parms VAR_17;
 int VAR_18 = VAR_1;
 FILE_ALL_INFO VAR_19;

 VAR_16.tcon = VAR_8;
 VAR_16.cifs_sb = VAR_9;
 VAR_16.desired_access = VAR_5;
 VAR_16.create_options = VAR_2;
 VAR_16.disposition = VAR_4;
 VAR_16.path = VAR_10;
 VAR_16.fid = &VAR_15;
 VAR_16.reconnect = 0;

 VAR_13 = FUNC_2(VAR_7, &VAR_16, &VAR_14, &VAR_19);
 if (VAR_13)
  return VAR_13;

 if (VAR_19.EndOfFile != FUNC_3(VAR_0)) {
  VAR_13 = -VAR_3;

  goto out;
 }

 VAR_17.netfid = VAR_15.netfid;
 VAR_17.pid = VAR_6->tgid;
 VAR_17.tcon = VAR_8;
 VAR_17.offset = 0;
 VAR_17.length = VAR_0;

 VAR_13 = FUNC_1(VAR_7, &VAR_17, VAR_12, &VAR_11, &VAR_18);
out:
 FUNC_0(VAR_7, VAR_8, VAR_15.netfid);
 return VAR_13;
}
