
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ logical_base; scalar_t__ physical_base; } ;
struct TYPE_3__ {scalar_t__ physical_base; } ;
struct s626_private {int i2c_adrs; int* dac_wbuf; TYPE_2__ ana_buf; TYPE_1__ rps_buf; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {scalar_t__ mmio; struct comedi_subdevice* read_subdev; struct s626_private* private; } ;
typedef scalar_t__ dma_addr_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_44 ;
 int FUNC_1 (struct comedi_device*,int *,int *,int ,int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int *,unsigned int*) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (struct comedi_device*) ;
 int VAR_45 ;
 int FUNC_6 (struct comedi_device*) ;
 int FUNC_7 (struct comedi_device*,int,int ) ;
 int FUNC_8 (struct comedi_device*,int *) ;
 int FUNC_9 (struct comedi_device*,int,int ) ;
 int FUNC_10 (struct comedi_device*,int) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct comedi_device *VAR_46)
{
 struct s626_private *VAR_47 = VAR_46->private;
 dma_addr_t VAR_48;
 u16 VAR_49;
 int VAR_50;
 int VAR_51;


 FUNC_7(VAR_46, VAR_20 | VAR_19 | VAR_21,
         VAR_31);
 FUNC_11(VAR_6 |
        (VAR_10 << VAR_7) | VAR_9 |
        VAR_5, VAR_46->mmio + VAR_27);


 FUNC_11(VAR_8, VAR_46->mmio + VAR_28);


 FUNC_11(VAR_14 | VAR_13, VAR_46->mmio + VAR_29);


 VAR_47->i2c_adrs = 0xA0;





 FUNC_11(VAR_16 | VAR_15,
        VAR_46->mmio + VAR_30);
 FUNC_7(VAR_46, VAR_22, VAR_32);
 VAR_51 = FUNC_1(VAR_46, ((void*)0), ((void*)0), VAR_45, 0);
 if (VAR_51)
  return VAR_51;





 for (VAR_50 = 0; VAR_50 < 2; VAR_50++) {
  FUNC_11(VAR_16, VAR_46->mmio + VAR_30);
  FUNC_7(VAR_46, VAR_22, VAR_32);
  VAR_51 = FUNC_1(VAR_46, ((void*)0),
         ((void*)0), VAR_45, 0);
  if (VAR_51)
   return VAR_51;
 }







 FUNC_11(VAR_2, VAR_46->mmio + VAR_25);







 FUNC_11(VAR_40 | VAR_42, VAR_46->mmio + VAR_39);
 FUNC_11(VAR_40 | VAR_42 | VAR_12,
        VAR_46->mmio + VAR_39 + 4);


 FUNC_11(VAR_0, VAR_46->mmio + VAR_24);






 FUNC_11((u32)VAR_47->rps_buf.physical_base,
        VAR_46->mmio + VAR_37);

 FUNC_11(0, VAR_46->mmio + VAR_38);

 FUNC_11(0, VAR_46->mmio + VAR_36);
 FUNC_11(0, VAR_46->mmio + VAR_34);







 VAR_48 = VAR_47->ana_buf.physical_base +
     (VAR_4 * sizeof(u32));
 FUNC_11((u32)VAR_48, VAR_46->mmio + VAR_26);
 FUNC_11((u32)(VAR_48 + sizeof(u32)),
        VAR_46->mmio + VAR_35);





 VAR_47->dac_wbuf = (u32 *)VAR_47->ana_buf.logical_base +
       VAR_4;







 FUNC_11(8, VAR_46->mmio + VAR_33);
 FUNC_11(VAR_44 | VAR_41 | VAR_43 | VAR_12,
        VAR_46->mmio + FUNC_0(0));
 FUNC_11(VAR_17, VAR_46->mmio + FUNC_0(1));


 FUNC_11(VAR_1, VAR_46->mmio + VAR_24);






 FUNC_6(VAR_46);
 VAR_51 = FUNC_6(VAR_46);
 if (VAR_51)
  return VAR_51;
 for (VAR_49 = 0; VAR_49 < VAR_3; VAR_49++) {
  VAR_51 = FUNC_9(VAR_46, VAR_49, 0);
  if (VAR_51)
   return VAR_51;
 }


 FUNC_3(VAR_46);







 FUNC_10(VAR_46, (FUNC_4(VAR_46, VAR_18) &
          VAR_23));


 FUNC_5(VAR_46);

 return 0;
}
