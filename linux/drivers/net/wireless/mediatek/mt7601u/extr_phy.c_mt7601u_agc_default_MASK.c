
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mt7601u_dev {TYPE_1__* ee; } ;
struct TYPE_2__ {int lna_gain; } ;



__attribute__((used)) static u8 FUNC_0(struct mt7601u_dev *VAR_0)
{
 return (VAR_0->ee->lna_gain - 8) * 2 + 0x34;
}
