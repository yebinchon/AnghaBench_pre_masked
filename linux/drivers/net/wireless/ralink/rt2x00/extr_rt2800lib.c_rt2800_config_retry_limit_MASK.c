
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00lib_conf {TYPE_1__* conf; } ;
struct rt2x00_dev {int dummy; } ;
struct TYPE_2__ {int long_frame_max_tx_count; int short_frame_max_tx_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rt2x00_dev *VAR_3,
          struct rt2x00lib_conf *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 FUNC_2(&VAR_5, VAR_2,
      VAR_4->conf->short_frame_max_tx_count);
 FUNC_2(&VAR_5, VAR_1,
      VAR_4->conf->long_frame_max_tx_count);
 FUNC_1(VAR_3, VAR_0, VAR_5);
}
