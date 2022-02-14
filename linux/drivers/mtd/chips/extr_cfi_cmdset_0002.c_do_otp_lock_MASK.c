
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct flchip {int mutex; int start; int state; } ;
struct cfi_private {int device_type; int addr_unlock1; int addr_unlock2; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct map_info*,struct flchip*,int ,int) ;
 int FUNC_2 (struct map_info*,int ) ;
 int FUNC_3 (int,int ,int ,struct map_info*,struct cfi_private*,int ,int *) ;
 scalar_t__ FUNC_4 (struct map_info*,struct flchip*,scalar_t__) ;
 int FUNC_5 (struct map_info*,struct flchip*,int ,int ) ;
 unsigned long VAR_4 ;
 int FUNC_6 (struct map_info*,int ,int ) ;
 unsigned long FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct map_info*,struct flchip*,int ) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct map_info *VAR_5, struct flchip *VAR_6, loff_t VAR_7,
         size_t VAR_8, u_char *VAR_9, size_t VAR_10)
{
 struct cfi_private *VAR_11 = VAR_5->fldrv_priv;
 uint8_t VAR_12;
 unsigned long VAR_13;
 int VAR_14;


 if ((VAR_7 != 0) || (VAR_8 != VAR_10))
  return -VAR_0;

 FUNC_8(&VAR_6->mutex);
 VAR_14 = FUNC_5(VAR_5, VAR_6, VAR_6->start, VAR_2);
 if (VAR_14) {
  FUNC_9(&VAR_6->mutex);
  return VAR_14;
 }
 VAR_6->state = VAR_2;


 FUNC_3(0xAA, VAR_11->addr_unlock1, VAR_6->start, VAR_5, VAR_11,
    VAR_11->device_type, ((void*)0));
 FUNC_3(0x55, VAR_11->addr_unlock2, VAR_6->start, VAR_5, VAR_11,
    VAR_11->device_type, ((void*)0));
 FUNC_3(0x40, VAR_11->addr_unlock1, VAR_6->start, VAR_5, VAR_11,
    VAR_11->device_type, ((void*)0));


 VAR_12 = FUNC_2(VAR_5, 0);


 VAR_12 &= ~0x01;



 FUNC_6(VAR_5, FUNC_0(0xA0), VAR_6->start);
 FUNC_6(VAR_5, FUNC_0(VAR_12), VAR_6->start);


 VAR_13 = VAR_4 + FUNC_7(2);
 for (;;) {
  if (FUNC_4(VAR_5, VAR_6, VAR_7))
   break;

  if (FUNC_12(VAR_4, VAR_13)) {
   FUNC_10("Waiting for chip to be ready timed out.\n");
   VAR_14 = -VAR_1;
   break;
  }
  FUNC_1(VAR_5, VAR_6, 0, 1);
 }


 FUNC_6(VAR_5, FUNC_0(0x90), VAR_6->start);
 FUNC_6(VAR_5, FUNC_0(0x00), VAR_6->start);

 VAR_6->state = VAR_3;
 FUNC_11(VAR_5, VAR_6, VAR_6->start);
 FUNC_9(&VAR_6->mutex);

 return VAR_14;
}
