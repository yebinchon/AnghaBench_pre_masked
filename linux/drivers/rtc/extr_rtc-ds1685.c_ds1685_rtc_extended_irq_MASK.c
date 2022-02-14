
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct platform_device {int dev; } ;
struct ds1685_priv {int (* read ) (struct ds1685_priv*,int ) ;int (* post_ram_clear ) () ;int (* write ) (struct ds1685_priv*,int ,int) ;int (* wake_alarm ) () ;int (* prepare_poweroff ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct ds1685_priv*) ;
 int FUNC_3 (struct ds1685_priv*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ds1685_priv*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct ds1685_priv*,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (struct ds1685_priv*,int ) ;
 int FUNC_10 (struct ds1685_priv*,int ,int) ;
 int FUNC_11 (struct ds1685_priv*,int ) ;
 int FUNC_12 (struct ds1685_priv*,int ,int) ;
 int FUNC_13 (struct ds1685_priv*,int ,int) ;
 int FUNC_14 (struct ds1685_priv*,int ) ;
 int FUNC_15 () ;
 int FUNC_16 (struct ds1685_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_17(struct ds1685_priv *VAR_8, struct platform_device *VAR_9)
{
 u8 VAR_10, VAR_11;

 FUNC_3(VAR_8);
 VAR_10 = VAR_8->read(VAR_8, VAR_6);
 VAR_11 = VAR_8->read(VAR_8, VAR_7);






 if ((VAR_11 & VAR_3) && (VAR_10 & VAR_0)) {

  VAR_8->write(VAR_8, VAR_7,
      (VAR_8->read(VAR_8, VAR_7) &
       ~(VAR_3)));


  VAR_8->write(VAR_8, VAR_6,
      (VAR_10 & ~(VAR_0)));







  FUNC_4(500);
  VAR_8->write(VAR_8, VAR_7,
      (VAR_8->read(VAR_8, VAR_7) |
       VAR_3));


  if (VAR_8->prepare_poweroff != ((void*)0))
   VAR_8->prepare_poweroff();
  else
   FUNC_1(VAR_9);
 }







 if ((VAR_11 & VAR_5) && (VAR_10 & VAR_2)) {
  VAR_8->write(VAR_8, VAR_6,
      (VAR_10 & ~(VAR_2)));


  if (VAR_8->wake_alarm != ((void*)0))
   VAR_8->wake_alarm();
  else
   FUNC_0(&VAR_9->dev,
     "Wake Alarm IRQ just occurred!\n");
 }
 if ((VAR_11 & VAR_4) && (VAR_10 & VAR_1)) {
  VAR_8->write(VAR_8, VAR_6,
      (VAR_10 & ~(VAR_1)));
  FUNC_4(150);


  if (VAR_8->post_ram_clear != ((void*)0))
   VAR_8->post_ram_clear();
  else
   FUNC_0(&VAR_9->dev,
     "RAM-Clear IRQ just occurred!\n");
 }
 FUNC_2(VAR_8);
}
