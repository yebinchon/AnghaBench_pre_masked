
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct posix_acl {TYPE_1__* a_entries; } ;
typedef int gfp_t ;
struct TYPE_2__ {int e_perm; int e_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct posix_acl* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct posix_acl* FUNC_1 (int,int ) ;

struct posix_acl *
FUNC_2(umode_t VAR_7, gfp_t VAR_8)
{
 struct posix_acl *VAR_9 = FUNC_1(3, VAR_8);
 if (!VAR_9)
  return FUNC_0(-VAR_3);

 VAR_9->a_entries[0].e_tag = VAR_2;
 VAR_9->a_entries[0].e_perm = (VAR_7 & VAR_6) >> 6;

 VAR_9->a_entries[1].e_tag = VAR_0;
 VAR_9->a_entries[1].e_perm = (VAR_7 & VAR_4) >> 3;

 VAR_9->a_entries[2].e_tag = VAR_1;
 VAR_9->a_entries[2].e_perm = (VAR_7 & VAR_5);
 return VAR_9;
}
