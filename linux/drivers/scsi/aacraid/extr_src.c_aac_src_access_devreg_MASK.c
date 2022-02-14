
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct aac_dev {int OIMR; int msi_enabled; } ;
struct TYPE_2__ {int OIMR; int IOAR; int IDR; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct aac_dev*,int ) ;
 int FUNC_1 (struct aac_dev*,int ,int) ;

void FUNC_2(struct aac_dev *VAR_7, int VAR_8)
{
 u_int32_t VAR_9;

 switch (VAR_8) {
 case 130:
  FUNC_1(VAR_7,
      VAR_3.OIMR,
      VAR_7->OIMR = (VAR_7->msi_enabled ?
     VAR_2 :
     VAR_1));
  break;

 case 132:
  FUNC_1(VAR_7,
      VAR_3.OIMR,
      VAR_7->OIMR = VAR_0);
  break;

 case 128:

  VAR_9 = FUNC_0(VAR_7, VAR_3.IDR);
  VAR_9 |= 0x40;
  FUNC_1(VAR_7, VAR_3.IDR, VAR_9);
  FUNC_0(VAR_7, VAR_3.IDR);

  VAR_9 = VAR_4;
  FUNC_1(VAR_7, VAR_3.IOAR, VAR_9);
  VAR_9 = FUNC_0(VAR_7, VAR_3.OIMR);
  FUNC_1(VAR_7,
      VAR_3.OIMR,
      VAR_9 & (~(VAR_6 | VAR_5)));
  break;

 case 131:

  VAR_9 = FUNC_0(VAR_7, VAR_3.IDR);
  VAR_9 &= ~0x40;
  FUNC_1(VAR_7, VAR_3.IDR, VAR_9);
  FUNC_0(VAR_7, VAR_3.IDR);
  break;

 case 134:

  VAR_9 = FUNC_0(VAR_7, VAR_3.IDR);
  VAR_9 |= 0x20;
  FUNC_1(VAR_7, VAR_3.IDR, VAR_9);
  FUNC_0(VAR_7, VAR_3.IDR);
  break;

 case 133:

  VAR_9 = FUNC_0(VAR_7, VAR_3.IDR);
  VAR_9 |= 0x10;
  FUNC_1(VAR_7, VAR_3.IDR, VAR_9);
  FUNC_0(VAR_7, VAR_3.IDR);
  break;

 case 129:

  VAR_9 = FUNC_0(VAR_7, VAR_3.IDR);
  VAR_9 |= 0x80;
  FUNC_1(VAR_7, VAR_3.IDR, VAR_9);
  FUNC_0(VAR_7, VAR_3.IDR);

  VAR_9 = VAR_4;
  FUNC_1(VAR_7, VAR_3.IOAR, VAR_9);
  FUNC_0(VAR_7, VAR_3.IOAR);
  VAR_9 = FUNC_0(VAR_7, VAR_3.OIMR);
  FUNC_1(VAR_7, VAR_3.OIMR,
    VAR_9 & (~(VAR_6)));
  break;

 default:
  break;
 }
}
