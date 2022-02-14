
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tssi_data {int slope; int* offset; } ;
struct mt7601u_dev {TYPE_1__* ee; } ;
typedef int s16 ;
struct TYPE_2__ {struct tssi_data tssi_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mt7601u_dev*,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct mt7601u_dev *VAR_2, s16 VAR_3, s16 VAR_4)
{
 struct tssi_data *VAR_5 = &VAR_2->ee->tssi_data;
 int VAR_6;

 VAR_6 = -((VAR_3 * VAR_5->slope + VAR_5->offset[1]) / 4096) + 10;

 FUNC_1(VAR_2, VAR_0, VAR_1,
   FUNC_0(VAR_6) & VAR_1);
}
