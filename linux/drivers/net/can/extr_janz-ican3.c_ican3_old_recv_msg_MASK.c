
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ican3_msg {int dummy; } ;
struct ican3_dev {scalar_t__ dpm; int ndev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct ican3_dev*,unsigned int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct ican3_msg*,scalar_t__,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct ican3_dev *VAR_10, struct ican3_msg *VAR_11)
{
 unsigned int VAR_12, VAR_13;
 u8 VAR_14, VAR_15, VAR_16;


 FUNC_0(VAR_10, VAR_7);
 VAR_15 = FUNC_1(VAR_10->dpm + VAR_2);
 VAR_14 = FUNC_1(VAR_10->dpm + VAR_1);
 VAR_16 = VAR_14 ^ VAR_15;

 if ((VAR_16 & VAR_6) == 0x00) {
  FUNC_4(VAR_10->ndev, "no mbox for reading\n");
  return -VAR_0;
 }


 if ((VAR_16 & VAR_6) == VAR_6)
  VAR_12 = (VAR_16 & VAR_5) ? VAR_3 : VAR_4;
 else
  VAR_12 = (VAR_16 & VAR_3) ? VAR_3 : VAR_4;


 VAR_13 = (VAR_12 == VAR_3) ? VAR_8 : VAR_9;
 FUNC_0(VAR_10, VAR_13);
 FUNC_3(VAR_11, VAR_10->dpm, sizeof(*VAR_11));





 VAR_14 ^= VAR_12;

 FUNC_0(VAR_10, VAR_7);
 FUNC_2(VAR_14, VAR_10->dpm + VAR_1);
 return 0;
}
