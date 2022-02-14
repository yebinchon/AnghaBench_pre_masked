
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_ops {int dummy; } ;
struct cphy {int caps; char* desc; int * ops; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_0 (struct cphy*,struct adapter*,int,int *,struct mdio_ops const*,int,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cphy*,int ,int ,unsigned int*) ;
 int FUNC_3 (struct cphy*,int ,int ,unsigned int) ;
 int FUNC_4 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (struct cphy*,int ) ;

int FUNC_6(struct cphy *VAR_17, struct adapter *VAR_18,
   int VAR_19, const struct mdio_ops *VAR_20)
{
 int VAR_21;
 unsigned int VAR_22;

 FUNC_0(VAR_17, VAR_18, VAR_19, &VAR_16, VAR_20,
    VAR_3 | VAR_2 |
    VAR_1 | VAR_4 | VAR_7 |
    VAR_8 | VAR_6, "10/100/1000BASE-T");
 FUNC_1(20);

 VAR_21 = FUNC_2(VAR_17, VAR_0, VAR_9, &VAR_22);
 if (VAR_21)
  return VAR_21;
 if (VAR_22 & VAR_14) {

  return FUNC_3(VAR_17, VAR_0, VAR_11,
         0x100);
 }

 VAR_17->caps = VAR_1 | VAR_4 |
      VAR_7 | VAR_5 | VAR_6;
 VAR_17->desc = "1000BASE-X";
 VAR_17->ops = &VAR_15;

 VAR_21 = FUNC_3(VAR_17, VAR_0, VAR_10, 1);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_3(VAR_17, VAR_0, VAR_12, 1);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_3(VAR_17, VAR_0, VAR_10, 0);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_3(VAR_17, VAR_0, VAR_9,
       VAR_22 | VAR_13);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_5(VAR_17, 0);
 if (VAR_21)
  return VAR_21;

 FUNC_4(5);
 return 0;
}
