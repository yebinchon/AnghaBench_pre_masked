
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx23885_tsport {struct cx23885_dev* dev; } ;
struct cx23885_dev {int gpio_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 unsigned long VAR_12 ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(void *VAR_13, u8 VAR_14, int VAR_15,
    u8 VAR_16, int *VAR_17)
{
 struct cx23885_tsport *VAR_18 = VAR_13;
 struct cx23885_dev *VAR_19 = VAR_18->dev;
 int VAR_20;
 int VAR_21 = 0;
 unsigned long VAR_22;

 FUNC_5(&VAR_19->gpio_lock);


 FUNC_3(VAR_1, 0x00001000);
 FUNC_3(VAR_2, (0x00000200 | 0x00000100 | 0x00008000 | 0x00004000) |
    0x00000400 | (0xff & VAR_15));
 FUNC_0(VAR_2, 0x00000400);
 FUNC_3(VAR_2, (0x00000200 | 0x00000100 | 0x00008000 | 0x00004000) |
    0x00000800 | (0xff & (VAR_15 >> 8)));
 FUNC_0(VAR_2, 0x00000800);

 if (VAR_14)

  FUNC_3(VAR_1, 0x00001000 | 0x000000ff);
 else

  FUNC_3(VAR_2, (0x00000200 | 0x00000100 | 0x00008000 | 0x00004000) | VAR_16);


 FUNC_0(VAR_2, 0x00000100);


 FUNC_0(VAR_2, (VAR_14) ? 0x00004000 : 0x00008000);


 VAR_22 = VAR_12 + FUNC_4(1);
 while (!FUNC_7(VAR_12, VAR_22)) {
  VAR_21 = FUNC_1(VAR_2);
  if ((VAR_21 & 0x00001000) == 0)
   break;
  FUNC_8(50, 100);
 }

 FUNC_2(VAR_2, (0x00000200 | 0x00000100 | 0x00008000 | 0x00004000));
 *VAR_17 = VAR_21 & 0xff;

 FUNC_6(&VAR_19->gpio_lock);

 if (!VAR_14) {
  if (*VAR_17 < 0) {
   VAR_20 = -VAR_0;
   goto err;
  }
 }

 return 0;
err:
 return VAR_20;
}
