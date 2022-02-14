
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ctl_table; struct ctl_dir* parent; } ;
struct ctl_dir {TYPE_2__ header; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {char* procname; } ;


 scalar_t__ FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(const struct ctl_dir *VAR_0, char **VAR_1,
         size_t *VAR_2)
{
 ssize_t VAR_3 = 0, VAR_4;

 if (VAR_0->header.parent) {
  VAR_3 = FUNC_1(VAR_0->header.parent, VAR_1, VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
 }

 VAR_4 = FUNC_0(*VAR_1, VAR_0->header.ctl_table[0].procname, *VAR_2);
 if (VAR_4 < 0)
  return VAR_4;
 *VAR_1 += VAR_4;
 *VAR_2 -= VAR_4;
 VAR_4 += VAR_3;


 if (!VAR_4)
  return VAR_4;

 VAR_3 = FUNC_0(*VAR_1, "/", *VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 *VAR_1 += VAR_3;
 *VAR_2 -= VAR_3;

 return VAR_4 + VAR_3;
}
