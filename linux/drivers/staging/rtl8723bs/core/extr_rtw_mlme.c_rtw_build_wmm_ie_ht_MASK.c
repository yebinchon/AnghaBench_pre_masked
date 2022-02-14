
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
struct TYPE_3__ {int qos_option; } ;
struct TYPE_4__ {TYPE_1__ qospriv; } ;
struct adapter {TYPE_2__ mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int ,unsigned char*,int*) ;

void FUNC_1(struct adapter *VAR_2, u8 *VAR_3, uint *VAR_4)
{
 unsigned char VAR_5[] = {0x00, 0x50, 0xf2, 0x02, 0x00, 0x01, 0x00};
 int VAR_6;
 u8 *VAR_7;

 if (VAR_2->mlmepriv.qospriv.qos_option == 0) {
  VAR_6 = *VAR_4;
  VAR_7 = FUNC_0(VAR_3+VAR_6, VAR_0,
       VAR_1, VAR_5, VAR_4);

  VAR_2->mlmepriv.qospriv.qos_option = 1;
 }
}
