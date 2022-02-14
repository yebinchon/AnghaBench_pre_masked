
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_dat; } ;
struct nilfs_argv {size_t v_nmembs; } ;


 int FUNC_0 (int ,void*,size_t) ;

__attribute__((used)) static int FUNC_1(struct the_nilfs *VAR_0,
          struct nilfs_argv *VAR_1, void *VAR_2)
{
 size_t VAR_3 = VAR_1->v_nmembs;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->ns_dat, VAR_2, VAR_3);

 return (VAR_4 < 0) ? VAR_4 : VAR_3;
}
