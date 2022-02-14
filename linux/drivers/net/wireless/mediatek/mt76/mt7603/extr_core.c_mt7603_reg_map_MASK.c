
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt7603_dev {int mt76; TYPE_1__* bus_ops; } ;
struct TYPE_2__ {int (* wr ) (int *,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;

u32 FUNC_1(struct mt7603_dev *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_5 & VAR_1;
 u32 VAR_7 = VAR_5 & VAR_2;

 VAR_4->bus_ops->wr(&VAR_4->mt76, VAR_0, VAR_6);

 return VAR_3 + VAR_7;
}
