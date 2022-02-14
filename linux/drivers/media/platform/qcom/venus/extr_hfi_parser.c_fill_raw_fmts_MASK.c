
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_caps {size_t num_fmts; int * fmts; } ;
struct raw_formats {int dummy; } ;


 int FUNC_0 (int *,struct raw_formats const*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct venus_caps *VAR_0, const void *VAR_1,
     unsigned int VAR_2)
{
 const struct raw_formats *VAR_3 = VAR_1;

 FUNC_0(&VAR_0->fmts[VAR_0->num_fmts], VAR_3, VAR_2 * sizeof(*VAR_3));
 VAR_0->num_fmts += VAR_2;
}
