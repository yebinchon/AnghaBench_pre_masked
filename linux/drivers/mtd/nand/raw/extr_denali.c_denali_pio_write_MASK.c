
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct denali_controller {int (* host_write ) (struct denali_controller*,int,int const) ;} ;


 int FUNC_0 (struct denali_controller*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct denali_controller*) ;
 int FUNC_2 (struct denali_controller*,int) ;
 int FUNC_3 (struct denali_controller*,int,int const) ;

__attribute__((used)) static int FUNC_4(struct denali_controller *VAR_4, const u32 *VAR_5,
       size_t VAR_6, int VAR_7)
{
 u32 VAR_8 = VAR_0 | FUNC_0(VAR_4) | VAR_7;
 u32 VAR_9;
 int VAR_10;

 FUNC_1(VAR_4);

 for (VAR_10 = 0; VAR_10 < VAR_6 / 4; VAR_10++)
  VAR_4->host_write(VAR_4, VAR_8, VAR_5[VAR_10]);

 VAR_9 = FUNC_2(VAR_4,
      VAR_2 |
      VAR_3);
 if (!(VAR_9 & VAR_2))
  return -VAR_1;

 return 0;
}
