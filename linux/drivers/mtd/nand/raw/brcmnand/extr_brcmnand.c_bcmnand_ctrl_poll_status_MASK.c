
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmnand_controller {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct brcmnand_controller*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,int,int) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct brcmnand_controller *VAR_4,
        u32 VAR_5, u32 VAR_6,
        unsigned long VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;

 if (!VAR_7)
  VAR_7 = VAR_2;

 VAR_8 = VAR_3 + FUNC_3(VAR_7);
 do {
  VAR_9 = FUNC_0(VAR_4, VAR_0);
  if ((VAR_9 & VAR_5) == VAR_6)
   return 0;

  FUNC_1();
 } while (FUNC_4(VAR_8, VAR_3));

 FUNC_2(VAR_4->dev, "timeout on status poll (expected %x got %x)\n",
   VAR_6, VAR_9 & VAR_5);

 return -VAR_1;
}
