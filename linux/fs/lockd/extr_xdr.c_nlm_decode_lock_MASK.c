
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {void* fl_end; void* fl_start; int fl_type; int fl_flags; } ;
struct nlm_lock {void* svid; int oh; int fh; int len; int caller; struct file_lock fl; } ;
typedef scalar_t__ s32 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct file_lock*) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (scalar_t__) ;
 int * FUNC_5 (int *,int *,int *,int ) ;

__attribute__((used)) static __be32 *
FUNC_6(__be32 *VAR_4, struct nlm_lock *VAR_5)
{
 struct file_lock *VAR_6 = &VAR_5->fl;
 s32 VAR_7, VAR_8, VAR_9;

 if (!(VAR_4 = FUNC_5(VAR_4, &VAR_5->caller,
         &VAR_5->len,
         VAR_2))
  || !(VAR_4 = FUNC_1(VAR_4, &VAR_5->fh))
  || !(VAR_4 = FUNC_2(VAR_4, &VAR_5->oh)))
  return ((void*)0);
 VAR_5->svid = FUNC_3(*VAR_4++);

 FUNC_0(VAR_6);
 VAR_6->fl_flags = VAR_0;
 VAR_6->fl_type = VAR_1;
 VAR_7 = FUNC_3(*VAR_4++);
 VAR_8 = FUNC_3(*VAR_4++);
 VAR_9 = VAR_7 + VAR_8 - 1;

 VAR_6->fl_start = FUNC_4(VAR_7);

 if (VAR_8 == 0 || VAR_9 < 0)
  VAR_6->fl_end = VAR_3;
 else
  VAR_6->fl_end = FUNC_4(VAR_9);
 return VAR_4;
}
