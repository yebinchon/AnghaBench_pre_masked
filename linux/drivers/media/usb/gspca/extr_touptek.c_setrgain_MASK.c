
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int,int,...) ;
 int FUNC_2 (struct gspca_dev*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_3,
  u16 VAR_4, u16 VAR_5)
{
 u16 VAR_6;

 VAR_6 = VAR_5 +
  ((u32)VAR_5) * VAR_4 / VAR_1;
 if (VAR_6 > VAR_1) {
  FUNC_1(VAR_3, VAR_0, "Truncating gain 0x%04X w/ value 0x%04X\n\n",
     VAR_1, VAR_6);
  VAR_6 = VAR_1;
 }
 VAR_6 = FUNC_0(VAR_6);
 FUNC_1(VAR_3, VAR_0, "gain R (0x%04X): 0x%04X w / source 0x%04X\n\n",
    VAR_2, VAR_6, VAR_4);

 FUNC_2(VAR_3, VAR_6, VAR_2);
}
