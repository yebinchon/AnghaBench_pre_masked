
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcon_priv {scalar_t__ curr_src; scalar_t__ pending_src; TYPE_1__* client; } ;
struct dcon_gpio {int name; int flags; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct dcon_gpio*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int,int ) ;
 int VAR_22 ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int * VAR_23 ;
 struct dcon_gpio* VAR_24 ;
 unsigned char FUNC_11 (int) ;
 int FUNC_12 (unsigned char,int) ;
 int FUNC_13 (char*,...) ;
 scalar_t__ FUNC_14 (int,int *,int ,char*,struct dcon_priv*) ;

__attribute__((used)) static int FUNC_15(struct dcon_priv *VAR_25)
{
 unsigned char VAR_26;
 int VAR_27, VAR_28;
 const struct dcon_gpio *VAR_29 = &VAR_24[0];

 for (VAR_28 = 0; VAR_28 < FUNC_0(VAR_24); VAR_28++) {
  VAR_23[VAR_28] = FUNC_8(&VAR_25->client->dev, VAR_29[VAR_28].name,
       VAR_29[VAR_28].flags);
  if (FUNC_1(VAR_23[VAR_28])) {
   VAR_27 = FUNC_2(VAR_23[VAR_28]);
   FUNC_13("failed to request %s GPIO: %d\n", VAR_29[VAR_28].name,
          VAR_27);
   return VAR_27;
  }
 }


 FUNC_3(VAR_20, VAR_4);
 VAR_25->curr_src = FUNC_4(VAR_21, VAR_12)
  ? VAR_1
  : VAR_2;
 VAR_25->pending_src = VAR_25->curr_src;


 FUNC_9(VAR_23[VAR_17]);
 FUNC_9(VAR_23[VAR_18]);
 FUNC_9(VAR_23[VAR_15]);
 FUNC_9(VAR_23[VAR_14]);
 FUNC_10(VAR_23[VAR_16],
          VAR_25->curr_src == VAR_1);




 FUNC_7(VAR_20, 2, 0);


 FUNC_6(2, VAR_0);


 VAR_26 = FUNC_11(0x4d0);
 VAR_26 &= ~(1 << VAR_0);
 FUNC_12(VAR_26, 0x4d0);


 if (FUNC_14(VAR_0, &VAR_22, 0, "DCON", VAR_25)) {
  FUNC_13("failed to request DCON's irq\n");
  return -VAR_3;
 }


 FUNC_3(VAR_20, VAR_9);


 FUNC_5(VAR_19, VAR_8);


 FUNC_3(VAR_20, VAR_8);


 FUNC_3(VAR_20, VAR_7);
 FUNC_3(VAR_19, VAR_7);


 FUNC_5(VAR_19, VAR_5);


 FUNC_3(VAR_19, VAR_10);


 FUNC_5(VAR_20, VAR_10);


 FUNC_5(0, VAR_6);


 FUNC_5(VAR_20, VAR_11);
 FUNC_5(VAR_19, VAR_11);


 FUNC_5(VAR_20, VAR_13);
 FUNC_5(VAR_19, VAR_13);


 FUNC_5(VAR_20, VAR_4);
 FUNC_5(VAR_19, VAR_4);

 return 0;
}
