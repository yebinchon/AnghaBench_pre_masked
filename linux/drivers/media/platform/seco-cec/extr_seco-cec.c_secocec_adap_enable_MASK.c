
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct secocec_data {struct device* dev; } ;
struct device {int dummy; } ;
struct cec_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct secocec_data* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct cec_adapter *VAR_4, bool VAR_5)
{
 struct secocec_data *VAR_6 = FUNC_0(VAR_4);
 struct device *VAR_7 = VAR_6->dev;
 u16 VAR_8 = 0;
 int VAR_9;

 if (VAR_5) {

  VAR_9 = FUNC_2(VAR_3, &VAR_8);
  if (VAR_9)
   goto err;

  VAR_9 = FUNC_3(VAR_3, VAR_8);
  if (VAR_9)
   goto err;


  VAR_9 = FUNC_2(VAR_0, &VAR_8);
  if (VAR_9)
   goto err;

  VAR_9 = FUNC_3(VAR_0,
      VAR_8 | VAR_1);
  if (VAR_9)
   goto err;

  FUNC_1(VAR_7, "Device enabled");
 } else {

  VAR_9 = FUNC_2(VAR_3, &VAR_8);
  VAR_9 = FUNC_3(VAR_3, VAR_8);


  VAR_9 = FUNC_2(VAR_0, &VAR_8);
  VAR_9 = FUNC_3(VAR_0, VAR_8 &
      ~VAR_1 &
      ~VAR_2);

  FUNC_1(VAR_7, "Device disabled");
 }

 return 0;
err:
 return VAR_9;
}
