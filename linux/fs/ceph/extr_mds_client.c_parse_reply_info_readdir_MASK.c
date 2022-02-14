
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ceph_mds_reply_info_parsed {int dir_end; int dir_complete; int hash_order; int offset_hash; scalar_t__ dir_entries; unsigned long dir_buf_size; scalar_t__ dir_nr; int dir_dir; } ;
struct ceph_mds_reply_dir_entry {int name_len; scalar_t__ offset; int inode; int lease; void* name; } ;
typedef int num ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (void**) ;
 scalar_t__ FUNC_3 (void**) ;
 int FUNC_4 (void**,void*,int,int ) ;
 int FUNC_5 (void**,void*,int,int ) ;
 int FUNC_6 (char*,int,void*) ;
 int FUNC_7 (void**,void*,int *,int ) ;
 int FUNC_8 (void**,void*,int *,int ) ;
 int FUNC_9 (void**,void*,int *,int ) ;
 int FUNC_10 (char*,...) ;

__attribute__((used)) static int FUNC_11(void **VAR_6, void *VAR_7,
    struct ceph_mds_reply_info_parsed *VAR_8,
    u64 VAR_9)
{
 u32 VAR_10, VAR_11 = 0;
 int VAR_12;

 VAR_12 = FUNC_7(VAR_6, VAR_7, &VAR_8->dir_dir, VAR_9);
 if (VAR_12 < 0)
  goto out_bad;

 FUNC_5(VAR_6, VAR_7, sizeof(VAR_10) + 2, VAR_5);
 VAR_10 = FUNC_3(VAR_6);
 {
  u16 VAR_13 = FUNC_2(VAR_6);
  VAR_8->dir_end = !!(VAR_13 & VAR_1);
  VAR_8->dir_complete = !!(VAR_13 & VAR_0);
  VAR_8->hash_order = !!(VAR_13 & VAR_2);
  VAR_8->offset_hash = !!(VAR_13 & VAR_3);
 }
 if (VAR_10 == 0)
  goto done;

 FUNC_0(!VAR_8->dir_entries);
 if ((unsigned long)(VAR_8->dir_entries + VAR_10) >
     (unsigned long)VAR_8->dir_entries + VAR_8->dir_buf_size) {
  FUNC_10("dir contents are larger than expected\n");
  FUNC_1(1);
  goto bad;
 }

 VAR_8->dir_nr = VAR_10;
 while (VAR_10) {
  struct ceph_mds_reply_dir_entry *VAR_14 = VAR_8->dir_entries + VAR_11;

  FUNC_4(VAR_6, VAR_7, VAR_14->name_len, VAR_5);
  FUNC_5(VAR_6, VAR_7, VAR_14->name_len, VAR_5);
  VAR_14->name = *VAR_6;
  *VAR_6 += VAR_14->name_len;
  FUNC_6("parsed dir dname '%.*s'\n", VAR_14->name_len, VAR_14->name);


  VAR_12 = FUNC_9(VAR_6, VAR_7, &VAR_14->lease, VAR_9);
  if (VAR_12)
   goto out_bad;

  VAR_12 = FUNC_8(VAR_6, VAR_7, &VAR_14->inode, VAR_9);
  if (VAR_12 < 0)
   goto out_bad;

  VAR_14->offset = 0;
  VAR_11++;
  VAR_10--;
 }

done:

 *VAR_6 = VAR_7;
 return 0;

bad:
 VAR_12 = -VAR_4;
out_bad:
 FUNC_10("problem parsing dir contents %d\n", VAR_12);
 return VAR_12;
}
