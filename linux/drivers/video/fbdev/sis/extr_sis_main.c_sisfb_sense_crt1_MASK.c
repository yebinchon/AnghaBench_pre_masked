
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int SiS_MyCR63; } ;
struct sis_video_info {scalar_t__ sisvga_engine; scalar_t__ chip; TYPE_1__ SiS_Pr; int vbflags2; int vbflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,int ,int ,int *,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (int ,int,int) ;
 scalar_t__ FUNC_6 (struct sis_video_info*) ;
 int FUNC_7 (struct sis_video_info*) ;

__attribute__((used)) static void FUNC_8(struct sis_video_info *VAR_5)
{
    bool VAR_6 = 0;
    u8 VAR_7, VAR_8;



    u16 VAR_9 = 0xffff;
    int VAR_10;

    VAR_7 = FUNC_0(VAR_1, 0x1F);
    FUNC_5(VAR_1, 0x1F, 0x04);
    FUNC_3(VAR_1, 0x1F, 0x3F);
    if(VAR_7 & 0xc0) VAR_6 = 1;
    VAR_8 = FUNC_0(VAR_0, 0x17);
    VAR_8 &= 0x80;
    if(!VAR_8) {
       FUNC_5(VAR_0, 0x17, 0x80);
       VAR_6 = 1;
       FUNC_2(VAR_1, 0x00, 0x01);
       FUNC_2(VAR_1, 0x00, 0x03);
    }

    if(VAR_6) {
       for(VAR_10=0; VAR_10 < 10; VAR_10++) FUNC_7(VAR_5);
    }
    if(VAR_9 == 0xffff) {
       VAR_10 = 3;
       do {
   VAR_9 = FUNC_1(&VAR_5->SiS_Pr, VAR_5->vbflags,
  VAR_5->sisvga_engine, 0, 0, ((void*)0), VAR_5->vbflags2);
       } while(((VAR_9 == 0) || (VAR_9 == 0xffff)) && VAR_10--);

       if((VAR_9 == 0) || (VAR_9 == 0xffff)) {
          if(FUNC_6(VAR_5)) VAR_9 = 1;
       }
    }

    if((VAR_9) && (VAR_9 != 0xffff)) {
       FUNC_5(VAR_0, 0x32, 0x20);
    }







    FUNC_4(VAR_0, 0x17, 0x7F, VAR_8);

    FUNC_2(VAR_1, 0x1F, VAR_7);
}
