
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int curr_bandwidth; } ;
struct _adapter {TYPE_1__ mppriv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct _adapter*,int) ;
 int FUNC_2 (struct _adapter*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct _adapter*,int ,int,int) ;
 int FUNC_4 (struct _adapter*,int ,int ,int,int) ;

void FUNC_5(struct _adapter *VAR_11)
{

 u8 VAR_12 = 0;
 u8 VAR_13 = VAR_11->mppriv.curr_bandwidth;

 VAR_12 = FUNC_1(VAR_11, 0x10250203);
 if (VAR_13 == 129)
  VAR_12 |= FUNC_0(2);
 else
  VAR_12 &= ~(FUNC_0(2));
 FUNC_2(VAR_11, 0x10250203, VAR_12);

 switch (VAR_13) {

 case 129:
  FUNC_3(VAR_11, VAR_8, VAR_5, 0x0);
  FUNC_3(VAR_11, VAR_9, VAR_5, 0x0);




  FUNC_3(VAR_11, VAR_7, VAR_4, 0x58);
  break;

 case 128:
  FUNC_3(VAR_11, VAR_8, VAR_5, 0x1);
  FUNC_3(VAR_11, VAR_9, VAR_5, 0x1);





  FUNC_3(VAR_11, VAR_6, VAR_3,
      (VAR_0 >> 1));
  FUNC_3(VAR_11, VAR_10, 0xC00,
      VAR_0);
  FUNC_3(VAR_11, VAR_7, VAR_4, 0x18);
  break;
 default:
  break;
 }


 switch (VAR_13) {
 case 129:
  FUNC_4(VAR_11, VAR_2, VAR_1,
      FUNC_0(10) | FUNC_0(11), 0x01);
  break;
 case 128:
  FUNC_4(VAR_11, VAR_2, VAR_1,
      FUNC_0(10) | FUNC_0(11), 0x00);
  break;
 default:
  break;
 }
}
