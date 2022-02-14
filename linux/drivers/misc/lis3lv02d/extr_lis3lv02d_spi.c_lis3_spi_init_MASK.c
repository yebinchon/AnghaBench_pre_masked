
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lis3lv02d {int (* read ) (struct lis3lv02d*,int ,int*) ;int (* write ) (struct lis3lv02d*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lis3lv02d*,int ,int*) ;
 int FUNC_1 (struct lis3lv02d*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lis3lv02d *VAR_5)
{
 u8 VAR_6;
 int VAR_7;


 VAR_7 = VAR_5->read(VAR_5, VAR_4, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 |= VAR_0 | VAR_1 | VAR_2 | VAR_3;
 return VAR_5->write(VAR_5, VAR_4, VAR_6);
}
