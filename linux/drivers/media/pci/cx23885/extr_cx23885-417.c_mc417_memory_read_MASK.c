
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct cx23885_dev*) ;

int FUNC_3(struct cx23885_dev *VAR_15, u32 VAR_16, u32 *VAR_17)
{
 int VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;




 FUNC_1(VAR_5, VAR_3);


 VAR_19 = VAR_2 | VAR_3 | VAR_9 |
  VAR_14 | ((VAR_16 >> 16) & 0x3F);
 FUNC_1(VAR_6, VAR_19);
 VAR_19 |= VAR_0 | VAR_4;
 FUNC_1(VAR_6, VAR_19);


 VAR_19 = VAR_2 | VAR_3 | VAR_8 |
  ((VAR_16 >> 8) & 0xFF);
 FUNC_1(VAR_6, VAR_19);
 VAR_19 |= VAR_0 | VAR_4;
 FUNC_1(VAR_6, VAR_19);


 VAR_19 = VAR_2 | VAR_3 | VAR_7 |
  (VAR_16 & 0xFF);
 FUNC_1(VAR_6, VAR_19);
 VAR_19 |= VAR_0 | VAR_4;
 FUNC_1(VAR_6, VAR_19);


 VAR_18 = FUNC_2(VAR_15);


 FUNC_1(VAR_5, VAR_3 | VAR_1);


 VAR_19 = VAR_2 | VAR_3 | VAR_13;
 FUNC_1(VAR_6, VAR_19);


 VAR_19 = VAR_4 | VAR_3 | VAR_13;
 FUNC_1(VAR_6, VAR_19);


 VAR_20 = FUNC_0(VAR_6);
 VAR_21 = ((VAR_20 & 0x000000FF) << 24);


 VAR_19 = VAR_4 | VAR_2 | VAR_0 | VAR_3;
 FUNC_1(VAR_6, VAR_19);


 VAR_19 = VAR_2 | VAR_3 | VAR_12;
 FUNC_1(VAR_6, VAR_19);
 VAR_19 = VAR_4 | VAR_3 | VAR_12;
 FUNC_1(VAR_6, VAR_19);
 VAR_20 = FUNC_0(VAR_6);
 VAR_21 |= ((VAR_20 & 0x000000FF) << 16);
 VAR_19 = VAR_4 | VAR_2 | VAR_0 | VAR_3;
 FUNC_1(VAR_6, VAR_19);


 VAR_19 = VAR_2 | VAR_3 | VAR_11;
 FUNC_1(VAR_6, VAR_19);
 VAR_19 = VAR_4 | VAR_3 | VAR_11;
 FUNC_1(VAR_6, VAR_19);
 VAR_20 = FUNC_0(VAR_6);
 VAR_21 |= ((VAR_20 & 0x000000FF) << 8);
 VAR_19 = VAR_4 | VAR_2 | VAR_0 | VAR_3;
 FUNC_1(VAR_6, VAR_19);


 VAR_19 = VAR_2 | VAR_3 | VAR_10;
 FUNC_1(VAR_6, VAR_19);
 VAR_19 = VAR_4 | VAR_3 | VAR_10;
 FUNC_1(VAR_6, VAR_19);
 VAR_20 = FUNC_0(VAR_6);
 VAR_21 |= (VAR_20 & 0x000000FF);
 VAR_19 = VAR_4 | VAR_2 | VAR_0 | VAR_3;
 FUNC_1(VAR_6, VAR_19);

 *VAR_17 = VAR_21;

 return VAR_18;
}
