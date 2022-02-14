
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_ops {int dummy; } ;
struct cphy {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cphy*,struct adapter*,int,int *,struct mdio_ops const*,int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cphy*,int ) ;

int FUNC_3(struct cphy *VAR_6, struct adapter *VAR_7, int VAR_8,
   const struct mdio_ops *VAR_9)
{
 int VAR_10;

 FUNC_0(VAR_6, VAR_7, VAR_8, &VAR_4, VAR_9,
    VAR_0 | VAR_1 | VAR_2 |
    VAR_3, "10GBASE-R");
 FUNC_1(125);

 VAR_10 = FUNC_2(VAR_6, VAR_5);
 if (VAR_10)
  return VAR_10;
 return 0;
}
