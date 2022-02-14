
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tb_switch {TYPE_1__* tb; } ;
struct TYPE_2__ {int ctl; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int*,int ,int const,int,int,int ) ;
 int FUNC_2 (struct tb_switch*) ;

__attribute__((used)) static int FUNC_3(struct tb_switch *VAR_3)
{
 static const int VAR_4[] = { 3, 5, 7 };
 int VAR_5;





 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++) {
  u32 VAR_6;
  int VAR_7;

  VAR_7 = FUNC_1(VAR_3->tb->ctl, &VAR_6, FUNC_2(VAR_3), VAR_4[VAR_5],
        2, 1, VAR_0);
  if (!VAR_7 && (VAR_6 & 0xffffff) == VAR_2)
   return VAR_4[VAR_5];
 }

 return -VAR_1;
}
