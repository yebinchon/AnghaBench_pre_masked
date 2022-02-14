
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sis_video_info {int SiS_Pr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct sis_video_info *VAR_1, u16 VAR_2, u16 VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    for(VAR_8 = 0; VAR_8 < 10; VAR_8++) {
       VAR_6 = 0;
       for(VAR_7 = 0; VAR_7 < 3; VAR_7++) {
          VAR_5 = VAR_3;
    FUNC_2(VAR_0, 0x11, (VAR_2 & 0x00ff));
          VAR_4 = (VAR_2 >> 8) | (VAR_5 & 0x00ff);
   FUNC_4(VAR_0, 0x10, 0xe0, VAR_4);
          FUNC_0(&VAR_1->SiS_Pr, 0x1500);
          VAR_5 >>= 8;
          VAR_5 &= 0x7f;
    VAR_4 = FUNC_1(VAR_0, 0x03);
          VAR_4 ^= 0x0e;
          VAR_4 &= VAR_5;
          if(VAR_4 == VAR_5) VAR_6++;

   FUNC_2(VAR_0, 0x11, 0x00);
   FUNC_3(VAR_0, 0x10, 0xe0);
   FUNC_0(&VAR_1->SiS_Pr, 0x1000);

       }
       if((VAR_6 == 0) || (VAR_6 >= 2)) break;
    }
    return VAR_6;
}
