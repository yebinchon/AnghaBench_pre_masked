
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct smb2_file_all_info {int dummy; } ;
struct cifs_tcon {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ,int ,int ,int,int,void**,int *) ;

int FUNC_1(const unsigned int VAR_3, struct cifs_tcon *VAR_4,
 u64 VAR_5, u64 VAR_6, struct smb2_file_all_info *VAR_7)
{
 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_0, VAR_2, 0,
     sizeof(struct smb2_file_all_info) + VAR_1 * 2,
     sizeof(struct smb2_file_all_info), (void **)&VAR_7,
     ((void*)0));
}
