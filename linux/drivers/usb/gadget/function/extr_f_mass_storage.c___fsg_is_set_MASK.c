
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_common {scalar_t__ fsg; } ;


 int FUNC_0 (struct fsg_common*,char*,char const*,unsigned int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(struct fsg_common *VAR_0,
          const char *VAR_1, unsigned VAR_2)
{
 if (VAR_0->fsg)
  return 1;
 FUNC_0(VAR_0, "common->fsg is NULL in %s at %u\n", VAR_1, VAR_2);
 FUNC_1(1);
 return 0;
}
