
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_desc {int dummy; } ;



__attribute__((used)) static inline int
FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{



 VAR_0 /= sizeof(struct cmd_desc);
 VAR_1 /= sizeof(struct cmd_desc);
 return (VAR_2 + VAR_1 - VAR_0 - 1) % VAR_2;
}
