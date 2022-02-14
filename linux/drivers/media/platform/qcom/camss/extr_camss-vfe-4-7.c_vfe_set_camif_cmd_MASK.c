
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
 int FUNC_0 () ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct vfe_device *VAR_5, u8 VAR_6)
{
 u32 VAR_7;

 VAR_7 = VAR_1 | VAR_4;
 FUNC_1(VAR_7, VAR_5->base + VAR_0);
 FUNC_0();

 if (VAR_6)
  VAR_7 = VAR_3;
 else
  VAR_7 = VAR_2;

 FUNC_1(VAR_7, VAR_5->base + VAR_0);
}
