
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdb_dump_entry {int type; int if_info; int* if_mask; } ;
struct ethsw_port_priv {int idx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct fdb_dump_entry *VAR_1,
    struct ethsw_port_priv *VAR_2)
{
 int VAR_3 = VAR_2->idx;
 int VAR_4;

 if (VAR_1->type & VAR_0)
  VAR_4 = VAR_1->if_info == VAR_2->idx;
 else
  VAR_4 = VAR_1->if_mask[VAR_3 / 8] & FUNC_0(VAR_3 % 8);

 return VAR_4;
}
