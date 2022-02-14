
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_query_info_rsp {int OutputBufferLength; int OutputBufferOffset; } ;
struct smb2_fs_full_size_info {int dummy; } ;
struct kvec {scalar_t__ iov_base; int member_1; int * member_0; } ;
struct kstatfs {int f_type; } ;
struct cifs_tcon {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct smb2_fs_full_size_info*,struct kstatfs*) ;
 int FUNC_4 (unsigned int const,struct cifs_tcon*,int *,int ,int ,int ,int,struct kvec*,int*,int *) ;
 int FUNC_5 (int,int ,struct kvec*,int) ;

__attribute__((used)) static int
FUNC_6(const unsigned int VAR_5, struct cifs_tcon *VAR_6,
      struct kstatfs *VAR_7)
{
 struct smb2_query_info_rsp *VAR_8;
 struct smb2_fs_full_size_info *VAR_9 = ((void*)0);
 __le16 VAR_10 = 0;
 struct kvec VAR_11 = {((void*)0), 0};
 int VAR_12 = VAR_0;
 int VAR_13;


 VAR_13 = FUNC_4(VAR_5, VAR_6, &VAR_10,
          VAR_1,
          VAR_2,
          VAR_4,
          sizeof(struct smb2_fs_full_size_info),
          &VAR_11, &VAR_12, ((void*)0));
 if (VAR_13)
  goto qfs_exit;

 VAR_8 = (struct smb2_query_info_rsp *)VAR_11.iov_base;
 VAR_7->f_type = VAR_3;
 VAR_9 = (struct smb2_fs_full_size_info *)(
  FUNC_1(VAR_8->OutputBufferOffset) + (char *)VAR_8);
 VAR_13 = FUNC_5(FUNC_1(VAR_8->OutputBufferOffset),
          FUNC_2(VAR_8->OutputBufferLength),
          &VAR_11,
          sizeof(struct smb2_fs_full_size_info));
 if (!VAR_13)
  FUNC_3(VAR_9, VAR_7);

qfs_exit:
 FUNC_0(VAR_12, VAR_11.iov_base);
 return VAR_13;
}
