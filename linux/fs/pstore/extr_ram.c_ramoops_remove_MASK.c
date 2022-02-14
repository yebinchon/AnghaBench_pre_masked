
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bufsize; int buf; } ;
struct ramoops_context {int cprz; int mprz; TYPE_1__ pstore; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct ramoops_context VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ramoops_context*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct ramoops_context *VAR_2 = &VAR_0;

 FUNC_2(&VAR_2->pstore);

 FUNC_0(VAR_2->pstore.buf);
 VAR_2->pstore.bufsize = 0;

 FUNC_1(VAR_2->mprz);
 FUNC_1(VAR_2->cprz);
 FUNC_3(VAR_2);

 return 0;
}
