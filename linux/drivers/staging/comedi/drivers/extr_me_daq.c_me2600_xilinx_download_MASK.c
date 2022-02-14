
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct me_private_data {scalar_t__ plx_regbase; } ;
struct comedi_device {int class_dev; scalar_t__ mmio; struct me_private_data* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int const,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_8,
      const u8 *VAR_9, size_t VAR_10,
      unsigned long VAR_11)
{
 struct me_private_data *VAR_12 = VAR_8->private;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;


 FUNC_5(0x00, VAR_12->plx_regbase + VAR_2);


 VAR_13 = FUNC_2(VAR_8->mmio + VAR_7);


 FUNC_3(1);


 FUNC_4(0x00, VAR_8->mmio + 0x0);
 FUNC_3(1);
 if (VAR_10 < 16)
  return -VAR_0;

 VAR_14 = (((unsigned int)VAR_9[0] & 0xff) << 24) +
     (((unsigned int)VAR_9[1] & 0xff) << 16) +
     (((unsigned int)VAR_9[2] & 0xff) << 8) +
     ((unsigned int)VAR_9[3] & 0xff);





 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
  FUNC_4((VAR_9[16 + VAR_15] & 0xff), VAR_8->mmio + 0x0);


 for (VAR_15 = 0; VAR_15 < 5; VAR_15++)
  FUNC_4(0x00, VAR_8->mmio + 0x0);


 VAR_13 = FUNC_1(VAR_12->plx_regbase + VAR_2);
 if (VAR_13 & VAR_5) {

  FUNC_5(0x00, VAR_12->plx_regbase + VAR_2);
  FUNC_0(VAR_8->class_dev, "Xilinx download failed\n");
  return -VAR_1;
 }


 FUNC_3(1);


 FUNC_5(VAR_3 |
        VAR_4 |
        VAR_6,
        VAR_12->plx_regbase + VAR_2);

 return 0;
}
