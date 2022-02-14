
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nicvf_rss_info {int * key; } ;
struct nicvf {struct nicvf_rss_info rss_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nicvf*,int,int ) ;

void FUNC_1(struct nicvf *VAR_2)
{
 struct nicvf_rss_info *VAR_3 = &VAR_2->rss_info;
 u64 VAR_4 = VAR_0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(VAR_2, VAR_4, VAR_3->key[VAR_5]);
  VAR_4 += sizeof(u64);
 }
}
