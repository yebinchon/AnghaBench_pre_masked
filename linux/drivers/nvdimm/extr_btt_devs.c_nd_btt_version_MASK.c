
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_namespace_common {scalar_t__ claim_class; } ;
struct nd_btt {int version_major; int version_minor; scalar_t__ initial_offset; } ;
struct btt_sb {int version_minor; int version_major; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nd_btt*,struct btt_sb*) ;
 scalar_t__ FUNC_2 (struct nd_namespace_common*,scalar_t__,struct btt_sb*,int,int ) ;

int FUNC_3(struct nd_btt *VAR_4, struct nd_namespace_common *VAR_5,
  struct btt_sb *VAR_6)
{
 if (VAR_5->claim_class == VAR_2) {

  VAR_4->initial_offset = 0;
  VAR_4->version_major = 2;
  VAR_4->version_minor = 0;
  if (FUNC_2(VAR_5, 0, VAR_6, sizeof(*VAR_6), 0))
   return -VAR_1;
  if (!FUNC_1(VAR_4, VAR_6))
   return -VAR_0;
  if ((FUNC_0(VAR_6->version_major) != 2) ||
    (FUNC_0(VAR_6->version_minor) != 0))
   return -VAR_0;
 } else {




  VAR_4->initial_offset = VAR_3;
  VAR_4->version_major = 1;
  VAR_4->version_minor = 1;
  if (FUNC_2(VAR_5, VAR_3, VAR_6, sizeof(*VAR_6), 0))
   return -VAR_1;
  if (!FUNC_1(VAR_4, VAR_6))
   return -VAR_0;
  if ((FUNC_0(VAR_6->version_major) != 1) ||
    (FUNC_0(VAR_6->version_minor) != 1))
   return -VAR_0;
 }
 return 0;
}
