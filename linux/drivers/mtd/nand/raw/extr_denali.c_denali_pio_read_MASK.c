
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct denali_controller {int caps; int (* host_read ) (struct denali_controller*,int) ;} ;


 int FUNC_0 (struct denali_controller*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct denali_controller*) ;
 int FUNC_2 (struct denali_controller*,int) ;
 int FUNC_3 (int*,int,size_t) ;
 int FUNC_4 (struct denali_controller*,int) ;

__attribute__((used)) static int FUNC_5(struct denali_controller *VAR_8, u32 *VAR_9,
      size_t VAR_10, int VAR_11)
{
 u32 VAR_12 = VAR_1 | FUNC_0(VAR_8) | VAR_11;
 u32 VAR_13, VAR_14;
 int VAR_15;

 if (VAR_8->caps & VAR_0)
  VAR_14 = VAR_5;
 else
  VAR_14 = VAR_4;

 FUNC_1(VAR_8);

 for (VAR_15 = 0; VAR_15 < VAR_10 / 4; VAR_15++)
  VAR_9[VAR_15] = VAR_8->host_read(VAR_8, VAR_12);

 VAR_13 = FUNC_2(VAR_8, VAR_7);
 if (!(VAR_13 & VAR_7))
  return -VAR_3;

 if (VAR_13 & VAR_6)
  FUNC_3(VAR_9, 0xff, VAR_10);

 return VAR_13 & VAR_14 ? -VAR_2 : 0;
}
