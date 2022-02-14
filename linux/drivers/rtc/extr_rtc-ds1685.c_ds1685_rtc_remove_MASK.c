
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ds1685_priv {int (* read ) (struct ds1685_priv*,int ) ;int (* write ) (struct ds1685_priv*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ds1685_priv* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct ds1685_priv*,int ,int) ;
 int FUNC_2 (struct ds1685_priv*,int ) ;
 int FUNC_3 (struct ds1685_priv*,int ) ;
 int FUNC_4 (struct ds1685_priv*,int ,int) ;
 int FUNC_5 (struct ds1685_priv*,int ) ;
 int FUNC_6 (struct ds1685_priv*,int ,int) ;
 int FUNC_7 (struct ds1685_priv*,int ) ;

__attribute__((used)) static int
FUNC_8(struct platform_device *VAR_7)
{
 struct ds1685_priv *VAR_8 = FUNC_0(VAR_7);


 VAR_8->write(VAR_8, VAR_2,
     (VAR_8->read(VAR_8, VAR_2) &
      ~(VAR_3)));


 VAR_8->read(VAR_8, VAR_4);


 VAR_8->write(VAR_8, VAR_6,
     (VAR_8->read(VAR_8, VAR_6) &
      ~(VAR_1)));


 VAR_8->write(VAR_8, VAR_5,
     (VAR_8->read(VAR_8, VAR_5) &
      ~(VAR_0)));

 return 0;
}
