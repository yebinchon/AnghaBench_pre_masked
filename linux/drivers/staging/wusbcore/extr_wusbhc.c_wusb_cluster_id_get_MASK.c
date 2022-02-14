
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

u8 FUNC_4(void)
{
 u8 VAR_3;
 FUNC_2(&VAR_2);
 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3 >= VAR_0) {
  VAR_3 = 0;
  goto out;
 }
 FUNC_1(VAR_3, VAR_1);
 VAR_3 = (u8) 0xff - VAR_3;
out:
 FUNC_3(&VAR_2);
 return VAR_3;

}
