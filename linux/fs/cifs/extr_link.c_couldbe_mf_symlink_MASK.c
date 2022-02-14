
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_fattr {scalar_t__ cf_eof; int cf_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

bool
FUNC_1(const struct cifs_fattr *VAR_1)
{
 if (!FUNC_0(VAR_1->cf_mode))

  return 0;

 if (VAR_1->cf_eof != VAR_0)

  return 0;

 return 1;
}
