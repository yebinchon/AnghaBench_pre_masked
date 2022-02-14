
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ab8500 {int (* write_masked ) (struct ab8500*,int,int,int) ;int (* read ) (struct ab8500*,int) ;int (* write ) (struct ab8500*,int,int) ;int lock; int dev; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ab8500*,int) ;
 int FUNC_5 (struct ab8500*,int,int) ;
 int FUNC_6 (struct ab8500*,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct ab8500 *VAR_0, u8 VAR_1,
 u8 VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;
 u16 VAR_6 = ((u16)VAR_1) << 8 | VAR_2;

 FUNC_2(&VAR_0->lock);

 if (VAR_0->write_masked == ((void*)0)) {
  u8 VAR_7;

  VAR_5 = VAR_0->read(VAR_0, VAR_6);
  if (VAR_5 < 0) {
   FUNC_0(VAR_0->dev, "failed to read reg %#x: %d\n",
    VAR_6, VAR_5);
   goto out;
  }

  VAR_7 = (u8)VAR_5;
  VAR_7 = (~VAR_3 & VAR_7) | (VAR_3 & VAR_4);

  VAR_5 = VAR_0->write(VAR_0, VAR_6, VAR_7);
  if (VAR_5 < 0)
   FUNC_0(VAR_0->dev, "failed to write reg %#x: %d\n",
    VAR_6, VAR_5);

  FUNC_1(VAR_0->dev, "mask: addr %#x => data %#x\n", VAR_6,
   VAR_7);
  goto out;
 }
 VAR_5 = VAR_0->write_masked(VAR_0, VAR_6, VAR_3, VAR_4);
 if (VAR_5 < 0)
  FUNC_0(VAR_0->dev, "failed to modify reg %#x: %d\n", VAR_6,
   VAR_5);
out:
 FUNC_3(&VAR_0->lock);
 return VAR_5;
}
