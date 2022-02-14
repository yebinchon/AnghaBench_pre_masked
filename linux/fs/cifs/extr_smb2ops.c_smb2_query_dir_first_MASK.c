
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_tcon {int dummy; } ;
struct cifs_search_info {int index_of_last_entry; scalar_t__ entries_in_buffer; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_open_parms {int desired_access; int reconnect; struct cifs_fid* fid; scalar_t__ create_options; int disposition; struct cifs_tcon* tcon; } ;
struct cifs_fid {int volatile_fid; int persistent_fid; } ;
typedef int __u8 ;
typedef int __u16 ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ) ;
 int FUNC_1 (unsigned int const,struct cifs_open_parms*,int *,int *,int *,int *,int *) ;
 int FUNC_2 (unsigned int const,struct cifs_tcon*,int ,int ,int ,struct cifs_search_info*) ;
 scalar_t__ FUNC_3 (struct cifs_sb_info*) ;
 int * FUNC_4 (char const*,struct cifs_sb_info*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(const unsigned int VAR_7, struct cifs_tcon *VAR_8,
       const char *VAR_9, struct cifs_sb_info *VAR_10,
       struct cifs_fid *VAR_11, __u16 VAR_12,
       struct cifs_search_info *VAR_13)
{
 __le16 *VAR_14;
 int VAR_15;
 __u8 VAR_16 = VAR_6;
 struct cifs_open_parms VAR_17;

 VAR_14 = FUNC_4(VAR_9, VAR_10);
 if (!VAR_14)
  return -VAR_1;

 VAR_17.tcon = VAR_8;
 VAR_17.desired_access = VAR_3 | VAR_4;
 VAR_17.disposition = VAR_2;
 if (FUNC_3(VAR_10))
  VAR_17.create_options = VAR_0;
 else
  VAR_17.create_options = 0;
 VAR_17.fid = VAR_11;
 VAR_17.reconnect = 0;

 VAR_15 = FUNC_1(VAR_7, &VAR_17, VAR_14, &VAR_16, ((void*)0), ((void*)0), ((void*)0));
 FUNC_6(VAR_14);
 if (VAR_15) {
  FUNC_5(VAR_5, "open dir failed rc=%d\n", VAR_15);
  return VAR_15;
 }

 VAR_13->entries_in_buffer = 0;
 VAR_13->index_of_last_entry = 2;

 VAR_15 = FUNC_2(VAR_7, VAR_8, VAR_11->persistent_fid,
      VAR_11->volatile_fid, 0, VAR_13);
 if (VAR_15) {
  FUNC_5(VAR_5, "query directory failed rc=%d\n", VAR_15);
  FUNC_0(VAR_7, VAR_8, VAR_11->persistent_fid, VAR_11->volatile_fid);
 }
 return VAR_15;
}
