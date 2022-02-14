
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rt2x00_dev {int intf_ap_count; int flags; } ;


 int VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 unsigned int const VAR_3 ;
 unsigned int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct rt2x00_dev *VAR_14,
        const unsigned int VAR_15)
{
 u16 VAR_16;







 VAR_16 = FUNC_0(VAR_14, VAR_5);
 FUNC_2(&VAR_16, VAR_8,
      !(VAR_15 & VAR_3));
 FUNC_2(&VAR_16, VAR_11,
      !(VAR_15 & VAR_4));
 FUNC_2(&VAR_16, VAR_7,
      !(VAR_15 & VAR_2));
 FUNC_2(&VAR_16, VAR_10,
      !FUNC_3(VAR_0, &VAR_14->flags));
 FUNC_2(&VAR_16, VAR_12,
      !FUNC_3(VAR_0, &VAR_14->flags) &&
      !VAR_14->intf_ap_count);
 FUNC_2(&VAR_16, VAR_13, 1);
 FUNC_2(&VAR_16, VAR_9,
      !(VAR_15 & VAR_1));
 FUNC_2(&VAR_16, VAR_6, 0);
 FUNC_1(VAR_14, VAR_5, VAR_16);
}
