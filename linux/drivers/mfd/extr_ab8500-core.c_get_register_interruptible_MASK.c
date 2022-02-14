
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ab8500 {int (* read ) (struct ab8500*,int) ;int dev; int lock; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ab8500*,int) ;

__attribute__((used)) static int FUNC_5(struct ab8500 *VAR_0, u8 VAR_1,
 u8 VAR_2, u8 *VAR_3)
{
 int VAR_4;
 u16 VAR_5 = ((u16)VAR_1) << 8 | VAR_2;

 FUNC_2(&VAR_0->lock);

 VAR_4 = VAR_0->read(VAR_0, VAR_5);
 if (VAR_4 < 0)
  FUNC_0(VAR_0->dev, "failed to read reg %#x: %d\n",
   VAR_5, VAR_4);
 else
  *VAR_3 = VAR_4;

 FUNC_3(&VAR_0->lock);
 FUNC_1(VAR_0->dev, "rd: addr %#x => data %#x\n", VAR_5, VAR_4);

 return (VAR_4 < 0) ? VAR_4 : 0;
}
