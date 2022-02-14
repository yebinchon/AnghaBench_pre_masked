
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bq24190_dev_info {int watchdog; int sys_min; int iprechg; int iterm; } ;


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
 int FUNC_0 (struct bq24190_dev_info*,int ,int*) ;
 int FUNC_1 (struct bq24190_dev_info*,int ,int) ;
 int FUNC_2 (struct bq24190_dev_info*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct bq24190_dev_info *VAR_11)
{
 int VAR_12;
 u8 VAR_13;

 VAR_12 = FUNC_0(VAR_11, VAR_0, &VAR_13);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11->watchdog = ((VAR_13 & VAR_1) >>
     VAR_2);
 VAR_13 &= ~VAR_1;

 VAR_12 = FUNC_1(VAR_11, VAR_0, VAR_13);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_11->sys_min) {
  VAR_13 = VAR_11->sys_min / 100 - 30;
  VAR_12 = FUNC_2(VAR_11, VAR_8,
      VAR_9,
      VAR_10,
      VAR_13);
  if (VAR_12 < 0)
   return VAR_12;
 }

 if (VAR_11->iprechg) {
  VAR_13 = VAR_11->iprechg / 128 - 1;
  VAR_12 = FUNC_2(VAR_11, VAR_3,
      VAR_4,
      VAR_5,
      VAR_13);
  if (VAR_12 < 0)
   return VAR_12;
 }

 if (VAR_11->iterm) {
  VAR_13 = VAR_11->iterm / 128 - 1;
  VAR_12 = FUNC_2(VAR_11, VAR_3,
      VAR_6,
      VAR_7,
      VAR_13);
  if (VAR_12 < 0)
   return VAR_12;
 }

 return 0;
}
