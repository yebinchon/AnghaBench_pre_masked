
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rio_net {scalar_t__ enum_data; } ;
struct rio_id_table {int lock; int table; scalar_t__ start; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rio_net *VAR_0, u16 VAR_1)
{
 int VAR_2;
 struct rio_id_table *VAR_3 = (struct rio_id_table *)VAR_0->enum_data;

 VAR_1 -= VAR_3->start;
 FUNC_0(&VAR_3->lock);
 VAR_2 = FUNC_2(VAR_1, VAR_3->table);
 FUNC_1(&VAR_3->lock);
 return VAR_2;
}
