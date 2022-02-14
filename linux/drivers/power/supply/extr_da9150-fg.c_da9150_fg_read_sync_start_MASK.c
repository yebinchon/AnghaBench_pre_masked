
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct da9150_fg {int dev; int io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct da9150_fg*,int ,int ) ;
 int FUNC_1 (struct da9150_fg*,int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct da9150_fg *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = 0;

 FUNC_3(&VAR_4->io_lock);


 VAR_6 = FUNC_0(VAR_4, VAR_0,
      VAR_2);
 if (VAR_6 > 0)
  FUNC_1(VAR_4, VAR_0,
         VAR_2, 0);


 VAR_6 = 0;
 while ((VAR_6 == 0) && (VAR_5++ < VAR_1)) {
  FUNC_4(VAR_3,
        VAR_3 * 2);
  VAR_6 = FUNC_0(VAR_4, VAR_0,
       VAR_2);
 }


 if (VAR_6 == 0)
  FUNC_2(VAR_4->dev, "Failed to perform QIF read sync!\n");
}
