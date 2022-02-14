
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid ;
typedef int u32 ;
struct tb_switch {int uid; int uuid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,int ) ;
 int FUNC_1 (struct tb_switch*,int*) ;

__attribute__((used)) static int FUNC_2(struct tb_switch *VAR_2)
{
 u32 VAR_3[4];
 int VAR_4;

 if (VAR_2->uuid)
  return 0;





 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4) {






  VAR_3[0] = VAR_2->uid & 0xffffffff;
  VAR_3[1] = (VAR_2->uid >> 32) & 0xffffffff;
  VAR_3[2] = 0xffffffff;
  VAR_3[3] = 0xffffffff;
 }

 VAR_2->uuid = FUNC_0(VAR_3, sizeof(VAR_3), VAR_1);
 if (!VAR_2->uuid)
  return -VAR_0;
 return 0;
}
