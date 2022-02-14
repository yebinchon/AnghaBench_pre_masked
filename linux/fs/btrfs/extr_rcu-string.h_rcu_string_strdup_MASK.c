
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_string {int str; } ;
typedef int gfp_t ;


 struct rcu_string* FUNC_0 (int,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*,size_t) ;

__attribute__((used)) static inline struct rcu_string *FUNC_3(const char *VAR_0, gfp_t VAR_1)
{
 size_t VAR_2 = FUNC_1(VAR_0) + 1;
 struct rcu_string *VAR_3 = FUNC_0(sizeof(struct rcu_string) +
      (VAR_2 * sizeof(char)), VAR_1);
 if (!VAR_3)
  return VAR_3;
 FUNC_2(VAR_3->str, VAR_0, VAR_2);
 return VAR_3;
}
