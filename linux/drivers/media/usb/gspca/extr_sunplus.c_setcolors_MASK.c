
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sd {scalar_t__ bridge; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 u16 VAR_4;

 VAR_4 = VAR_3->bridge == VAR_0 ? 0x20f6 : 0x21ae;
 FUNC_0(VAR_1, 0x00, VAR_4, VAR_2);
}
