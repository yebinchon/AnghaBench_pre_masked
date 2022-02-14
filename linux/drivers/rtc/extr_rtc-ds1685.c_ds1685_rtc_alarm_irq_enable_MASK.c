
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1685_priv {int (* read ) (struct ds1685_priv*,int ) ;int (* write ) (struct ds1685_priv*,int ,int) ;} ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ds1685_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ds1685_priv*,int ,int) ;
 int FUNC_2 (struct ds1685_priv*,int ) ;
 int FUNC_3 (struct ds1685_priv*,int ,int) ;
 int FUNC_4 (struct ds1685_priv*,int ) ;
 int FUNC_5 (struct ds1685_priv*,int ) ;

__attribute__((used)) static int
FUNC_6(struct device *VAR_3, unsigned int VAR_4)
{
 struct ds1685_priv *VAR_5 = FUNC_0(VAR_3);


 if (VAR_4)
  VAR_5->write(VAR_5, VAR_0, (VAR_5->read(VAR_5, VAR_0) |
          VAR_1));
 else
  VAR_5->write(VAR_5, VAR_0, (VAR_5->read(VAR_5, VAR_0) &
          ~(VAR_1)));


 VAR_5->read(VAR_5, VAR_2);

 return 0;
}
