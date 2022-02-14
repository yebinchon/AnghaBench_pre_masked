
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct ceph_mds_reply_lease {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,void*,int,int ) ;
 int FUNC_1 (void**,void*,int,int ) ;
 int FUNC_2 (void**,void*,int,int ) ;

__attribute__((used)) static int FUNC_3(void **VAR_2, void *VAR_3,
      struct ceph_mds_reply_lease **VAR_4,
      u64 VAR_5)
{
 if (VAR_5 == (u64)-1) {
  u8 VAR_6, VAR_7;
  u32 VAR_8;
  FUNC_1(VAR_2, VAR_3, VAR_6, VAR_1);
  FUNC_1(VAR_2, VAR_3, VAR_7, VAR_1);


  if (!VAR_6 || VAR_7 != 1)
   goto bad;
  FUNC_0(VAR_2, VAR_3, VAR_8, VAR_1);
  FUNC_2(VAR_2, VAR_3, VAR_8, VAR_1);
  VAR_3 = *VAR_2 + VAR_8;
 }

 FUNC_2(VAR_2, VAR_3, sizeof(**VAR_4), VAR_1);
 *VAR_4 = *VAR_2;
 *VAR_2 += sizeof(**VAR_4);
 if (VAR_5 == (u64)-1)
  *VAR_2 = VAR_3;
 return 0;
bad:
 return -VAR_0;
}
