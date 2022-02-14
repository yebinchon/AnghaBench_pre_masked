
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cx23888_ir_fifo_rec {int hw_fifo_data; } ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx23888_ir_state {int rx_kfifo_lock; int rx_kfifo; struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;


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
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct cx23885_dev*,int ) ;
 int FUNC_1 (struct cx23885_dev*,int ,int) ;
 int VAR_26 ;
 int FUNC_2 (struct cx23885_dev*,int ) ;
 unsigned int FUNC_3 (int *,unsigned char*,unsigned int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct cx23888_ir_state* FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (int,int ,struct v4l2_subdev*,char*,char*,char*,char*,char*,...) ;
 int FUNC_9 (struct v4l2_subdev*,char*) ;
 int FUNC_10 (struct v4l2_subdev*,int ,int*) ;

__attribute__((used)) static int FUNC_11(struct v4l2_subdev *VAR_27, u32 VAR_28,
      bool *VAR_29)
{
 struct cx23888_ir_state *VAR_30 = FUNC_7(VAR_27);
 struct cx23885_dev *VAR_31 = VAR_30->dev;
 unsigned long VAR_32;

 u32 VAR_33 = FUNC_0(VAR_31, VAR_2);
 u32 VAR_34 = FUNC_0(VAR_31, VAR_4);
 u32 VAR_35 = FUNC_0(VAR_31, VAR_6);

 union cx23888_ir_fifo_rec VAR_36[VAR_7];
 unsigned int VAR_37, VAR_38, VAR_39;
 u32 VAR_40, VAR_41;
 int VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;

 VAR_42 = VAR_35 & VAR_18;
 VAR_43 = VAR_35 & VAR_15;
 VAR_44 = VAR_35 & VAR_16;
 VAR_45 = VAR_35 & VAR_14;

 VAR_46 = VAR_34 & VAR_12;
 VAR_47 = VAR_34 & VAR_10;
 VAR_48 = VAR_34 & VAR_11;
 VAR_49 = VAR_34 & VAR_9;

 *VAR_29 = 0;
 FUNC_8(2, VAR_26, VAR_27, "IRQ Status:  %s %s %s %s %s %s\n",
   VAR_42 ? "tsr" : "   ", VAR_43 ? "rsr" : "   ",
   VAR_44 ? "rto" : "   ", VAR_45 ? "ror" : "   ",
   VAR_35 & VAR_17 ? "tby" : "   ",
   VAR_35 & VAR_13 ? "rby" : "   ");

 FUNC_8(2, VAR_26, VAR_27, "IRQ Enables: %s %s %s %s\n",
   VAR_46 ? "tse" : "   ", VAR_47 ? "rse" : "   ",
   VAR_48 ? "rte" : "   ", VAR_49 ? "roe" : "   ");




 if (VAR_46 && VAR_42) {
  FUNC_2(VAR_31, 0);
  VAR_40 = VAR_24;
  FUNC_10(VAR_27, VAR_25, &VAR_40);
  *VAR_29 = 1;
 }




 VAR_50 = 0;
 if ((VAR_47 && VAR_43) || (VAR_48 && VAR_44)) {





  for (VAR_37 = 0, VAR_41 = VAR_8;
       (VAR_41 & VAR_8) && !VAR_50; VAR_37 = 0) {
   for (VAR_38 = 0;
        (VAR_41 & VAR_8) && VAR_38 < VAR_7; VAR_38++) {
    VAR_41 = FUNC_0(VAR_31, VAR_3);
    VAR_36[VAR_37].hw_fifo_data = VAR_41 & ~VAR_8;
    VAR_37++;
   }
   if (VAR_37 == 0)
    break;
   VAR_38 = VAR_37 * sizeof(union cx23888_ir_fifo_rec);
   VAR_39 = FUNC_3(&VAR_30->rx_kfifo,
          (unsigned char *) VAR_36, VAR_38,
          &VAR_30->rx_kfifo_lock);
   if (VAR_39 != VAR_38)
    VAR_50++;
  }
  *VAR_29 = 1;
 }

 VAR_40 = 0;
 VAR_41 = 0;
 if (VAR_50) {
  VAR_40 |= VAR_23;
  FUNC_9(VAR_27, "IR receiver software FIFO overrun\n");
 }
 if (VAR_49 && VAR_45) {




  VAR_41 |= VAR_0;
  VAR_40 |= VAR_21;
  FUNC_9(VAR_27, "IR receiver hardware FIFO overrun\n");
 }
 if (VAR_48 && VAR_44) {




  VAR_41 |= VAR_1;
  VAR_40 |= VAR_19;
 }
 if (VAR_41) {

  FUNC_1(VAR_31, VAR_2, VAR_33 & ~VAR_41);
  FUNC_1(VAR_31, VAR_2, VAR_33);
  *VAR_29 = 1;
 }

 FUNC_5(&VAR_30->rx_kfifo_lock, VAR_32);
 if (FUNC_4(&VAR_30->rx_kfifo) >= VAR_5 / 2)
  VAR_40 |= VAR_20;
 FUNC_6(&VAR_30->rx_kfifo_lock, VAR_32);

 if (VAR_40)
  FUNC_10(VAR_27, VAR_22, &VAR_40);
 return 0;
}
