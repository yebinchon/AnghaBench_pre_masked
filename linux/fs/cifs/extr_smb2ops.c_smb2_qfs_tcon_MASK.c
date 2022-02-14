
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cifs_tcon {int dummy; } ;
struct cifs_open_parms {int reconnect; struct cifs_fid* fid; scalar_t__ create_options; int disposition; int desired_access; struct cifs_tcon* tcon; } ;
struct cifs_fid {int volatile_fid; int persistent_fid; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ) ;
 int FUNC_1 (unsigned int const,struct cifs_tcon*,int ,int ) ;
 int FUNC_2 (unsigned int const,struct cifs_open_parms*,int *,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_3(const unsigned int VAR_5, struct cifs_tcon *VAR_6)
{
 int VAR_7;
 __le16 VAR_8 = 0;
 u8 VAR_9 = VAR_4;
 struct cifs_open_parms VAR_10;
 struct cifs_fid VAR_11;

 VAR_10.tcon = VAR_6;
 VAR_10.desired_access = VAR_1;
 VAR_10.disposition = VAR_0;
 VAR_10.create_options = 0;
 VAR_10.fid = &VAR_11;
 VAR_10.reconnect = 0;

 VAR_7 = FUNC_2(VAR_5, &VAR_10, &VAR_8, &VAR_9, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_7)
  return;

 FUNC_0(VAR_5, VAR_6, VAR_11.persistent_fid, VAR_11.volatile_fid,
   VAR_2);
 FUNC_0(VAR_5, VAR_6, VAR_11.persistent_fid, VAR_11.volatile_fid,
   VAR_3);
 FUNC_1(VAR_5, VAR_6, VAR_11.persistent_fid, VAR_11.volatile_fid);
}
