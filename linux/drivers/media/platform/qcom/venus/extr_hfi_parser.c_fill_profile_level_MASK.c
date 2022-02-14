
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_caps {size_t num_pl; int * pl; } ;
struct hfi_profile_level {int dummy; } ;


 int FUNC_0 (int *,struct hfi_profile_level const*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct venus_caps *VAR_0, const void *VAR_1,
          unsigned int VAR_2)
{
 const struct hfi_profile_level *VAR_3 = VAR_1;

 FUNC_0(&VAR_0->pl[VAR_0->num_pl], VAR_3, VAR_2 * sizeof(*VAR_3));
 VAR_0->num_pl += VAR_2;
}
