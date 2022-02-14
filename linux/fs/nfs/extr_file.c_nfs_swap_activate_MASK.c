
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swap_info_struct {int pages; } ;
struct rpc_clnt {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int sector_t ;
struct TYPE_2__ {int host; } ;


 struct rpc_clnt* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_clnt*) ;

__attribute__((used)) static int FUNC_2(struct swap_info_struct *VAR_0, struct file *VAR_1,
      sector_t *VAR_2)
{
 struct rpc_clnt *VAR_3 = FUNC_0(VAR_1->f_mapping->host);

 *VAR_2 = VAR_0->pages;

 return FUNC_1(VAR_3);
}
