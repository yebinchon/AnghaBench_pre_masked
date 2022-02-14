
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_video_info {int SiS_Pr; } ;


 unsigned short FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct sis_video_info *VAR_0)
{
    unsigned short VAR_1;
    int VAR_2 = 48;

    VAR_1 = FUNC_0(&VAR_0->SiS_Pr);
    do {
 if(VAR_1 != FUNC_0(&VAR_0->SiS_Pr)) break;
    } while(VAR_2--);
    return (VAR_2 != -1);
}
