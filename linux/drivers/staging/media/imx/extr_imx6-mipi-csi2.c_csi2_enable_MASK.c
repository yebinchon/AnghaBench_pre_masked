
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csi2_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct csi2_dev *VAR_3, bool VAR_4)
{
 if (VAR_4) {
  FUNC_0(0x1, VAR_3->base + VAR_1);
  FUNC_0(0x1, VAR_3->base + VAR_0);
  FUNC_0(0x1, VAR_3->base + VAR_2);
 } else {
  FUNC_0(0x0, VAR_3->base + VAR_1);
  FUNC_0(0x0, VAR_3->base + VAR_0);
  FUNC_0(0x0, VAR_3->base + VAR_2);
 }
}
