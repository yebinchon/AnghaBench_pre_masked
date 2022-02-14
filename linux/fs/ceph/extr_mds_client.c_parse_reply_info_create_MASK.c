
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_mds_reply_info_parsed {int has_create_ino; int ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void**,void*,int ,int ) ;

__attribute__((used)) static int FUNC_1(void **VAR_3, void *VAR_4,
      struct ceph_mds_reply_info_parsed *VAR_5,
      u64 VAR_6)
{
 if (VAR_6 == (u64)-1 ||
     (VAR_6 & VAR_0)) {

  if (*VAR_3 == VAR_4) {
   VAR_5->has_create_ino = 0;
  } else {
   VAR_5->has_create_ino = 1;
   FUNC_0(VAR_3, VAR_4, VAR_5->ino, VAR_2);
  }
 } else {
  if (*VAR_3 != VAR_4)
   goto bad;
 }


 *VAR_3 = VAR_4;
 return 0;
bad:
 return -VAR_1;
}
