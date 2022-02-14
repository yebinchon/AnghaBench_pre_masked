
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ceph_mds_reply_info_in {int max_files; int max_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,void*,int,int ) ;
 int FUNC_1 (void**,void*,int ,int ) ;
 int FUNC_2 (void**,void*,int,int ) ;
 int FUNC_3 (void**,void*,int,int ) ;

__attribute__((used)) static int FUNC_4(void **VAR_2, void *VAR_3,
      struct ceph_mds_reply_info_in *VAR_4)
{
 u8 VAR_5, VAR_6;
 u32 VAR_7;

 FUNC_2(VAR_2, VAR_3, VAR_5, VAR_1);
 FUNC_2(VAR_2, VAR_3, VAR_6, VAR_1);


 if (!VAR_5 || VAR_6 != 1)
  goto bad;
 FUNC_0(VAR_2, VAR_3, VAR_7, VAR_1);
 FUNC_3(VAR_2, VAR_3, VAR_7, VAR_1);
 VAR_3 = *VAR_2 + VAR_7;
 FUNC_1(VAR_2, VAR_3, VAR_4->max_bytes, VAR_1);
 FUNC_1(VAR_2, VAR_3, VAR_4->max_files, VAR_1);
 *VAR_2 = VAR_3;
 return 0;
bad:
 return -VAR_0;
}
