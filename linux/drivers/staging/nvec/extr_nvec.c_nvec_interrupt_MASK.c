
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
struct nvec_chip {unsigned int state; unsigned int i2c_addr; int dev; scalar_t__ base; TYPE_2__* rx; TYPE_1__* tx; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {unsigned int* data; int pos; } ;
struct TYPE_4__ {unsigned char* data; int pos; int size; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (int ,char*,char*,unsigned int,char*,unsigned char,unsigned int,char*,char*,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct nvec_chip*,int) ;
 int FUNC_3 (struct nvec_chip*,unsigned long,int) ;
 TYPE_2__* FUNC_4 (struct nvec_chip*,int ) ;
 int FUNC_5 (struct nvec_chip*,TYPE_2__*) ;
 int FUNC_6 (struct nvec_chip*) ;
 int FUNC_7 (struct nvec_chip*) ;
 int FUNC_8 (struct nvec_chip*) ;
 void* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (unsigned char,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_13(int VAR_9, void *VAR_10)
{
 unsigned long VAR_11;
 unsigned int VAR_12 = 0;
 unsigned char VAR_13 = 0xff;
 const unsigned long VAR_14 = VAR_1 | VAR_0 | VAR_7 | VAR_8;
 struct nvec_chip *VAR_15 = VAR_10;
 unsigned int VAR_16 = VAR_15->state;

 VAR_11 = FUNC_9(VAR_15->base + VAR_3);


 if ((VAR_11 & VAR_14) == 0 && (VAR_11 & ~VAR_14) != 0) {
  FUNC_1(VAR_15->dev, "unexpected irq mask %lx\n", VAR_11);
  return VAR_4;
 }
 if ((VAR_11 & VAR_1) == 0) {
  FUNC_1(VAR_15->dev, "Spurious IRQ\n");
  return VAR_4;
 }


 if ((VAR_11 & VAR_8) == 0) {
  VAR_12 = FUNC_9(VAR_15->base + VAR_2);
  if (VAR_11 & VAR_7)
   FUNC_12(0, VAR_15->base + VAR_2);
 }

 if (VAR_11 == (VAR_1 | VAR_7))
  VAR_15->state = 0;

 switch (VAR_15->state) {
 case 0:
  if (VAR_11 != (VAR_1 | VAR_7))
   FUNC_3(VAR_15, VAR_11, 0);
  break;
 case 1:
  if (VAR_11 != VAR_1) {
   FUNC_3(VAR_15, VAR_11, 1);
  } else {
   VAR_15->rx = FUNC_4(VAR_15, VAR_5);

   if (FUNC_11(!VAR_15->rx)) {
    VAR_15->state = 0;
    break;
   }
   VAR_15->rx->data[0] = VAR_12;
   VAR_15->rx->pos = 1;
   VAR_15->state = 2;
  }
  break;
 case 2:
  if (VAR_11 == (VAR_1 | VAR_8 | VAR_7)) {
   FUNC_10(33);
   if (VAR_15->rx->data[0] != 0x01) {
    FUNC_1(VAR_15->dev,
     "Read without prior read command\n");
    VAR_15->state = 0;
    break;
   }
   FUNC_5(VAR_15, VAR_15->rx);
   VAR_15->state = 3;
   FUNC_8(VAR_15);
   VAR_13 = VAR_15->tx->data[0];
   VAR_15->tx->pos = 1;
  } else if (VAR_11 == (VAR_1)) {
   VAR_15->rx->data[1] = VAR_12;
   VAR_15->rx->pos = 2;
   VAR_15->state = 4;
  } else {
   FUNC_3(VAR_15, VAR_11, 1);
  }
  break;
 case 3:
  if (VAR_11 & VAR_0) {
   FUNC_7(VAR_15);
  } else if ((VAR_11 & VAR_8) == 0 || (VAR_11 & VAR_7)) {
   FUNC_3(VAR_15, VAR_11, 1);
  } else if (VAR_15->tx && VAR_15->tx->pos < VAR_15->tx->size) {
   VAR_13 = VAR_15->tx->data[VAR_15->tx->pos++];
  } else {
   FUNC_1(VAR_15->dev,
    "tx buffer underflow on %p (%u > %u)\n",
    VAR_15->tx,
    (uint)(VAR_15->tx ? VAR_15->tx->pos : 0),
    (uint)(VAR_15->tx ? VAR_15->tx->size : 0));
   VAR_15->state = 0;
  }
  break;
 case 4:
  if ((VAR_11 & (VAR_0 | VAR_8)) == VAR_0)
   FUNC_6(VAR_15);
  else if (VAR_11 & (VAR_8 | VAR_7))
   FUNC_3(VAR_15, VAR_11, 1);
  else if (VAR_15->rx && VAR_15->rx->pos < VAR_6)
   VAR_15->rx->data[VAR_15->rx->pos++] = VAR_12;
  else
   FUNC_1(VAR_15->dev,
    "RX buffer overflow on %p: Trying to write byte %u of %u\n",
    VAR_15->rx, VAR_15->rx ? VAR_15->rx->pos : 0,
    VAR_6);
  break;
 default:
  VAR_15->state = 0;
 }


 if ((VAR_11 & (VAR_7 | VAR_8)) == VAR_7) {
  if (VAR_12 != VAR_15->i2c_addr)
   FUNC_1(VAR_15->dev,
    "received address 0x%02x, expected 0x%02x\n",
    VAR_12, VAR_15->i2c_addr);
  VAR_15->state = 1;
 }


 if ((VAR_11 & (VAR_8 | VAR_0)) == VAR_8)
  FUNC_12(VAR_13, VAR_15->base + VAR_2);


 if (VAR_11 == (VAR_1 | VAR_8 | VAR_7))
  FUNC_2(VAR_15, 1);

 FUNC_0(VAR_15->dev,
  "Handled: %s 0x%02x, %s 0x%02x in state %u [%s%s%s]\n",
  (VAR_11 & VAR_8) == 0 ? "received" : "R=",
  VAR_12,
  (VAR_11 & (VAR_8 | VAR_0)) ? "sent" : "S=",
  VAR_13,
  VAR_16,
  VAR_11 & VAR_0 ? " END_TRANS" : "",
  VAR_11 & VAR_7 ? " RCVD" : "",
  VAR_11 & VAR_8 ? " RNW" : "");







 FUNC_10(100);

 return VAR_4;
}
