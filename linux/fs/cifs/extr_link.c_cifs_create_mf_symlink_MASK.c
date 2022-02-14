
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_tcon {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_open_parms {int create_options; unsigned char const* path; int reconnect; struct cifs_fid* fid; int disposition; int desired_access; struct cifs_sb_info* cifs_sb; struct cifs_tcon* tcon; } ;
struct cifs_io_parms {int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; int netfid; } ;
struct cifs_fid {int netfid; } ;
struct TYPE_2__ {int tgid; } ;


 int FUNC_0 (unsigned int,struct cifs_tcon*,int ) ;
 int FUNC_1 (unsigned int,struct cifs_io_parms*,unsigned int*,char*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int,struct cifs_open_parms*,int*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct cifs_sb_info*) ;
 TYPE_1__* VAR_5 ;

int
FUNC_4(unsigned int VAR_6, struct cifs_tcon *VAR_7,
         struct cifs_sb_info *VAR_8, const unsigned char *VAR_9,
         char *VAR_10, unsigned int *VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;
 struct cifs_fid VAR_14;
 struct cifs_open_parms VAR_15;
 struct cifs_io_parms VAR_16;
 int VAR_17 = VAR_1;

 if (FUNC_3(VAR_8))
  VAR_17 |= VAR_2;

 VAR_15.tcon = VAR_7;
 VAR_15.cifs_sb = VAR_8;
 VAR_15.desired_access = VAR_4;
 VAR_15.create_options = VAR_17;
 VAR_15.disposition = VAR_3;
 VAR_15.path = VAR_9;
 VAR_15.fid = &VAR_14;
 VAR_15.reconnect = 0;

 VAR_12 = FUNC_2(VAR_6, &VAR_15, &VAR_13, ((void*)0));
 if (VAR_12)
  return VAR_12;

 VAR_16.netfid = VAR_14.netfid;
 VAR_16.pid = VAR_5->tgid;
 VAR_16.tcon = VAR_7;
 VAR_16.offset = 0;
 VAR_16.length = VAR_0;

 VAR_12 = FUNC_1(VAR_6, &VAR_16, VAR_11, VAR_10);
 FUNC_0(VAR_6, VAR_7, VAR_14.netfid);
 return VAR_12;
}
