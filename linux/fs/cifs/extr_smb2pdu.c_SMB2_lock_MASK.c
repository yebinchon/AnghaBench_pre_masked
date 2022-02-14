
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_lock_element {int Flags; void* Length; void* Offset; } ;
struct cifs_tcon {int dummy; } ;
typedef int __u64 ;
typedef scalar_t__ __u32 ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (scalar_t__ const) ;
 void* FUNC_1 (int const) ;
 int FUNC_2 (unsigned int const,struct cifs_tcon*,int const,int const,scalar_t__ const,int,struct smb2_lock_element*) ;

int
FUNC_3(const unsigned int VAR_2, struct cifs_tcon *VAR_3,
   const __u64 VAR_4, const __u64 VAR_5, const __u32 VAR_6,
   const __u64 VAR_7, const __u64 VAR_8, const __u32 VAR_9,
   const bool VAR_10)
{
 struct smb2_lock_element VAR_11;

 VAR_11.Offset = FUNC_1(VAR_8);
 VAR_11.Length = FUNC_1(VAR_7);
 VAR_11.Flags = FUNC_0(VAR_9);
 if (!VAR_10 && VAR_9 != VAR_1)
  VAR_11.Flags |= FUNC_0(VAR_0);

 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, 1, &VAR_11);
}
