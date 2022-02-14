
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct treepath {scalar_t__ path_length; } ;
struct super_block {int dummy; } ;
struct cpu_key {int dummy; } ;
struct TYPE_2__ {int b_bdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (struct treepath*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,struct cpu_key const*) ;
 int FUNC_3 (struct treepath*,struct super_block*) ;
 int FUNC_4 (struct treepath*,struct super_block*) ;

__attribute__((used)) static inline int FUNC_5(

    struct treepath *VAR_2,

    const struct cpu_key *VAR_3,
    struct super_block *VAR_4
    )
{

 FUNC_1(!VAR_3 || VAR_2->path_length < VAR_0
        || VAR_2->path_length > VAR_1,
        "PAP-5050: pointer to the key(%p) is NULL or invalid path length(%d)",
        VAR_3, VAR_2->path_length);
 FUNC_1(!FUNC_0(VAR_2)->b_bdev,
        "PAP-5060: device must not be NODEV");

 if (FUNC_2(FUNC_3(VAR_2, VAR_4), VAR_3) == 1)

  return 0;

 if (FUNC_2(FUNC_4(VAR_2, VAR_4), VAR_3) != 1)

  return 0;
 return 1;
}
