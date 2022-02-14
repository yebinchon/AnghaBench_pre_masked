
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reiserfs_key {int dummy; } ;
struct cpu_key {int key_length; } ;


 int FUNC_0 (struct reiserfs_key const*,struct cpu_key const*) ;
 scalar_t__ FUNC_1 (struct cpu_key const*) ;
 scalar_t__ FUNC_2 (struct cpu_key const*) ;
 scalar_t__ FUNC_3 (int ,struct reiserfs_key const*) ;
 scalar_t__ FUNC_4 (int ,struct reiserfs_key const*) ;
 int FUNC_5 (struct reiserfs_key const*) ;

__attribute__((used)) static inline int FUNC_6(const struct reiserfs_key *VAR_0,
       const struct cpu_key *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;
 if (FUNC_3(FUNC_5(VAR_0), VAR_0) <
     FUNC_1(VAR_1))
  return -1;
 if (FUNC_3(FUNC_5(VAR_0), VAR_0) >
     FUNC_1(VAR_1))
  return 1;

 if (VAR_1->key_length == 3)
  return 0;


 if (FUNC_4(FUNC_5(VAR_0), VAR_0) <
     FUNC_2(VAR_1))
  return -1;

 if (FUNC_4(FUNC_5(VAR_0), VAR_0) >
     FUNC_2(VAR_1))
  return 1;

 return 0;
}
