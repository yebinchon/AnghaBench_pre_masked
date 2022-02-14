
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct smb2_file_eof_info {int EndOfFile; } ;
struct cifs_tcon {int dummy; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ,int ,int ,int ,int ,int,void**,unsigned int*) ;

int
FUNC_1(const unsigned int VAR_2, struct cifs_tcon *VAR_3, u64 VAR_4,
      u64 VAR_5, u32 VAR_6, __le64 *VAR_7)
{
 struct smb2_file_eof_info VAR_8;
 void *VAR_9;
 unsigned int VAR_10;

 VAR_8.EndOfFile = *VAR_7;

 VAR_9 = &VAR_8;
 VAR_10 = sizeof(struct smb2_file_eof_info);

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
   VAR_6, VAR_0, VAR_1,
   0, 1, &VAR_9, &VAR_10);
}
