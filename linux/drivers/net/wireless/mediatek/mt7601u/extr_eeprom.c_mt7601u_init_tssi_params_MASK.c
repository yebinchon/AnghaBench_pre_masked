
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tssi_data {int slope; int tx0_delta_offset; int* offset; } ;
struct mt7601u_dev {TYPE_1__* ee; } ;
struct TYPE_2__ {int tssi_enabled; struct tssi_data tssi_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct mt7601u_dev *VAR_3, u8 *VAR_4)
{
 struct tssi_data *VAR_5 = &VAR_3->ee->tssi_data;

 if (!VAR_3->ee->tssi_enabled)
  return;

 VAR_5->slope = VAR_4[VAR_2];
 VAR_5->tx0_delta_offset = VAR_4[VAR_0] * 1024;
 VAR_5->offset[0] = VAR_4[VAR_1];
 VAR_5->offset[1] = VAR_4[VAR_1 + 1];
 VAR_5->offset[2] = VAR_4[VAR_1 + 2];
}
