
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct lbs_private {int driver_lock; int dnld_sent; int card; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct lbs_private *VAR_6, u8 *VAR_7, u32 *VAR_8)
{
 unsigned long VAR_9;
 int VAR_10 = -1;
 u16 VAR_11;


 VAR_11 = FUNC_0(VAR_6->card, VAR_2);
 if ((VAR_11 & VAR_1) == 0) {
  FUNC_3(VAR_6->dev, "no cmd response in card\n");
  *VAR_8 = 0;
  goto out;
 }

 *VAR_8 = FUNC_0(VAR_6->card, VAR_4);
 if ((*VAR_8 == 0) || (*VAR_8 > VAR_5)) {
  FUNC_3(VAR_6->dev,
      "card cmd buffer has invalid # of bytes (%d)\n",
      *VAR_8);
  goto out;
 }


 FUNC_1(VAR_6->card, VAR_3, VAR_7, *VAR_8/sizeof(u16));
 if (*VAR_8 & 1)
  VAR_7[*VAR_8-1] = FUNC_2(VAR_6->card, VAR_3);



 *VAR_8 -= 8;
 VAR_10 = 0;


 FUNC_4(&VAR_6->driver_lock, VAR_9);
 VAR_6->dnld_sent = VAR_0;
 FUNC_5(&VAR_6->driver_lock, VAR_9);

out:
 return VAR_10;
}
