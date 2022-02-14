
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tw5864_input {scalar_t__ std; int nr; scalar_t__ frame_interval; struct tw5864_dev* root; } ;
struct tw5864_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct tw5864_input *VAR_1)
{
 struct tw5864_dev *VAR_2 = VAR_1->root;
 u32 VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5 = VAR_1->std == VAR_0 ? 30 : 25;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4 += VAR_1->frame_interval)
  VAR_3 |= 0x00000001 << VAR_4;

 FUNC_2(FUNC_1(VAR_1->nr, 0),
    VAR_3 >> 16);
 FUNC_2(FUNC_0(VAR_1->nr, 0),
    VAR_3 & 0xffff);
}
