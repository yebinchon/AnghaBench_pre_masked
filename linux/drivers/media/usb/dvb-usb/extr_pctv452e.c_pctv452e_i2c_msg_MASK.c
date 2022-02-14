
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pctv452e_state {int c; } ;
struct dvb_usb_device {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_1 (char*,int,int,int,int,int,int,int,int*) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_8, u8 VAR_9,
    const u8 *VAR_10, u8 VAR_11,
    u8 *VAR_12, u8 VAR_13)
{
 struct pctv452e_state *VAR_14 = (struct pctv452e_state *)VAR_8->priv;
 u8 *VAR_15;
 u8 VAR_16;
 int VAR_17;

 VAR_15 = FUNC_3(64, VAR_4);
 if (!VAR_15)
  return -VAR_2;

 VAR_16 = VAR_14->c++;

 VAR_17 = -VAR_0;
 if (VAR_11 > 64 - 7 || VAR_13 > 64 - 7)
  goto failed;

 VAR_15[0] = VAR_7;
 VAR_15[1] = VAR_16;
 VAR_15[2] = VAR_5;
 VAR_15[3] = VAR_11 + 3;
 VAR_15[4] = VAR_9 << 1;
 VAR_15[5] = VAR_11;
 VAR_15[6] = VAR_13;

 FUNC_4(VAR_15 + 7, VAR_10, VAR_11);

 VAR_17 = FUNC_0(VAR_8, VAR_15, 7 + VAR_11,
      VAR_15, 64,
                     0);
 if (VAR_17 < 0)
  goto failed;


 VAR_17 = -VAR_1;
 if (VAR_6 != VAR_15[0] || VAR_16 != VAR_15[1])
  goto failed;


 VAR_17 = -VAR_3;
 if (VAR_15[5] < VAR_11 || VAR_15[6] < VAR_13)
  goto failed;

 FUNC_4(VAR_12, VAR_15 + 7, VAR_13);

 FUNC_2(VAR_15);
 return VAR_13;

failed:
 FUNC_1("I2C error %d; %02X %02X  %02X %02X %02X -> %*ph",
      VAR_17, VAR_7, VAR_16, VAR_9 << 1, VAR_11, VAR_13,
      7, VAR_15);

 FUNC_2(VAR_15);
 return VAR_17;
}
