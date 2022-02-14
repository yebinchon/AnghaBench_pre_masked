
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ p_addr; scalar_t__ len; } ;
struct TYPE_5__ {scalar_t__ p_addr; scalar_t__ len; } ;
struct TYPE_4__ {scalar_t__ len; int * v_addr; } ;
struct il_priv {TYPE_3__ ucode_init_data; TYPE_2__ ucode_init; TYPE_1__ ucode_boot; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,...) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct il_priv*,scalar_t__,int ) ;
 int FUNC_3 (struct il_priv*) ;
 scalar_t__ FUNC_4 (struct il_priv*,int ) ;
 int FUNC_5 (struct il_priv*,int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct il_priv *VAR_15)
{
 __le32 *VAR_16 = VAR_15->ucode_boot.v_addr;
 u32 VAR_17 = VAR_15->ucode_boot.len;
 dma_addr_t VAR_18;
 dma_addr_t VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 int VAR_22;
 int VAR_23;
 u32 VAR_24;
 u32 VAR_25;

 FUNC_0("Begin load bsm\n");


 if (VAR_17 > VAR_13)
  return -VAR_11;






 VAR_18 = VAR_15->ucode_init.p_addr;
 VAR_19 = VAR_15->ucode_init_data.p_addr;
 VAR_20 = VAR_15->ucode_init.len;
 VAR_21 = VAR_15->ucode_init_data.len;

 FUNC_5(VAR_15, VAR_3, VAR_18);
 FUNC_5(VAR_15, VAR_1, VAR_19);
 FUNC_5(VAR_15, VAR_2, VAR_20);
 FUNC_5(VAR_15, VAR_0, VAR_21);


 for (VAR_25 = VAR_4;
      VAR_25 < VAR_4 + VAR_17;
      VAR_25 += sizeof(u32), VAR_16++)
  FUNC_2(VAR_15, VAR_25, FUNC_6(*VAR_16));

 VAR_22 = FUNC_3(VAR_15);
 if (VAR_22)
  return VAR_22;


 FUNC_5(VAR_15, VAR_10, 0x0);
 FUNC_5(VAR_15, VAR_9, VAR_14);
 FUNC_5(VAR_15, VAR_8, VAR_17 / sizeof(u32));



 FUNC_5(VAR_15, VAR_5, VAR_6);


 for (VAR_23 = 0; VAR_23 < 100; VAR_23++) {
  VAR_24 = FUNC_4(VAR_15, VAR_5);
  if (!(VAR_24 & VAR_6))
   break;
  FUNC_7(10);
 }
 if (VAR_23 < 100)
  FUNC_0("BSM write complete, poll %d iterations\n", VAR_23);
 else {
  FUNC_1("BSM write did not complete!\n");
  return -VAR_12;
 }



 FUNC_5(VAR_15, VAR_5, VAR_7);

 return 0;
}
