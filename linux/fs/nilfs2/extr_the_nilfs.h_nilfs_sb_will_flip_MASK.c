
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sbwcount; } ;



__attribute__((used)) static inline int FUNC_0(struct the_nilfs *VAR_0)
{
 int VAR_1 = VAR_0->ns_sbwcount & 0x0FL;

 return (VAR_1 != 0x08 && VAR_1 != 0x0F);
}
