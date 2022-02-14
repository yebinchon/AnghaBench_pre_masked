
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cifs_tcon {int nohandlecache; int crfid; } ;
struct cifs_open_parms {int reconnect; struct cifs_fid* fid; scalar_t__ create_options; int disposition; int desired_access; struct cifs_tcon* tcon; } ;
struct cifs_fid {int volatile_fid; int persistent_fid; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ) ;
 int FUNC_1 (unsigned int const,struct cifs_tcon*,int ,int ) ;
 int FUNC_2 (unsigned int const,struct cifs_open_parms*,int *,int *,int *,int *,int *) ;
 int FUNC_3 (unsigned int const,struct cifs_tcon*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int const,struct cifs_tcon*,struct cifs_fid*) ;

__attribute__((used)) static void
FUNC_6(const unsigned int VAR_7, struct cifs_tcon *VAR_8)
{
 int VAR_9;
 __le16 VAR_10 = 0;
 u8 VAR_11 = VAR_6;
 struct cifs_open_parms VAR_12;
 struct cifs_fid VAR_13;
 bool VAR_14 = VAR_8->nohandlecache;

 VAR_12.tcon = VAR_8;
 VAR_12.desired_access = VAR_1;
 VAR_12.disposition = VAR_0;
 VAR_12.create_options = 0;
 VAR_12.fid = &VAR_13;
 VAR_12.reconnect = 0;

 if (VAR_14)
  VAR_9 = FUNC_2(VAR_7, &VAR_12, &VAR_10, &VAR_11, ((void*)0), ((void*)0),
          ((void*)0));
 else
  VAR_9 = FUNC_5(VAR_7, VAR_8, &VAR_13);

 if (VAR_9)
  return;

 FUNC_3(VAR_7, VAR_8);

 FUNC_0(VAR_7, VAR_8, VAR_13.persistent_fid, VAR_13.volatile_fid,
   VAR_2);
 FUNC_0(VAR_7, VAR_8, VAR_13.persistent_fid, VAR_13.volatile_fid,
   VAR_3);
 FUNC_0(VAR_7, VAR_8, VAR_13.persistent_fid, VAR_13.volatile_fid,
   VAR_5);
 FUNC_0(VAR_7, VAR_8, VAR_13.persistent_fid, VAR_13.volatile_fid,
   VAR_4);
 if (VAR_14)
  FUNC_1(VAR_7, VAR_8, VAR_13.persistent_fid, VAR_13.volatile_fid);
 else
  FUNC_4(&VAR_8->crfid);
}
