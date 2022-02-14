
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u32 ;
struct ddb {TYPE_2__* link; } ;
typedef enum fe_sec_tone_mode { ____Placeholder_fe_sec_tone_mode } fe_sec_tone_mode ;
struct TYPE_3__ {unsigned long long tone; } ;
struct TYPE_4__ {TYPE_1__ lnb; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct ddb*,unsigned long long,unsigned long long,int ) ;

__attribute__((used)) static int FUNC_1(struct ddb *VAR_2, u32 VAR_3, u32 VAR_4,
   enum fe_sec_tone_mode VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7 = (1ULL << VAR_4);

 switch (VAR_5) {
 case 129:
  if (!(VAR_2->link[VAR_3].lnb.tone & VAR_7))
   return 0;
  VAR_2->link[VAR_3].lnb.tone &= ~(1ULL << VAR_4);
  break;
 case 128:
  if (VAR_2->link[VAR_3].lnb.tone & VAR_7)
   return 0;
  VAR_2->link[VAR_3].lnb.tone |= (1ULL << VAR_4);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }
 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1);
 return VAR_6;
}
