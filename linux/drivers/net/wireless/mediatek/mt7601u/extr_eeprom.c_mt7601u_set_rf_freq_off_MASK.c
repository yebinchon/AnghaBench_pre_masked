
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mt7601u_dev {TYPE_1__* ee; } ;
struct TYPE_2__ {int rf_freq_off; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct mt7601u_dev *VAR_2, u8 *VAR_3)
{
 u8 VAR_4;

 VAR_2->ee->rf_freq_off = FUNC_1(VAR_3[VAR_0]);
 VAR_4 = FUNC_1(VAR_3[VAR_1]);

 if (VAR_4 & FUNC_0(7))
  VAR_2->ee->rf_freq_off -= VAR_4 & 0x7f;
 else
  VAR_2->ee->rf_freq_off += VAR_4;
}
