
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_file_all_info {int dummy; } ;
struct cifs_tcon {int dummy; } ;
struct cifs_fid {int volatile_fid; int persistent_fid; } ;
typedef int FILE_ALL_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,struct smb2_file_all_info*) ;
 int FUNC_1 (struct smb2_file_all_info*) ;
 struct smb2_file_all_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct smb2_file_all_info*) ;

__attribute__((used)) static int
FUNC_4(const unsigned int VAR_3, struct cifs_tcon *VAR_4,
       struct cifs_fid *VAR_5, FILE_ALL_INFO *VAR_6)
{
 int VAR_7;
 struct smb2_file_all_info *VAR_8;

 VAR_8 = FUNC_2(sizeof(struct smb2_file_all_info) + VAR_2 * 2,
       VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5->persistent_fid, VAR_5->volatile_fid,
        VAR_8);
 if (!VAR_7)
  FUNC_3(VAR_6, VAR_8);
 FUNC_1(VAR_8);
 return VAR_7;
}
