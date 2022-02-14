
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_valid; } ;
struct cifs_tcon {TYPE_1__ crfid; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_open_parms {int reconnect; struct cifs_fid* fid; scalar_t__ create_options; int disposition; int desired_access; struct cifs_tcon* tcon; } ;
struct cifs_fid {int volatile_fid; int persistent_fid; } ;
typedef int __u8 ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ) ;
 int FUNC_1 (unsigned int const,struct cifs_open_parms*,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (struct cifs_sb_info*) ;
 int * FUNC_3 (char const*,struct cifs_sb_info*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(const unsigned int VAR_5, struct cifs_tcon *VAR_6,
   struct cifs_sb_info *VAR_7, const char *VAR_8)
{
 int VAR_9;
 __le16 *VAR_10;
 __u8 VAR_11 = VAR_4;
 struct cifs_open_parms VAR_12;
 struct cifs_fid VAR_13;

 if ((*VAR_8 == 0) && VAR_6->crfid.is_valid)
  return 0;

 VAR_10 = FUNC_3(VAR_8, VAR_7);
 if (!VAR_10)
  return -VAR_1;

 VAR_12.tcon = VAR_6;
 VAR_12.desired_access = VAR_3;
 VAR_12.disposition = VAR_2;
 if (FUNC_2(VAR_7))
  VAR_12.create_options = VAR_0;
 else
  VAR_12.create_options = 0;
 VAR_12.fid = &VAR_13;
 VAR_12.reconnect = 0;

 VAR_9 = FUNC_1(VAR_5, &VAR_12, VAR_10, &VAR_11, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_9) {
  FUNC_4(VAR_10);
  return VAR_9;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_13.persistent_fid, VAR_13.volatile_fid);
 FUNC_4(VAR_10);
 return VAR_9;
}
