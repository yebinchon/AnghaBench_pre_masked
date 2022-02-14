
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int k_offset; } ;
struct TYPE_4__ {int k_offset_v2; TYPE_1__ k_offset_v1; } ;
struct reiserfs_key {TYPE_2__ u; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void FUNC_2(int VAR_1, struct reiserfs_key *VAR_2,
           loff_t VAR_3)
{
 if (VAR_1 == VAR_0)
  VAR_2->u.k_offset_v1.k_offset = FUNC_0(VAR_3);
 else
  FUNC_1(&VAR_2->u.k_offset_v2, VAR_3);
}
