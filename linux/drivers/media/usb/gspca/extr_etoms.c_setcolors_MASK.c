
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,int*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3, s32 VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;
 __u8 VAR_6[] = { 0x05, 0x02, 0x02, 0x05, 0x0d };
 __u8 VAR_7 = 0x01;


 VAR_6[3] = VAR_4;
 VAR_6[0] = 15 - VAR_4;


 if (VAR_5->sensor == VAR_2) {
  FUNC_0(VAR_3, VAR_0, &VAR_7, 1, 3);
  FUNC_0(VAR_3, VAR_1, VAR_6, sizeof VAR_6, 1);
 }
}
