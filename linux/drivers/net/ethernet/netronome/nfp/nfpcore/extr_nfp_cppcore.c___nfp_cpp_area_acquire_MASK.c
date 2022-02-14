
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_cpp_area {int refcount; TYPE_2__* cpp; } ;
struct TYPE_4__ {int waitq; TYPE_1__* op; } ;
struct TYPE_3__ {int area_acquire; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfp_cpp_area*,int*) ;
 int FUNC_3 (struct nfp_cpp_area*) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct nfp_cpp_area *VAR_0)
{
 int VAR_1, VAR_2;

 if (FUNC_1(&VAR_0->refcount) > 1)
  return 0;

 if (!VAR_0->cpp->op->area_acquire)
  return 0;

 VAR_1 = FUNC_5(VAR_0->cpp->waitq,
           FUNC_2(VAR_0, &VAR_2));
 if (!VAR_1)
  VAR_1 = VAR_2;
 if (VAR_1) {
  FUNC_4(VAR_0->cpp, "Warning: area wait failed: %d\n", VAR_1);
  FUNC_0(&VAR_0->refcount);
  return VAR_1;
 }

 FUNC_3(VAR_0);

 return 0;
}
