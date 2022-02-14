
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int (* read ) (int ,int ,int*) ;int client; } ;
struct adt7316_chip_info {int id; TYPE_1__ bus; } ;
typedef int s64 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct iio_dev*) ;
 struct adt7316_chip_info* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int ,int ) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_12, void *VAR_13)
{
 struct iio_dev *VAR_14 = VAR_13;
 struct adt7316_chip_info *VAR_15 = FUNC_3(VAR_14);
 u8 VAR_16, VAR_17;
 int VAR_18;
 s64 VAR_19;

 VAR_18 = VAR_15->bus.read(VAR_15->bus.client, VAR_1, &VAR_16);
 if (!VAR_18) {
  if ((VAR_15->id & VAR_4) != VAR_3)
   VAR_16 &= 0x1F;

  VAR_19 = FUNC_2(VAR_14);
  if (VAR_16 & FUNC_0(0))
   FUNC_4(VAR_14,
           FUNC_1(VAR_9, 0,
           VAR_8,
           VAR_7),
           VAR_19);
  if (VAR_16 & FUNC_0(1))
   FUNC_4(VAR_14,
           FUNC_1(VAR_9, 0,
           VAR_8,
           VAR_6),
           VAR_19);
  if (VAR_16 & FUNC_0(2))
   FUNC_4(VAR_14,
           FUNC_1(VAR_9, 1,
           VAR_8,
           VAR_7),
           VAR_19);
  if (VAR_16 & FUNC_0(3))
   FUNC_4(VAR_14,
           FUNC_1(VAR_9, 1,
           VAR_8,
           VAR_6),
           VAR_19);
  if (VAR_16 & FUNC_0(5))
   FUNC_4(VAR_14,
           FUNC_1(VAR_10, 1,
           VAR_8,
           VAR_5),
           VAR_19);
  if (VAR_16 & FUNC_0(6))
   FUNC_4(VAR_14,
           FUNC_1(VAR_10, 2,
           VAR_8,
           VAR_5),
           VAR_19);
  if (VAR_16 & FUNC_0(7))
   FUNC_4(VAR_14,
           FUNC_1(VAR_10, 3,
           VAR_8,
           VAR_5),
           VAR_19);
  }
 VAR_18 = VAR_15->bus.read(VAR_15->bus.client, VAR_2, &VAR_17);
 if (!VAR_18) {
  if (VAR_17 & VAR_0)
   FUNC_4(VAR_14,
           FUNC_1(VAR_10,
           0,
           VAR_8,
           VAR_7),
           FUNC_2(VAR_14));
 }

 return VAR_11;
}
