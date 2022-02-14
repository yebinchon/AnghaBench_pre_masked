
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int expo_change_state; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_6, s32 VAR_7, s32 VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_6;
 int VAR_10 = VAR_7 << 6;
 u8 VAR_11, VAR_12, VAR_13;






 VAR_9->expo_change_state = VAR_0;

 if (VAR_8 == VAR_4)
  VAR_10 = VAR_10 - VAR_10 % 106667;
 if (VAR_8 == VAR_5)
  VAR_10 = VAR_10 - VAR_10 % 88889;

 VAR_11 = (VAR_10 >> 16);
 VAR_12 = (VAR_10 >> 8);
 VAR_13 = VAR_10;


 FUNC_0(VAR_6, VAR_1, VAR_13);

 FUNC_0(VAR_6, VAR_2, VAR_12);

 FUNC_0(VAR_6, VAR_3, VAR_11);
}
