
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq27xxx_device_info {int opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bq27xxx_device_info*,int ) ;
 int FUNC_1 (struct bq27xxx_device_info*,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct bq27xxx_device_info *VAR_5)
{
 int VAR_6;

 if (VAR_5->opts & VAR_1) {
  VAR_6 = FUNC_1(VAR_5, VAR_2, 1);
  if (VAR_6 >= 0 && (VAR_6 & VAR_0))
   return -VAR_4;
 }

 return FUNC_0(VAR_5, VAR_3);
}
