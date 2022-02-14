
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minix_sb_info {int s_dirsize; } ;



__attribute__((used)) static inline void *FUNC_0(void *VAR_0, struct minix_sb_info *VAR_1)
{
 return (void*)((char*)VAR_0 + VAR_1->s_dirsize);
}
