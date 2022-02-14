
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscache_state {int dummy; } ;
struct fscache_object {int flags; } ;


 int VAR_0 ;
 struct fscache_state const* VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static const struct fscache_state *FUNC_2(struct fscache_object *VAR_2,
             int VAR_3)
{
 if (!FUNC_1(VAR_0,
         &VAR_2->flags))
  return VAR_1;

 FUNC_0(1, "FS-Cache object redispatched after death");
 return VAR_1;
}
