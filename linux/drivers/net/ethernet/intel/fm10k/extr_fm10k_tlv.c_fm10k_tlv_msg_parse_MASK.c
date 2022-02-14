
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fm10k_msg_data {int id; scalar_t__ (* func ) (struct fm10k_hw*,int**,struct fm10k_mbx_info*) ;int attr; } ;
struct fm10k_mbx_info {int dummy; } ;
struct fm10k_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int*,int**,int ) ;
 scalar_t__ FUNC_1 (struct fm10k_hw*,int**,struct fm10k_mbx_info*) ;

s32 FUNC_2(struct fm10k_hw *VAR_6, u32 *VAR_7,
   struct fm10k_mbx_info *VAR_8,
   const struct fm10k_msg_data *VAR_9)
{
 u32 *VAR_10[VAR_5];
 u32 VAR_11;
 s32 VAR_12;


 if (!VAR_7 || !VAR_9)
  return VAR_0;


 if (!(*VAR_7 & (VAR_2 << VAR_3)))
  return VAR_0;


 VAR_11 = *VAR_7 & VAR_4;

 while (VAR_9->id < VAR_11)
  VAR_9++;


 if (VAR_9->id != VAR_11) {
  while (VAR_9->id != VAR_1)
   VAR_9++;
 }


 VAR_12 = FUNC_0(VAR_7, VAR_10, VAR_9->attr);
 if (VAR_12 < 0)
  return VAR_12;

 return VAR_9->func(VAR_6, VAR_10, VAR_8);
}
