
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lis3lv02d {int odr_mask; int* odrs; int (* write ) (struct lis3lv02d*,int ,int) ;int (* read ) (struct lis3lv02d*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lis3lv02d*,int ,int*) ;
 int FUNC_3 (struct lis3lv02d*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct lis3lv02d *VAR_2, int VAR_3)
{
 u8 VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (!VAR_3)
  return -VAR_1;

 VAR_2->read(VAR_2, VAR_0, &VAR_4);
 VAR_4 &= ~VAR_2->odr_mask;
 VAR_6 = 1 << FUNC_1(VAR_2->odr_mask);
 VAR_7 = FUNC_0(VAR_2->odr_mask) - 1;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  if (VAR_2->odrs[VAR_5] == VAR_3) {
   VAR_2->write(VAR_2, VAR_0,
     VAR_4 | (VAR_5 << VAR_7));
   return 0;
  }
 return -VAR_1;
}
