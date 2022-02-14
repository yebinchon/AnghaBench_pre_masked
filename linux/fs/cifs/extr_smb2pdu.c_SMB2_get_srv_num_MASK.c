
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct smb2_file_internal_info {int dummy; } ;
struct cifs_tcon {int dummy; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ,int ,int ,int,int,void**,int *) ;

int
FUNC_1(const unsigned int VAR_2, struct cifs_tcon *VAR_3,
   u64 VAR_4, u64 VAR_5, __le64 *VAR_6)
{
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_0, VAR_1, 0,
     sizeof(struct smb2_file_internal_info),
     sizeof(struct smb2_file_internal_info),
     (void **)&VAR_6, ((void*)0));
}
