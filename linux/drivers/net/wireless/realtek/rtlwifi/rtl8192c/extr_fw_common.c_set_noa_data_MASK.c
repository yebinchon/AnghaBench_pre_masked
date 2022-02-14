
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_p2p_ps_info {int noa_num; scalar_t__* noa_duration; scalar_t__* noa_interval; scalar_t__* noa_start_time; int* noa_count_type; } ;
struct p2p_ps_offload_t {int noa0_en; int noa1_en; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtl_priv*,int ) ;
 int FUNC_1 (struct rtl_priv*,int,int) ;
 int FUNC_2 (struct rtl_priv*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct rtl_priv *VAR_1,
    struct rtl_p2p_ps_info *VAR_2,
    struct p2p_ps_offload_t *VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6;


 for (VAR_4 = 0 ; VAR_4 < VAR_2->noa_num ; VAR_4++) {

  FUNC_1(VAR_1, 0x5cf, (VAR_4 << 4));
  if (VAR_4 == 0)
   VAR_3->noa0_en = 1;
  else
   VAR_3->noa1_en = 1;


  FUNC_2(VAR_1, 0x5E0,
    VAR_2->noa_duration[VAR_4]);
  FUNC_2(VAR_1, 0x5E4,
    VAR_2->noa_interval[VAR_4]);


  VAR_6 = FUNC_0(VAR_1, VAR_0);

  VAR_5 = VAR_2->noa_start_time[VAR_4];
  if (VAR_2->noa_count_type[VAR_4] != 1) {
   while (VAR_5 <= (VAR_6+(50*1024))) {
    VAR_5 += VAR_2->noa_interval[VAR_4];
    if (VAR_2->noa_count_type[VAR_4] != 255)
     VAR_2->noa_count_type[VAR_4]--;
   }
  }
  FUNC_2(VAR_1, 0x5E8, VAR_5);
  FUNC_2(VAR_1, 0x5EC,
    VAR_2->noa_count_type[VAR_4]);
 }
}
