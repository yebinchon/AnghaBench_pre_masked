
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int quality; scalar_t__ sensor; int * jpeg_hdr; } ;
struct gspca_dev {int dummy; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int) ;
 int * VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_5, u8 VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_5;


 FUNC_0(VAR_5, VAR_1, "q %d -> %d\n", VAR_7->quality, VAR_6);
 VAR_7->quality = VAR_6;
 if (VAR_6 > 16)
  VAR_6 = 16;
 if (VAR_7->sensor == VAR_3)
  FUNC_1(VAR_7->jpeg_hdr, VAR_4[VAR_6]);
 else
  FUNC_2(&VAR_7->jpeg_hdr[VAR_2 - 1],
   VAR_0[VAR_6], sizeof VAR_0[0]);
}
