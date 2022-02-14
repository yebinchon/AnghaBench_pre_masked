
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct qede_dev {int* rss_ind_table; int rss_params_inited; int rss_caps; int rss_key; TYPE_2__* fp_array; } ;
struct qed_update_vport_rss_params {int rss_caps; int rss_key; int * rss_ind_table; } ;
struct TYPE_4__ {TYPE_1__* rxq; } ;
struct TYPE_3__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct qede_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (struct qede_dev*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_2 (int,size_t) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct qed_update_vport_rss_params*,int ,int) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(struct qede_dev *VAR_8,
     struct qed_update_vport_rss_params *VAR_9, u8 *VAR_10)
{
 bool VAR_11 = 0;
 int VAR_12;

 if (FUNC_0(VAR_8) <= 1) {
  FUNC_4(VAR_9, 0, sizeof(*VAR_9));
  *VAR_10 = 0;
  return;
 }


 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  if (VAR_8->rss_ind_table[VAR_12] >= FUNC_0(VAR_8)) {
   VAR_11 = 1;
   break;
  }
 }

 if (!(VAR_8->rss_params_inited & VAR_1) || VAR_11) {
  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   u16 VAR_13, VAR_14;

   VAR_14 = FUNC_0(VAR_8);
   VAR_13 = FUNC_2(VAR_12, VAR_14);
   VAR_8->rss_ind_table[VAR_12] = VAR_13;
  }
  VAR_8->rss_params_inited |= VAR_1;
 }


 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  u16 VAR_15 = FUNC_1(VAR_8, VAR_8->rss_ind_table[VAR_12]);

  VAR_9->rss_ind_table[VAR_12] = VAR_8->fp_array[VAR_15].rxq->handle;
 }

 if (!(VAR_8->rss_params_inited & VAR_2)) {
  FUNC_5(VAR_8->rss_key, sizeof(VAR_8->rss_key));
  VAR_8->rss_params_inited |= VAR_2;
 }
 FUNC_3(VAR_9->rss_key, VAR_8->rss_key, sizeof(VAR_9->rss_key));

 if (!(VAR_8->rss_params_inited & VAR_0)) {
  VAR_8->rss_caps = VAR_4 | VAR_6 |
      VAR_5 | VAR_7;
  VAR_8->rss_params_inited |= VAR_0;
 }
 VAR_9->rss_caps = VAR_8->rss_caps;

 *VAR_10 = 1;
}
