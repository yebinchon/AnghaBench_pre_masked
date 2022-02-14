
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct da9150_fg {int dev; int io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct da9150_fg*,int ,int ) ;
 int FUNC_1 (struct da9150_fg*,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct da9150_fg *VAR_4, u8 VAR_5, u8 VAR_6,
          u32 VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9 = 0, VAR_10;

 FUNC_3(&VAR_4->io_lock);


 VAR_9 = FUNC_0(VAR_4, VAR_0,
      VAR_2);


 while ((VAR_9 == 0) && (VAR_8++ < VAR_1)) {
  FUNC_5(VAR_3,
        VAR_3 * 2);
  VAR_9 = FUNC_0(VAR_4, VAR_0,
       VAR_2);
 }

 if (VAR_9 == 0) {
  FUNC_2(VAR_4->dev, "Timeout waiting for existing QIF sync!\n");
  FUNC_4(&VAR_4->io_lock);
  return;
 }


 FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);


 VAR_8 = 0;
 VAR_10 = VAR_9;
 while ((VAR_9 == VAR_10) && (VAR_8++ < VAR_1)) {
  FUNC_5(VAR_3,
        VAR_3 * 2);
  VAR_9 = FUNC_0(VAR_4, VAR_0,
       VAR_2);
 }

 FUNC_4(&VAR_4->io_lock);


 if (VAR_9 != (VAR_10 + 1))
  FUNC_2(VAR_4->dev, "Error performing QIF sync write for code %d\n",
   VAR_5);
}
