
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tbl_offset; int tbl_len; int * ind_tbl; int msg; int hash_bits; int vf_id; } ;
union nic_mbx {TYPE_1__ rss_cfg; } ;
struct nicvf_rss_info {int rss_size; int * ind_tbl; int hash_bits; } ;
struct nicvf {int vf_id; struct nicvf_rss_info rss_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct nicvf*,union nic_mbx*) ;

void FUNC_2(struct nicvf *VAR_3)
{
 union nic_mbx VAR_4 = {};
 struct nicvf_rss_info *VAR_5 = &VAR_3->rss_info;
 int VAR_6 = VAR_5->rss_size;
 int VAR_7, VAR_8 = 0;

 VAR_4.rss_cfg.vf_id = VAR_3->vf_id;
 VAR_4.rss_cfg.hash_bits = VAR_5->hash_bits;
 while (VAR_6) {
  VAR_4.rss_cfg.tbl_offset = VAR_8;
  VAR_4.rss_cfg.tbl_len = FUNC_0(VAR_6,
            VAR_2);
  VAR_4.rss_cfg.msg = VAR_4.rss_cfg.tbl_offset ?
     VAR_1 : VAR_0;

  for (VAR_7 = 0; VAR_7 < VAR_4.rss_cfg.tbl_len; VAR_7++)
   VAR_4.rss_cfg.ind_tbl[VAR_7] = VAR_5->ind_tbl[VAR_8++];

  FUNC_1(VAR_3, &VAR_4);

  VAR_6 -= VAR_4.rss_cfg.tbl_len;
 }
}
