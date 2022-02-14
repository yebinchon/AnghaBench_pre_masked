
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef size_t s32 ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,size_t) ;
 int FUNC_1 (struct gspca_dev*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2, s32 VAR_3)
{
 FUNC_0(VAR_2, VAR_0, "Gamma: %d\n", VAR_3);
 FUNC_1(VAR_2, 0x90,
  VAR_1[VAR_3], sizeof VAR_1[0]);
}
