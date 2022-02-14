
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ chip_revision; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;
 __u16 VAR_4;

 if (VAR_3->chip_revision == VAR_0)
  VAR_4 = 0x8610;
 else
  VAR_4 = 0x8611;

 FUNC_0(VAR_1, VAR_4 + 0, VAR_2);
 FUNC_0(VAR_1, VAR_4 + 1, VAR_2);
 FUNC_0(VAR_1, VAR_4 + 2, VAR_2);
 FUNC_0(VAR_1, VAR_4 + 3, VAR_2);
}
