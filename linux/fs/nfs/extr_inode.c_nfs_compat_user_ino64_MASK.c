
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int ino ;
typedef int fileid ;
typedef int compat_ulong_t ;


 scalar_t__ VAR_0 ;

u64 FUNC_0(u64 VAR_1)
{



 unsigned long VAR_2;


 if (VAR_0)
  return VAR_1;
 VAR_2 = VAR_1;
 if (sizeof(VAR_2) < sizeof(VAR_1))
  VAR_2 ^= VAR_1 >> (sizeof(VAR_1)-sizeof(VAR_2)) * 8;
 return VAR_2;
}
