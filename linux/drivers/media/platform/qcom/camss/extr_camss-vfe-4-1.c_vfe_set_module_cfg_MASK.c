
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct vfe_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct vfe_device *VAR_5, u8 VAR_6)
{
 u32 VAR_7 = VAR_3 |
    VAR_1 |
    VAR_4 |
    VAR_2;

 if (VAR_6)
  FUNC_0(VAR_7, VAR_5->base + VAR_0);
 else
  FUNC_0(0x0, VAR_5->base + VAR_0);
}
