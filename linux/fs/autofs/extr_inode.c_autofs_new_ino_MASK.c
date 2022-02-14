
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct autofs_sb_info {int dummy; } ;
struct autofs_info {struct autofs_sb_info* sbi; int last_used; int expiring; int active; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct autofs_info* FUNC_1 (int,int ) ;

struct autofs_info *FUNC_2(struct autofs_sb_info *VAR_2)
{
 struct autofs_info *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  FUNC_0(&VAR_3->active);
  FUNC_0(&VAR_3->expiring);
  VAR_3->last_used = VAR_1;
  VAR_3->sbi = VAR_2;
 }
 return VAR_3;
}
