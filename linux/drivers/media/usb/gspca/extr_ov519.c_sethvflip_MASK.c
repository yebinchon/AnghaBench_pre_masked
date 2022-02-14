
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ streaming; } ;
struct sd {TYPE_1__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sd*,int ,int,int) ;
 int FUNC_1 (struct sd*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_4, s32 VAR_5, s32 VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_4;

 if (VAR_7->gspca_dev.streaming)
  FUNC_1(VAR_7, VAR_0, 0x0f);
 FUNC_0(VAR_7, VAR_3,
  VAR_1 * VAR_5 | VAR_2 * VAR_6,
  VAR_1 | VAR_2);
 if (VAR_7->gspca_dev.streaming)
  FUNC_1(VAR_7, VAR_0, 0x00);
}
