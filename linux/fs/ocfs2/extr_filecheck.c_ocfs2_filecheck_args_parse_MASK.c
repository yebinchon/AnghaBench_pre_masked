
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_filecheck_args {unsigned int fa_type; unsigned int fa_len; unsigned long fa_ino; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,size_t,unsigned long*) ;
 scalar_t__ FUNC_1 (char const*,unsigned int*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, const char *VAR_3, size_t VAR_4,
      struct ocfs2_filecheck_args *VAR_5)
{
 unsigned long VAR_6 = 0;
 unsigned int VAR_7;


 if ((VAR_4 < 1) || (VAR_4 >= VAR_0))
  return 1;

 if (FUNC_1(VAR_2, &VAR_7))
  return 1;
 if (FUNC_0(VAR_3, VAR_4, &VAR_6))
  return 1;

 if (VAR_6 <= 0)
  return 1;

 VAR_5->fa_type = VAR_7;
 if (VAR_7 == VAR_1)
  VAR_5->fa_len = (unsigned int)VAR_6;
 else
  VAR_5->fa_ino = VAR_6;

 return 0;
}
