
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int * l_name; } ;
typedef int __u64 ;
typedef int __be64 ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static __u64 FUNC_2(struct ocfs2_lock_res *VAR_1)
{
 __be64 VAR_2;

 FUNC_1(&VAR_2, &VAR_1->l_name[VAR_0],
        sizeof(__be64));

 return FUNC_0(VAR_2);
}
