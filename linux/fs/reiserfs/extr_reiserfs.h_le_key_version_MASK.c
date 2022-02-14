
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int k_offset_v2; } ;
struct reiserfs_key {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(const struct reiserfs_key *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(&(VAR_5->u.k_offset_v2));
 if (VAR_6 != VAR_2 && VAR_6 != VAR_4
     && VAR_6 != VAR_3)
  return VAR_0;

 return VAR_1;

}
