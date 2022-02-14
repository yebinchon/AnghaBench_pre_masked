
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct imon_context {int product; scalar_t__ kc; scalar_t__ last_keycode; int kc_lock; int idev; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,unsigned char) ;
 int FUNC_2 (int ,int ,char) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_6(struct imon_context *VAR_7,
        unsigned char *VAR_8, int VAR_9)
{
 signed char VAR_10 = 0x00, VAR_11 = 0x00;
 u8 VAR_12 = 1;
 bool VAR_13 = 1;
 int VAR_14 = 0;
 unsigned long VAR_15;

 FUNC_4(&VAR_7->kc_lock, VAR_15);


 if (VAR_7->product != 0xffdc && (VAR_8[0] & 0x01) && VAR_9 == 5) {
  VAR_10 = VAR_8[2];
  VAR_11 = VAR_8[3];
  VAR_12 = 1;

 } else if (VAR_7->product == 0xffdc && (VAR_8[0] & 0x40) &&
   !((VAR_8[1] & 0x01) || ((VAR_8[1] >> 2) & 0x01))) {
  VAR_10 = (VAR_8[1] & 0x08) | (VAR_8[1] & 0x10) >> 2 |
   (VAR_8[1] & 0x20) >> 4 | (VAR_8[1] & 0x40) >> 6;
  if (VAR_8[0] & 0x02)
   VAR_10 |= ~0x0f;
  VAR_10 = VAR_10 + VAR_10 / 2;
  VAR_11 = (VAR_8[2] & 0x08) | (VAR_8[2] & 0x10) >> 2 |
   (VAR_8[2] & 0x20) >> 4 | (VAR_8[2] & 0x40) >> 6;
  if (VAR_8[0] & 0x01)
   VAR_11 |= ~0x0f;
  VAR_11 = VAR_11 + VAR_11 / 2;
  VAR_12 = 2;

 } else if (VAR_7->product == 0xffdc && (VAR_8[0] == 0x68)) {
  VAR_12 = 2;

 } else if (VAR_7->kc == VAR_3 && (VAR_8[2] & 0x40) != 0x40) {
  VAR_14 = 1;
 } else if (VAR_7->kc == VAR_2 && (VAR_8[2] & 0x40) != 0x40) {
  VAR_14 = -1;
 } else
  VAR_13 = 0;

 FUNC_5(&VAR_7->kc_lock, VAR_15);

 if (VAR_13) {
  FUNC_0(VAR_7->dev, "sending mouse data via input subsystem\n");

  if (VAR_14) {
   FUNC_2(VAR_7->idev, VAR_4, VAR_14);
  } else if (VAR_10 || VAR_11) {
   FUNC_2(VAR_7->idev, VAR_5, VAR_10);
   FUNC_2(VAR_7->idev, VAR_6, VAR_11);
  } else {
   FUNC_1(VAR_7->idev, VAR_0, VAR_8[1] & 0x1);
   FUNC_1(VAR_7->idev, VAR_1,
      VAR_8[1] >> VAR_12 & 0x1);
  }
  FUNC_3(VAR_7->idev);
  FUNC_4(&VAR_7->kc_lock, VAR_15);
  VAR_7->last_keycode = VAR_7->kc;
  FUNC_5(&VAR_7->kc_lock, VAR_15);
 }

 return VAR_13;
}
