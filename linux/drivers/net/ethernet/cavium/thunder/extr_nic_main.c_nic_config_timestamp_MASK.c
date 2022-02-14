
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct set_ptp {scalar_t__ enable; } ;
struct pkind_cfg {int hdr_sl; int maxlen; } ;
struct nicpf {int num_vf_en; int node; int * vf_lmac_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (struct nicpf*,int) ;
 int FUNC_4 (struct nicpf*,int,int) ;

__attribute__((used)) static void FUNC_5(struct nicpf *VAR_7, int VAR_8, struct set_ptp *VAR_9)
{
 struct pkind_cfg *VAR_10;
 u8 VAR_11, VAR_12;
 u64 VAR_13, VAR_14;

 if (VAR_8 >= VAR_7->num_vf_en)
  return;

 VAR_12 = FUNC_0(VAR_7->vf_lmac_map[VAR_8]);
 VAR_11 = FUNC_1(VAR_7->vf_lmac_map[VAR_8]);

 VAR_14 = VAR_11 + VAR_12 * VAR_4;
 VAR_13 = FUNC_3(VAR_7, VAR_5 | (VAR_14 << 3));
 VAR_10 = (struct pkind_cfg *)&VAR_13;

 if (VAR_9->enable && !VAR_10->hdr_sl) {



  VAR_10->hdr_sl = 4;

  VAR_10->maxlen += (VAR_10->hdr_sl * 2);
  FUNC_2(VAR_7->node, VAR_12, VAR_11, 1);
  FUNC_4(VAR_7, VAR_6 | (1 << 3),
         (VAR_2 << 16) | VAR_0);
 } else if (!VAR_9->enable && VAR_10->hdr_sl) {
  VAR_10->maxlen -= (VAR_10->hdr_sl * 2);
  VAR_10->hdr_sl = 0;
  FUNC_2(VAR_7->node, VAR_12, VAR_11, 0);
  FUNC_4(VAR_7, VAR_6 | (1 << 3),
         (VAR_3 << 16) | VAR_1);
 }

 FUNC_4(VAR_7, VAR_5 | (VAR_14 << 3), VAR_13);
}
