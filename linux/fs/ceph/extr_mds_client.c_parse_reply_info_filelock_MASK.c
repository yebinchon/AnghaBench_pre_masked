
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_mds_reply_info_parsed {void* filelock_reply; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(void **VAR_1, void *VAR_2,
         struct ceph_mds_reply_info_parsed *VAR_3,
         u64 VAR_4)
{
 if (*VAR_1 + sizeof(*VAR_3->filelock_reply) > VAR_2)
  goto bad;

 VAR_3->filelock_reply = *VAR_1;


 *VAR_1 = VAR_2;
 return 0;
bad:
 return -VAR_0;
}
