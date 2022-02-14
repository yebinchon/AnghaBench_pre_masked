
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_y; int vc_x; } ;


 unsigned char FUNC_0 (int ,int) ;

void FUNC_1(struct vc_data *VAR_0, unsigned char *VAR_1)
{

 VAR_1[0] = FUNC_0(VAR_0->vc_x, 0xFFu);
 VAR_1[1] = FUNC_0(VAR_0->vc_y, 0xFFu);
}
