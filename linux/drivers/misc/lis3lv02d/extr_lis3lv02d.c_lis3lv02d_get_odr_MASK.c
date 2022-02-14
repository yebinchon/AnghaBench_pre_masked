
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lis3lv02d {int odr_mask; int* odrs; int (* read ) (struct lis3lv02d*,int ,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lis3lv02d*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct lis3lv02d *VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 VAR_1->read(VAR_1, VAR_0, &VAR_2);
 VAR_2 &= VAR_1->odr_mask;
 VAR_3 = FUNC_0(VAR_1->odr_mask) - 1;
 return VAR_1->odrs[(VAR_2 >> VAR_3)];
}
