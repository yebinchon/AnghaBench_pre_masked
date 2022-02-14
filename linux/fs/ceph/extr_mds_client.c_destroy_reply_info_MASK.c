
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_reply_info_parsed {int dir_buf_size; scalar_t__ dir_entries; } ;


 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ceph_mds_reply_info_parsed *VAR_0)
{
 if (!VAR_0->dir_entries)
  return;
 FUNC_0((unsigned long)VAR_0->dir_entries, FUNC_1(VAR_0->dir_buf_size));
}
