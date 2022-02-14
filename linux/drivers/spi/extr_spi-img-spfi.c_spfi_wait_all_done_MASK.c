
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct img_spfi {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (struct img_spfi*,int ) ;
 int FUNC_4 (struct img_spfi*) ;
 int FUNC_5 (struct img_spfi*,int,int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct img_spfi *VAR_5)
{
 unsigned long VAR_6 = VAR_4 + FUNC_2(50);

 while (FUNC_6(VAR_4, VAR_6)) {
  u32 VAR_7 = FUNC_3(VAR_5, VAR_3);

  if (VAR_7 & VAR_1) {
   FUNC_5(VAR_5, VAR_1,
        VAR_2);
   return 0;
  }
  FUNC_0();
 }

 FUNC_1(VAR_5->dev, "Timed out waiting for transaction to complete\n");
 FUNC_4(VAR_5);

 return -VAR_0;
}
