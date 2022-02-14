
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct bq27xxx_dm_buf {scalar_t__* data; } ;


 int VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct bq27xxx_dm_buf *VAR_1)
{
 u16 VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2 += VAR_1->data[VAR_3];
 VAR_2 &= 0xff;

 return 0xff - VAR_2;
}
