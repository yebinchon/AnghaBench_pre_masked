
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct xenpf_symdata {scalar_t__ namelen; scalar_t__ symnum; int name; } ;
struct TYPE_3__ {struct xenpf_symdata symdata; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
struct xensyms {scalar_t__ namelen; TYPE_2__ op; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct xensyms *VAR_2)
{
 int VAR_3;
 struct xenpf_symdata *VAR_4 = &VAR_2->op.u.symdata;
 uint64_t VAR_5;

 FUNC_3(VAR_2->name, 0, VAR_2->namelen);
 VAR_4->namelen = VAR_2->namelen;

 VAR_5 = VAR_4->symnum;

 VAR_3 = FUNC_0(&VAR_2->op);
 if (VAR_3 < 0)
  return VAR_3;





 if (FUNC_5(VAR_4->namelen > VAR_2->namelen)) {
  FUNC_1(VAR_2->name);

  VAR_2->namelen = VAR_4->namelen;
  VAR_2->name = FUNC_2(VAR_2->namelen, VAR_1);
  if (!VAR_2->name)
   return -VAR_0;

  FUNC_4(VAR_4->name, VAR_2->name);
  VAR_4->symnum--;

  VAR_3 = FUNC_0(&VAR_2->op);
  if (VAR_3 < 0)
   return VAR_3;
 }

 if (VAR_4->symnum == VAR_5)

  return 1;

 return 0;
}
