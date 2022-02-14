
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int bytes; } ;
struct mlxsw_item {int element_size; int offset; TYPE_1__ size; int name; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int,int) ;

__attribute__((used)) static inline u16
FUNC_3(const struct mlxsw_item *VAR_1,
         u16 VAR_2, u8 *VAR_3)
{
 u16 VAR_4, VAR_5;
 u16 VAR_6;
 u8 VAR_7;

 FUNC_1(VAR_2 && !VAR_1->element_size);
 if (VAR_1->offset % sizeof(u32) != 0 ||
     VAR_0 % VAR_1->element_size != 0) {
  FUNC_2("mlxsw: item bug (name=%s,offset=%x,element_size=%x)\n",
         VAR_1->name, VAR_1->offset, VAR_1->element_size);
  FUNC_0();
 }

 VAR_4 = (VAR_1->size.bytes << 3) / VAR_1->element_size - 1;
 VAR_5 = VAR_4 - VAR_2;
 VAR_6 = VAR_5 * VAR_1->element_size >> 3;
 VAR_7 = VAR_2 % (VAR_0 / VAR_1->element_size);
 *VAR_3 = VAR_7 * VAR_1->element_size;

 return VAR_1->offset + VAR_6;
}
