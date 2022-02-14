
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {char* name; int phy_mask; int priv; int id; int (* reset ) (TYPE_1__*) ;int write; int read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_3 (int ,int ) ;
 int VAR_12 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,int ,char*) ;
 int FUNC_14 (TYPE_1__*) ;

int FUNC_15(void)
{
 u32 VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = FUNC_6();
 if (VAR_11 == ((void*)0))
  return -VAR_5;

 VAR_11->name = "cpmac-mii";
 VAR_11->read = VAR_9;
 VAR_11->write = VAR_10;
 VAR_11->reset = FUNC_2;

 VAR_11->priv = FUNC_4(VAR_0, 256);

 if (!VAR_11->priv) {
  FUNC_12("Can't ioremap mdio registers\n");
  VAR_15 = -VAR_6;
  goto fail_alloc;
 }


 FUNC_1(26);
 FUNC_1(27);
 FUNC_0(VAR_2);
 FUNC_0(VAR_1);
 FUNC_0(VAR_3);

 VAR_11->reset(VAR_11);

 for (VAR_14 = 0; VAR_14 < 300; VAR_14++) {
  VAR_13 = FUNC_3(VAR_11->priv, VAR_4);
  if (VAR_13)
   break;
  else
   FUNC_10(10);
 }

 VAR_13 &= 0x7fffffff;
 if (VAR_13 & (VAR_13 - 1)) {
  VAR_12 = 1;
  VAR_13 = 0;
 }

 VAR_11->phy_mask = ~(VAR_13 | 0x80000000);
 FUNC_13(VAR_11->id, VAR_7, "cpmac-1");

 VAR_15 = FUNC_8(VAR_11);
 if (VAR_15)
  goto fail_mii;

 VAR_15 = FUNC_11(&VAR_8);
 if (VAR_15)
  goto fail_cpmac;

 return 0;

fail_cpmac:
 FUNC_9(VAR_11);

fail_mii:
 FUNC_5(VAR_11->priv);

fail_alloc:
 FUNC_7(VAR_11);

 return VAR_15;
}
