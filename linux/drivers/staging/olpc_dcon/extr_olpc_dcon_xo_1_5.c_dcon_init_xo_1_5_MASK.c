
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dcon_priv {int curr_src; int pending_src; TYPE_1__* client; } ;
struct dcon_gpio {int name; int flags; } ;
struct TYPE_7__ {unsigned int sci_interrupt; } ;
struct TYPE_6__ {int dev_id; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (struct dcon_gpio*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_3 () ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int * VAR_8 ;
 struct dcon_gpio* VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (char*,unsigned int,...) ;
 scalar_t__ FUNC_11 (unsigned int,int *,int ,char*,struct dcon_priv*) ;

__attribute__((used)) static int FUNC_12(struct dcon_priv *VAR_11)
{
 unsigned int VAR_12;
 const struct dcon_gpio *VAR_13 = &VAR_9[0];
 int VAR_14;
 int VAR_15;


 VAR_10.dev_id = FUNC_4(&VAR_11->client->dev);
 FUNC_6(&VAR_10);


 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_9); VAR_14++) {
  VAR_8[VAR_14] = FUNC_5(&VAR_11->client->dev, VAR_13[VAR_14].name,
       VAR_13[VAR_14].flags);
  if (FUNC_1(VAR_8[VAR_14])) {
   VAR_15 = FUNC_2(VAR_8[VAR_14]);
   FUNC_10("failed to request %s GPIO: %d\n", VAR_13[VAR_14].name,
          VAR_15);
   return VAR_15;
  }
 }

 FUNC_3();


 FUNC_9(FUNC_7(VAR_5) | VAR_0, VAR_5);



 VAR_11->curr_src = (FUNC_8(VAR_4) & 0x1000) ?
   VAR_1 : VAR_2;
 VAR_11->pending_src = VAR_11->curr_src;


 VAR_12 = VAR_6.sci_interrupt;
 if (FUNC_11(VAR_12, &VAR_7, VAR_3, "DCON", VAR_11)) {
  FUNC_10("DCON (IRQ%d) allocation failed\n", VAR_12);
  return 1;
 }

 return 0;
}
