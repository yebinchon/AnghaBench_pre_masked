
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; } ;
struct bttv {TYPE_1__ c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bttv*,int ,int,int,int) ;
 int FUNC_1 (char*,int ,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_2(struct bttv *VAR_4, unsigned int VAR_5)
{

 int VAR_6 = VAR_5 % 4;
 int VAR_7 = VAR_5 / 4;

 FUNC_1("%d: ivc120_muxsel: Input - %02d | TDA - %02d | In - %02d\n",
  VAR_4->c.nr, VAR_5, VAR_7, VAR_6);


 FUNC_0(VAR_4, VAR_0, 0x00,
        ((VAR_7 == 3) ? (VAR_6 | VAR_6 << 2) : 0x00), 1);
 FUNC_0(VAR_4, VAR_1, 0x00,
        ((VAR_7 == 0) ? (VAR_6 | VAR_6 << 2) : 0x00), 1);
 FUNC_0(VAR_4, VAR_2, 0x00,
        ((VAR_7 == 1) ? (VAR_6 | VAR_6 << 2) : 0x00), 1);
 FUNC_0(VAR_4, VAR_3, 0x00,
        ((VAR_7 == 2) ? (VAR_6 | VAR_6 << 2) : 0x00), 1);


 FUNC_0(VAR_4, VAR_0, 0x02,
        ((VAR_7 == 3) ? 0x03 : 0x00), 1);
 FUNC_0(VAR_4, VAR_1, 0x02,
        ((VAR_7 == 0) ? 0x03 : 0x00), 1);
 FUNC_0(VAR_4, VAR_2, 0x02,
        ((VAR_7 == 1) ? 0x03 : 0x00), 1);
 FUNC_0(VAR_4, VAR_3, 0x02,
        ((VAR_7 == 2) ? 0x03 : 0x00), 1);


}
