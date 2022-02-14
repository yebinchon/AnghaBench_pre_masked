
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifsInodeInfo {unsigned int oplock; unsigned int epoch; } ;
typedef int __u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct cifsInodeInfo*,int ,unsigned int,int*) ;

__attribute__((used)) static void
FUNC_1(struct cifsInodeInfo *VAR_3, __u32 VAR_4,
        unsigned int VAR_5, bool *VAR_6)
{
 unsigned int VAR_7 = VAR_3->oplock;

 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_6) {
  *VAR_6 = 0;
  if (VAR_7 == VAR_0) {
   if (VAR_3->oplock == VAR_0 &&
       (VAR_5 - VAR_3->epoch > 0))
    *VAR_6 = 1;
   else if (VAR_3->oplock == VAR_2 &&
     (VAR_5 - VAR_3->epoch > 1))
    *VAR_6 = 1;
   else if (VAR_3->oplock == VAR_1 &&
     (VAR_5 - VAR_3->epoch > 1))
    *VAR_6 = 1;
   else if (VAR_3->oplock == 0 &&
     (VAR_5 - VAR_3->epoch > 0))
    *VAR_6 = 1;
  } else if (VAR_7 == VAR_2) {
   if (VAR_3->oplock == VAR_2 &&
       (VAR_5 - VAR_3->epoch > 0))
    *VAR_6 = 1;
   else if (VAR_3->oplock == VAR_1 &&
     (VAR_5 - VAR_3->epoch > 1))
    *VAR_6 = 1;
  }
  VAR_3->epoch = VAR_5;
 }
}
