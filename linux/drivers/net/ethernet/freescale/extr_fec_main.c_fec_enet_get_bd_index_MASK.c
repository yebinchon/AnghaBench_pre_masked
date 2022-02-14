
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufdesc_prop {int dsize_log2; scalar_t__ base; } ;
struct bufdesc {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct bufdesc *VAR_0,
     struct bufdesc_prop *VAR_1)
{
 return ((const char *)VAR_0 - (const char *)VAR_1->base) >> VAR_1->dsize_log2;
}
