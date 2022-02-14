
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cx25840_ir_fifo_rec {int hw_fifo_data; } ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cx25840_state {int dummy; } ;
struct cx25840_ir_state {int rx_kfifo_lock; int rx_kfifo; struct i2c_client* c; } ;


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
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 int VAR_28 ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 scalar_t__ FUNC_3 (struct cx25840_state*) ;
 scalar_t__ FUNC_4 (struct cx25840_state*) ;
 unsigned int FUNC_5 (int *,unsigned char*,unsigned int,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct cx25840_ir_state* FUNC_9 (struct v4l2_subdev*) ;
 struct cx25840_state* FUNC_10 (struct v4l2_subdev*) ;
 int FUNC_11 (int,int ,struct v4l2_subdev*,char*,char*,char*,char*,char*,...) ;
 int FUNC_12 (struct v4l2_subdev*,char*) ;
 int FUNC_13 (struct v4l2_subdev*,int ,int*) ;

int FUNC_14(struct v4l2_subdev *VAR_29, u32 VAR_30, bool *VAR_31)
{
 struct cx25840_state *VAR_32 = FUNC_10(VAR_29);
 struct cx25840_ir_state *VAR_33 = FUNC_9(VAR_29);
 struct i2c_client *VAR_34 = ((void*)0);
 unsigned long VAR_35;

 union cx25840_ir_fifo_rec VAR_36[VAR_8];
 unsigned int VAR_37, VAR_38, VAR_39;
 u32 VAR_40, VAR_41;
 int VAR_42, VAR_43, VAR_44, VAR_45, VAR_46, VAR_47, VAR_48, VAR_49, VAR_50;
 u32 VAR_51, VAR_52, VAR_53;

 *VAR_31 = 0;
 if (VAR_33 == ((void*)0))
  return -VAR_7;

 VAR_34 = VAR_33->c;


 if (!(FUNC_3(VAR_32) || FUNC_4(VAR_32)))
  return -VAR_7;

 VAR_51 = FUNC_0(VAR_34, VAR_2);
 VAR_52 = FUNC_0(VAR_34, VAR_4);
 if (FUNC_3(VAR_32) || FUNC_4(VAR_32))
  VAR_52 ^= VAR_10;
 VAR_53 = FUNC_0(VAR_34, VAR_6);

 VAR_42 = VAR_53 & VAR_20;
 VAR_43 = VAR_53 & VAR_17;
 VAR_44 = VAR_53 & VAR_18;
 VAR_45 = VAR_53 & VAR_16;

 VAR_46 = VAR_52 & VAR_14;
 VAR_47 = VAR_52 & VAR_12;
 VAR_48 = VAR_52 & VAR_13;
 VAR_49 = VAR_52 & VAR_11;

 FUNC_11(2, VAR_28, VAR_29, "IR IRQ Status:  %s %s %s %s %s %s\n",
   VAR_42 ? "tsr" : "   ", VAR_43 ? "rsr" : "   ",
   VAR_44 ? "rto" : "   ", VAR_45 ? "ror" : "   ",
   VAR_53 & VAR_19 ? "tby" : "   ",
   VAR_53 & VAR_15 ? "rby" : "   ");

 FUNC_11(2, VAR_28, VAR_29, "IR IRQ Enables: %s %s %s %s\n",
   VAR_46 ? "tse" : "   ", VAR_47 ? "rse" : "   ",
   VAR_48 ? "rte" : "   ", VAR_49 ? "roe" : "   ");




 if (VAR_46 && VAR_42) {
  FUNC_2(VAR_29, 0);
  VAR_40 = VAR_26;
  FUNC_13(VAR_29, VAR_27, &VAR_40);
  *VAR_31 = 1;
 }




 VAR_50 = 0;
 if ((VAR_47 && VAR_43) || (VAR_48 && VAR_44)) {





  for (VAR_37 = 0, VAR_41 = VAR_9;
       (VAR_41 & VAR_9) && !VAR_50; VAR_37 = 0) {
   for (VAR_38 = 0;
        (VAR_41 & VAR_9) && VAR_38 < VAR_8; VAR_38++) {
    VAR_41 = FUNC_0(VAR_34, VAR_3);
    VAR_36[VAR_37].hw_fifo_data = VAR_41 & ~VAR_9;
    VAR_37++;
   }
   if (VAR_37 == 0)
    break;
   VAR_38 = VAR_37 * sizeof(union cx25840_ir_fifo_rec);
   VAR_39 = FUNC_5(&VAR_33->rx_kfifo,
         (unsigned char *) VAR_36, VAR_38,
         &VAR_33->rx_kfifo_lock);
   if (VAR_39 != VAR_38)
    VAR_50++;
  }
  *VAR_31 = 1;
 }

 VAR_40 = 0;
 VAR_41 = 0;
 if (VAR_50) {
  VAR_40 |= VAR_25;
  FUNC_12(VAR_29, "IR receiver software FIFO overrun\n");
 }
 if (VAR_49 && VAR_45) {




  VAR_41 |= VAR_0;
  VAR_40 |= VAR_23;
  FUNC_12(VAR_29, "IR receiver hardware FIFO overrun\n");
 }
 if (VAR_48 && VAR_44) {




  VAR_41 |= VAR_1;
  VAR_40 |= VAR_21;
 }
 if (VAR_41) {

  FUNC_1(VAR_34, VAR_2, VAR_51 & ~VAR_41);
  FUNC_1(VAR_34, VAR_2, VAR_51);
  *VAR_31 = 1;
 }
 FUNC_7(&VAR_33->rx_kfifo_lock, VAR_35);
 if (FUNC_6(&VAR_33->rx_kfifo) >= VAR_5 / 2)
  VAR_40 |= VAR_22;
 FUNC_8(&VAR_33->rx_kfifo_lock, VAR_35);

 if (VAR_40)
  FUNC_13(VAR_29, VAR_24, &VAR_40);
 return 0;
}
