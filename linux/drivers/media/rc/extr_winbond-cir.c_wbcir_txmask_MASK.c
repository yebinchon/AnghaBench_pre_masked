
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wbcir_data {scalar_t__ txstate; int txmask; int spinlock; scalar_t__ ebase; } ;
struct rc_dev {struct wbcir_data* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_3(struct rc_dev *VAR_4, u32 VAR_5)
{
 struct wbcir_data *VAR_6 = VAR_4->priv;
 unsigned long VAR_7;
 u8 VAR_8;


 if (VAR_5 > 15)
  return 4;


 switch (VAR_5) {
 case 0x1:
  VAR_8 = 0x0;
  break;
 case 0x2:
  VAR_8 = 0x1;
  break;
 case 0x4:
  VAR_8 = 0x2;
  break;
 case 0x8:
  VAR_8 = 0x3;
  break;
 default:
  return -VAR_1;
 }

 FUNC_0(&VAR_6->spinlock, VAR_7);
 if (VAR_6->txstate != VAR_3) {
  FUNC_1(&VAR_6->spinlock, VAR_7);
  return -VAR_0;
 }

 if (VAR_6->txmask != VAR_5) {
  FUNC_2(VAR_6->ebase + VAR_2, VAR_8, 0x0c);
  VAR_6->txmask = VAR_5;
 }

 FUNC_1(&VAR_6->spinlock, VAR_7);
 return 0;
}
