
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct _adapter*,size_t,int*) ;

void FUNC_1(struct _adapter *VAR_1)
{
 u16 VAR_2 = 0x1FB;
 u16 VAR_3;
 u16 VAR_4 = 5;
 u8 VAR_5[5];

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_0(VAR_1, VAR_2 + VAR_3,
        &VAR_5[VAR_3]);
 if ((VAR_5[0] == 0x03) && (VAR_5[1] == 0x00) &&
     (VAR_5[2] == 0x00) && (VAR_5[3] == 0x00) &&
     (VAR_5[4] == 0x0C))
  VAR_0 -= VAR_4;
}
