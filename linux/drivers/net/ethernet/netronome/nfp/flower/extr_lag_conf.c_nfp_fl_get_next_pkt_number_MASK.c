
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_fl_lag {unsigned int pkt_num; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct nfp_fl_lag *VAR_1)
{
 VAR_1->pkt_num++;
 VAR_1->pkt_num &= VAR_0;

 return VAR_1->pkt_num;
}
