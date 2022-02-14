
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_dev {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct hinic_dev*,int ) ;
 int FUNC_1 (struct hinic_dev*,int ) ;
 int FUNC_2 (struct hinic_dev*,int,int ,int ) ;
 int FUNC_3 (struct hinic_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct hinic_dev *VAR_9,
   netdev_features_t VAR_10,
   netdev_features_t VAR_11, bool VAR_12)
{
 netdev_features_t VAR_13 = VAR_12 ? ~0 : VAR_10 ^ VAR_11;
 u32 VAR_14 = VAR_2;
 int VAR_15 = 0;

 if (VAR_13 & VAR_8)
  VAR_15 = FUNC_0(VAR_9, (VAR_11 & VAR_8) ?
      VAR_4 : VAR_3);

 if (VAR_13 & VAR_7)
  VAR_15 = FUNC_1(VAR_9, VAR_14);

 if (VAR_13 & VAR_6) {
  VAR_15 = FUNC_2(VAR_9,
          !!(VAR_11 & VAR_6),
          VAR_1,
          VAR_0);
 }

 if (VAR_13 & VAR_5)
  VAR_15 = FUNC_3(VAR_9,
      !!(VAR_11 &
         VAR_5));

 return VAR_15;
}
