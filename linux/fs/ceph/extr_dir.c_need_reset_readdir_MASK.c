
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_mds_reply_info_parsed {TYPE_1__* dir_entries; int dir_nr; } ;
struct ceph_dir_file_info {scalar_t__ frag; TYPE_2__* last_readdir; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {struct ceph_mds_reply_info_parsed r_reply_info; } ;
struct TYPE_3__ {scalar_t__ offset; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct ceph_dir_file_info *VAR_0, loff_t VAR_1)
{
 struct ceph_mds_reply_info_parsed *VAR_2;
 loff_t VAR_3;
 if (VAR_1 == 0)
  return 1;
 if (FUNC_1(VAR_1)) {


 } else if (VAR_0->frag != FUNC_0(VAR_1)) {
  return 1;
 }
 VAR_2 = VAR_0->last_readdir ? &VAR_0->last_readdir->r_reply_info : ((void*)0);
 if (!VAR_2 || !VAR_2->dir_nr)
  return 1;
 VAR_3 = VAR_2->dir_entries[0].offset;
 return VAR_1 < VAR_3 ||
        FUNC_1(VAR_1) != FUNC_1(VAR_3);
}
