
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csio_rnode {int flowid; } ;
struct csio_lnode {int dummy; } ;


 struct csio_rnode* FUNC_0 (struct csio_lnode*) ;
 struct csio_rnode* FUNC_1 (struct csio_lnode*,int ) ;

__attribute__((used)) static struct csio_rnode *
FUNC_2(struct csio_lnode *VAR_0, uint32_t VAR_1)
{
 struct csio_rnode *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2) {
  VAR_2 = FUNC_0(VAR_0);
  if (!VAR_2)
   return ((void*)0);

  VAR_2->flowid = VAR_1;
 }

 return VAR_2;
}
