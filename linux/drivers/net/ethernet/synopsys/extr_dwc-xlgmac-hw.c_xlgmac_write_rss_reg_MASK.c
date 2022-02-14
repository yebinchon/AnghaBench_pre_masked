
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlgmac_pdata {int rss_mutex; scalar_t__ mac_regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct xlgmac_pdata *VAR_11, unsigned int VAR_12,
    unsigned int VAR_13, unsigned int VAR_14)
{
 unsigned int VAR_15;
 int VAR_16 = 0;
 u32 VAR_17;

 FUNC_2(&VAR_11->rss_mutex);

 VAR_17 = FUNC_0(FUNC_4(VAR_11->mac_regs + VAR_1),
         VAR_7, VAR_6);
 if (VAR_17) {
  VAR_16 = -VAR_0;
  goto unlock;
 }

 FUNC_6(VAR_14, VAR_11->mac_regs + VAR_10);

 VAR_17 = FUNC_4(VAR_11->mac_regs + VAR_1);
 VAR_17 = FUNC_1(VAR_17, VAR_9,
         VAR_8, VAR_13);
 VAR_17 = FUNC_1(VAR_17, VAR_3,
         VAR_2, VAR_12);
 VAR_17 = FUNC_1(VAR_17, VAR_5,
         VAR_4, 0);
 VAR_17 = FUNC_1(VAR_17, VAR_7,
         VAR_6, 1);
 FUNC_6(VAR_17, VAR_11->mac_regs + VAR_1);

 VAR_15 = 1000;
 while (VAR_15--) {
  VAR_17 = FUNC_0(FUNC_4(VAR_11->mac_regs + VAR_1),
          VAR_7,
          VAR_6);
  if (!VAR_17)
   goto unlock;

  FUNC_5(1000, 1500);
 }

 VAR_16 = -VAR_0;

unlock:
 FUNC_3(&VAR_11->rss_mutex);

 return VAR_16;
}
