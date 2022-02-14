
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wbcir_data {scalar_t__ txstate; int txcarrier; int spinlock; scalar_t__ sbase; } ;
struct rc_dev {struct wbcir_data* priv; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct wbcir_data*,int ) ;
 int FUNC_4 (scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_5(struct rc_dev *VAR_5, u32 VAR_6)
{
 struct wbcir_data *VAR_7 = VAR_5->priv;
 unsigned long VAR_8;
 u8 VAR_9;
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_6, 1000);
 if (VAR_10 < 30 || VAR_10 > 60)
  return -VAR_1;

 switch (VAR_10) {
 case 58:
 case 59:
 case 60:
  VAR_9 = VAR_10 - 58;
  VAR_10 *= 1000;
  break;
 case 57:
  VAR_9 = VAR_10 - 27;
  VAR_10 = 56900;
  break;
 default:
  VAR_9 = VAR_10 - 27;
  VAR_10 *= 1000;
  break;
 }

 FUNC_1(&VAR_7->spinlock, VAR_8);
 if (VAR_7->txstate != VAR_4) {
  FUNC_2(&VAR_7->spinlock, VAR_8);
  return -VAR_0;
 }

 if (VAR_7->txcarrier != VAR_10) {
  FUNC_3(VAR_7, VAR_2);
  FUNC_4(VAR_7->sbase + VAR_3, VAR_9, 0x1F);
  VAR_7->txcarrier = VAR_10;
 }

 FUNC_2(&VAR_7->spinlock, VAR_8);
 return 0;
}
