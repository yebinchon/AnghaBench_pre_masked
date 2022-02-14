
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bq27xxx_dm_reg {scalar_t__ subclass_id; int offset; } ;
struct bq27xxx_dm_buf {scalar_t__ class; int block; scalar_t__ data; } ;


 int VAR_0 ;

__attribute__((used)) static inline u16 *FUNC_0(struct bq27xxx_dm_buf *VAR_1,
          struct bq27xxx_dm_reg *VAR_2)
{
 if (VAR_1->class == VAR_2->subclass_id &&
     VAR_1->block == VAR_2->offset / VAR_0)
  return (u16 *) (VAR_1->data + VAR_2->offset % VAR_0);

 return ((void*)0);
}
