
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_caps {size_t num_caps; int * caps; } ;
struct hfi_capability {int dummy; } ;


 int FUNC_0 (int *,struct hfi_capability const*,unsigned int) ;

__attribute__((used)) static void
FUNC_1(struct venus_caps *VAR_0, const void *VAR_1, unsigned int VAR_2)
{
 const struct hfi_capability *VAR_3 = VAR_1;

 FUNC_0(&VAR_0->caps[VAR_0->num_caps], VAR_3, VAR_2 * sizeof(*VAR_3));
 VAR_0->num_caps += VAR_2;
}
