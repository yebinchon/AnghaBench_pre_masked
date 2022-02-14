
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct matrox_device {int data_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct matrox_device*,int ) ;
 int FUNC_1 (struct matrox_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_2, u8 VAR_3)
{
 u8 VAR_4;
 struct matrox_device *VAR_5 = VAR_2;

 if (VAR_3)
  VAR_3 = 0;
 else
  VAR_3 = VAR_5->data_mask;

 VAR_4 = FUNC_0(VAR_5, VAR_0);
 FUNC_1(VAR_5, VAR_0, ((VAR_4 & ~VAR_5->data_mask) | VAR_3));
 FUNC_1(VAR_5, VAR_1, 0x00);
}
