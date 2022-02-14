
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rio_net {scalar_t__ enum_data; } ;
struct rio_id_table {int max; int lock; scalar_t__ start; int table; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u16 FUNC_3(struct rio_net *VAR_1, u16 VAR_2)
{
 int VAR_3;
 struct rio_id_table *VAR_4 = (struct rio_id_table *)VAR_1->enum_data;

 FUNC_1(&VAR_4->lock);
 VAR_3 = FUNC_0(VAR_4->table, VAR_4->max, VAR_2);
 if (VAR_3 >= VAR_4->max)
  VAR_3 = VAR_0;
 else
  VAR_3 += VAR_4->start;
 FUNC_2(&VAR_4->lock);
 return (u16)VAR_3;
}
