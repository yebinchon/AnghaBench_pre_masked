
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ceph_mds_reply_info_parsed {TYPE_1__* head; } ;
struct TYPE_2__ {int op; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void**,void*,struct ceph_mds_reply_info_parsed*,int ) ;
 int FUNC_2 (void**,void*,struct ceph_mds_reply_info_parsed*,int ) ;
 int FUNC_3 (void**,void*,struct ceph_mds_reply_info_parsed*,int ) ;

__attribute__((used)) static int FUNC_4(void **VAR_5, void *VAR_6,
      struct ceph_mds_reply_info_parsed *VAR_7,
      u64 VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_7->head->op);

 if (VAR_9 == VAR_1)
  return FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
 else if (VAR_9 == VAR_3 || VAR_9 == VAR_2)
  return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);
 else if (VAR_9 == VAR_0)
  return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);
 else
  return -VAR_4;
}
