
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ flip_status; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0, s32 VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_0;

 if (VAR_2->flip_status)
  VAR_1 = !VAR_1;
 FUNC_0(VAR_0, 0x020, VAR_1 ? 0x0002 : 0x0000 , 0x0002);
}
