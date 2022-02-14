
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct posix_acl {int a_count; TYPE_1__* a_entries; } ;
struct TYPE_2__ {scalar_t__ e_tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct posix_acl*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct posix_acl *VAR_3)
{


 int VAR_4, VAR_5;


 if (!VAR_3 || VAR_3->a_count <= 4)
  return;

 VAR_4 = 1;
 while (VAR_3->a_entries[VAR_4].e_tag == VAR_2)
  VAR_4++;
 FUNC_1(VAR_3, 1, VAR_4-1);

 FUNC_0(VAR_3->a_entries[VAR_4].e_tag != VAR_1);
 VAR_5 = ++VAR_4;
 while (VAR_3->a_entries[VAR_5].e_tag == VAR_0)
  VAR_5++;
 FUNC_1(VAR_3, VAR_4, VAR_5-1);
 return;
}
