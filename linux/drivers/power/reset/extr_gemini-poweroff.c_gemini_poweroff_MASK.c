
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gemini_powercon {scalar_t__ base; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct gemini_powercon* VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct gemini_powercon *VAR_5 = VAR_4;
 u32 VAR_6;

 FUNC_0(VAR_5->dev, "Gemini power off\n");
 VAR_6 = FUNC_1(VAR_5->base + VAR_3);
 VAR_6 |= VAR_0 | VAR_1;
 FUNC_2(VAR_6, VAR_5->base + VAR_3);

 VAR_6 &= ~VAR_0;
 VAR_6 |= VAR_2;
 FUNC_2(VAR_6, VAR_5->base + VAR_3);
}
