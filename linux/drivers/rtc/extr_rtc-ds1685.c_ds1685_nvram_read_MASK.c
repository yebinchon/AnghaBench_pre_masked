
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mutex {int dummy; } ;
struct ds1685_priv {int (* read ) (struct ds1685_priv*,scalar_t__) ;int (* write ) (struct ds1685_priv*,scalar_t__,int) ;TYPE_1__* dev; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {struct mutex ops_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct ds1685_priv*) ;
 int FUNC_1 (struct ds1685_priv*) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct ds1685_priv*,scalar_t__) ;
 int FUNC_5 (struct ds1685_priv*,scalar_t__) ;
 int FUNC_6 (struct ds1685_priv*,scalar_t__,int) ;
 int FUNC_7 (struct ds1685_priv*,scalar_t__) ;
 int FUNC_8 (struct ds1685_priv*,scalar_t__,unsigned int) ;
 int FUNC_9 (struct ds1685_priv*,scalar_t__,unsigned int) ;
 int FUNC_10 (struct ds1685_priv*,scalar_t__) ;
 int FUNC_11 (struct ds1685_priv*,scalar_t__,int) ;
 int FUNC_12 (struct ds1685_priv*,scalar_t__) ;

__attribute__((used)) static int FUNC_13(void *VAR_10, unsigned int VAR_11, void *VAR_12,
        size_t VAR_13)
{
 struct ds1685_priv *VAR_14 = VAR_10;
 struct mutex *VAR_15 = &VAR_14->dev->ops_lock;
 ssize_t VAR_16;
 u8 *VAR_17 = VAR_12;
 int VAR_18;

 VAR_18 = FUNC_2(VAR_15);
 if (VAR_18)
  return VAR_18;

 FUNC_0(VAR_14);


 for (VAR_16 = 0; VAR_13 > 0 && VAR_11 < VAR_4;
      VAR_16++, VAR_13--) {
  if (VAR_16 < VAR_1)
   *VAR_17++ = VAR_14->read(VAR_14, (VAR_2 + VAR_11++));
  else
   *VAR_17++ = VAR_14->read(VAR_14, (VAR_0 + VAR_11++));
 }


 if (VAR_13 > 0) {
  FUNC_1(VAR_14);



  VAR_14->write(VAR_14, VAR_9,
      (VAR_14->read(VAR_14, VAR_9) |
       VAR_8));



  VAR_14->write(VAR_14, VAR_6,
      (VAR_11 - VAR_4));



  for (VAR_16 = 0; VAR_13 > 0 && VAR_11 < VAR_3;
       VAR_16++, VAR_13--) {






   *VAR_17++ = VAR_14->read(VAR_14, VAR_7);
   VAR_11++;
  }



  VAR_14->write(VAR_14, VAR_9,
      (VAR_14->read(VAR_14, VAR_9) &
       ~(VAR_8)));

  FUNC_0(VAR_14);
 }

 FUNC_3(VAR_15);

 return 0;
}
