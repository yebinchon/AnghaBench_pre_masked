
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int fmt; int * jpeg_hdr; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct gspca_dev*,int,int *,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_2, s32 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;

 FUNC_0(VAR_4->jpeg_hdr, VAR_3);
 FUNC_2(VAR_2, 0x1061, 0x01);
 FUNC_2(VAR_2, 0x10e0, VAR_4->fmt | 0x20);
 FUNC_1(VAR_2, 0x1100, &VAR_4->jpeg_hdr[VAR_0], 64);
 FUNC_1(VAR_2, 0x1140, &VAR_4->jpeg_hdr[VAR_1], 64);
 FUNC_2(VAR_2, 0x1061, 0x03);
 FUNC_2(VAR_2, 0x10e0, VAR_4->fmt);
 VAR_4->fmt ^= 0x0c;
 FUNC_2(VAR_2, 0x10e0, VAR_4->fmt);
}
