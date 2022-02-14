
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nicvf_rss_info {int enable; int cfg; int rss_size; int * ind_tbl; scalar_t__ hash_bits; int key; } ;
struct nicvf {int rx_queues; struct nicvf_rss_info rss_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct nicvf*) ;
 int FUNC_4 (struct nicvf*) ;
 int FUNC_5 (struct nicvf*,int ,int) ;
 int FUNC_6 (struct nicvf*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct nicvf *VAR_7)
{
 struct nicvf_rss_info *VAR_8 = &VAR_7->rss_info;
 int VAR_9;

 FUNC_4(VAR_7);

 if (VAR_6 != VAR_0) {
  VAR_8->enable = 0;
  VAR_8->hash_bits = 0;
  return 0;
 }

 VAR_8->enable = 1;

 FUNC_2(VAR_8->key, VAR_2 * sizeof(u64));
 FUNC_6(VAR_7);

 VAR_8->cfg = VAR_3 | VAR_4 | VAR_5;
 FUNC_5(VAR_7, VAR_1, VAR_8->cfg);

 VAR_8->hash_bits = FUNC_1(FUNC_7(VAR_8->rss_size));

 for (VAR_9 = 0; VAR_9 < VAR_8->rss_size; VAR_9++)
  VAR_8->ind_tbl[VAR_9] = FUNC_0(VAR_9,
              VAR_7->rx_queues);
 FUNC_3(VAR_7);
 return 1;
}
