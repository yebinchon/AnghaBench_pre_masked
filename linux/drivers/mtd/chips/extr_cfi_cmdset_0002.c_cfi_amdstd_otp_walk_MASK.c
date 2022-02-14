
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;
struct otp_info {size_t start; size_t length; int locked; } ;
struct mtd_info {struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct flchip {unsigned long start; int mutex; } ;
struct cfi_private {int interleave; int device_type; int numchips; int addr_unlock1; int addr_unlock2; struct flchip* chips; } ;
typedef int (* otp_op_t ) (struct map_info*,struct flchip*,size_t,size_t,int *,size_t) ;
typedef size_t loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long,struct map_info*,struct cfi_private*) ;
 int FUNC_2 (unsigned long,struct map_info*,struct cfi_private*) ;
 int FUNC_3 (struct map_info*,unsigned long) ;
 int FUNC_4 (int,int ,unsigned long,struct map_info*,struct cfi_private*,int,int *) ;
 int FUNC_5 (struct map_info*,struct flchip*,unsigned long,int ) ;
 scalar_t__ FUNC_6 (struct cfi_private*) ;
 int FUNC_7 (struct map_info*,int ,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct map_info*,struct flchip*,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct mtd_info *VAR_3, loff_t VAR_4, size_t VAR_5,
          size_t *VAR_6, u_char *VAR_7,
          otp_op_t VAR_8, int VAR_9)
{
 struct map_info *VAR_10 = VAR_3->priv;
 struct cfi_private *VAR_11 = VAR_10->fldrv_priv;
 int VAR_12 = VAR_11->interleave * VAR_11->device_type;
 unsigned long VAR_13;
 int VAR_14;
 struct flchip *VAR_15;
 uint8_t VAR_16, VAR_17;
 int VAR_18;

 size_t VAR_19, VAR_20, VAR_21;
 loff_t VAR_22, VAR_23, VAR_24;
 int VAR_25 = 0, VAR_26;

 *VAR_6 = 0;

 for (VAR_14 = 0; VAR_14 < VAR_11->numchips; VAR_14++) {
  VAR_15 = &VAR_11->chips[VAR_14];
  VAR_20 = 0;
  VAR_19 = 0;


  if (FUNC_6(VAR_11)) {
   VAR_13 = VAR_15->start;



   FUNC_8(&VAR_15->mutex);
   VAR_18 = FUNC_5(VAR_10, VAR_15, VAR_13, VAR_1);
   if (VAR_18) {
    FUNC_9(&VAR_15->mutex);
    return VAR_18;
   }
   FUNC_2(VAR_13, VAR_10, VAR_11);
   VAR_16 = FUNC_3(VAR_10, VAR_13 + 0x3 * VAR_12);
   FUNC_1(VAR_13, VAR_10, VAR_11);
   FUNC_10(VAR_10, VAR_15, VAR_13);
   FUNC_9(&VAR_15->mutex);

   if (VAR_16 & 0x80) {

    VAR_23 = 0;
    VAR_20 = 0x100;
   } else {

    VAR_22 = 0;
    VAR_19 = 0x100;

    FUNC_8(&VAR_15->mutex);
    VAR_18 = FUNC_5(VAR_10, VAR_15, VAR_13, VAR_2);
    if (VAR_18) {
     FUNC_9(&VAR_15->mutex);
     return VAR_18;
    }


    FUNC_4(0xAA, VAR_11->addr_unlock1,
       VAR_15->start, VAR_10, VAR_11,
       VAR_11->device_type, ((void*)0));
    FUNC_4(0x55, VAR_11->addr_unlock2,
       VAR_15->start, VAR_10, VAR_11,
       VAR_11->device_type, ((void*)0));
    FUNC_4(0x40, VAR_11->addr_unlock1,
       VAR_15->start, VAR_10, VAR_11,
       VAR_11->device_type, ((void*)0));

    VAR_17 = FUNC_3(VAR_10, 0);

    FUNC_7(VAR_10, FUNC_0(0x90), VAR_15->start);
    FUNC_7(VAR_10, FUNC_0(0x00), VAR_15->start);
    FUNC_10(VAR_10, VAR_15, VAR_15->start);
    FUNC_9(&VAR_15->mutex);

    VAR_25 = ((VAR_17 & 0x01) == 0x00);
   }
  }

  VAR_21 = VAR_9 ? VAR_19 : VAR_20;
  if (!VAR_21)
   continue;
  VAR_24 = VAR_9 ? VAR_22 : VAR_23;
  VAR_26 = VAR_9 ? VAR_25 : 1;

  if (!VAR_8) {

   struct otp_info *VAR_27;
   VAR_5 -= sizeof(*VAR_27);
   if (VAR_5 <= 0)
    return -VAR_0;
   VAR_27 = (struct otp_info *)VAR_7;
   VAR_27->start = VAR_4;
   VAR_27->length = VAR_21;
   VAR_27->locked = VAR_26;
   VAR_7 += sizeof(*VAR_27);
   *VAR_6 += sizeof(*VAR_27);
   VAR_4 += VAR_21;
  } else if ((VAR_4 < VAR_21) && (VAR_5 > 0)) {
   size_t VAR_28;
   VAR_28 = (VAR_5 < VAR_21 - VAR_4) ? VAR_5 : VAR_21 - VAR_4;
   VAR_18 = VAR_8(VAR_10, VAR_15, VAR_24 + VAR_4, VAR_28, VAR_7,
         VAR_21);
   if (VAR_18 < 0)
    return VAR_18;

   VAR_7 += VAR_28;
   VAR_5 -= VAR_28;
   *VAR_6 += VAR_28;
   VAR_4 = 0;
  } else {
   VAR_4 -= VAR_21;
  }
 }
 return 0;
}
