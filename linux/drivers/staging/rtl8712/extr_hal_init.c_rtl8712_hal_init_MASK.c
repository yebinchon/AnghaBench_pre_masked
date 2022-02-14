
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int u32 ;
struct TYPE_2__ {int* mac_addr; } ;
struct _adapter {TYPE_1__ eeprompriv; int pnetdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct _adapter*,int) ;
 int FUNC_3 (struct _adapter*,int) ;
 int FUNC_4 (struct _adapter*,int,int) ;
 int FUNC_5 (struct _adapter*,int,int) ;
 scalar_t__ FUNC_6 (struct _adapter*) ;

uint FUNC_7(struct _adapter *VAR_4)
{
 u32 VAR_5;
 int VAR_6;


 if (FUNC_6(VAR_4) != VAR_3)
  return VAR_2;

 FUNC_1(VAR_4->pnetdev, "1 RCR=0x%x\n",
      FUNC_2(VAR_4, VAR_1));
 VAR_5 = FUNC_2(VAR_4, VAR_1);
 FUNC_4(VAR_4, VAR_1, (VAR_5 | FUNC_0(26)));


 FUNC_1(VAR_4->pnetdev, "2 RCR=0x%x\n",
      FUNC_2(VAR_4, VAR_1));
 VAR_5 = FUNC_2(VAR_4, VAR_1);
 FUNC_4(VAR_4, VAR_1, (VAR_5 | FUNC_0(25)));
 VAR_5 = FUNC_2(VAR_4, 0x10250040);
 FUNC_4(VAR_4, 0x10250040, (VAR_5 & 0x00FFFFFF));

 FUNC_5(VAR_4, 0x102500B5, FUNC_3(VAR_4, 0x102500B5) |
        FUNC_0(0));
 FUNC_5(VAR_4, 0x102500BD, FUNC_3(VAR_4, 0x102500BD) |
        FUNC_0(7));
 FUNC_5(VAR_4, 0x102500D9, 1);


 FUNC_5(VAR_4, 0x1025FE5B, 0x04);

 FUNC_5(VAR_4, 0x1025fe5C, FUNC_3(VAR_4, 0x1025fe5C)
       | FUNC_0(7));
 for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
  VAR_4->eeprompriv.mac_addr[VAR_6] = FUNC_3(VAR_4,
              VAR_0 + VAR_6);
 return VAR_3;
}
