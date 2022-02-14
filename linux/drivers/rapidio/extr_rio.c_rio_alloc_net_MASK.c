
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_net {int mports; int switches; int devices; int node; } ;
struct rio_mport {struct rio_net* net; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct rio_net* FUNC_1 (int,int ) ;

struct rio_net *FUNC_2(struct rio_mport *VAR_1)
{
 struct rio_net *VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);

 if (VAR_2) {
  FUNC_0(&VAR_2->node);
  FUNC_0(&VAR_2->devices);
  FUNC_0(&VAR_2->switches);
  FUNC_0(&VAR_2->mports);
  VAR_1->net = VAR_2;
 }
 return VAR_2;
}
