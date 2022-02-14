
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gswip_priv {int dummy; } ;
struct TYPE_3__ {int val_0; int val_1; int val_2; int val_3; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_2 (struct gswip_priv*,int,int ,int ) ;
 int FUNC_3 (struct gswip_priv*,int ,int ) ;
 int FUNC_4 (struct gswip_priv*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct gswip_priv *VAR_10)
{
 int VAR_11;
 int VAR_12;

 FUNC_2(VAR_10, VAR_4 |
    VAR_7,
     VAR_6, VAR_3);
 FUNC_4(VAR_10, 0, VAR_8);

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_9); VAR_11++) {
  FUNC_4(VAR_10, VAR_11, VAR_2);
  FUNC_4(VAR_10, VAR_9[VAR_11].val_0,
          FUNC_1(0));
  FUNC_4(VAR_10, VAR_9[VAR_11].val_1,
          FUNC_1(1));
  FUNC_4(VAR_10, VAR_9[VAR_11].val_2,
          FUNC_1(2));
  FUNC_4(VAR_10, VAR_9[VAR_11].val_3,
          FUNC_1(3));


  FUNC_2(VAR_10, 0, VAR_5,
      VAR_3);
  VAR_12 = FUNC_3(VAR_10, VAR_3,
          VAR_5);
  if (VAR_12)
   return VAR_12;
 }


 FUNC_2(VAR_10, 0, VAR_1,
     VAR_0);

 return 0;
}
