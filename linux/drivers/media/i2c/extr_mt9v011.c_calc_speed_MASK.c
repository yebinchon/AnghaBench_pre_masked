
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct mt9v011 {int xtal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,unsigned int) ;
 unsigned int FUNC_1 (struct v4l2_subdev*,int ) ;
 struct mt9v011* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static u16 FUNC_3(struct v4l2_subdev *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct mt9v011 *VAR_7 = FUNC_2(VAR_4);
 unsigned VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned VAR_12, VAR_13;
 u64 VAR_14, VAR_15;


 if (!VAR_5 || !VAR_6)
  return 0;

 VAR_8 = FUNC_1(VAR_4, VAR_0);
 VAR_9 = FUNC_1(VAR_4, VAR_1);
 VAR_10 = FUNC_1(VAR_4, VAR_2);
 VAR_11 = FUNC_1(VAR_4, VAR_3);

 VAR_12 = VAR_9 + 113 + VAR_10;
 VAR_13 = VAR_8 + VAR_11 + 1;

 VAR_14 = VAR_7->xtal * ((u64)VAR_5);

 VAR_14 += VAR_6 / 2;
 FUNC_0(VAR_14, VAR_6);

 VAR_15 = VAR_14;
 FUNC_0(VAR_15, VAR_12 * VAR_13);


 if (VAR_15 < 2)
  VAR_15 = 0;
 else
  VAR_15 -= 2;


 if (VAR_15 > 15)
  return 15;

 return (u16)VAR_15;
}
