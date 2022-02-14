
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rio_net {scalar_t__ enum_data; } ;
struct rio_id_table {int max; int lock; scalar_t__ start; int table; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u16 FUNC_4(struct rio_net *VAR_1)
{
 int VAR_2;
 struct rio_id_table *VAR_3 = (struct rio_id_table *)VAR_1->enum_data;

 FUNC_2(&VAR_3->lock);
 VAR_2 = FUNC_0(VAR_3->table, VAR_3->max);

 if (VAR_2 < VAR_3->max) {
  FUNC_1(VAR_2, VAR_3->table);
  VAR_2 += VAR_3->start;
 } else
  VAR_2 = VAR_0;

 FUNC_3(&VAR_3->lock);
 return (u16)VAR_2;
}
