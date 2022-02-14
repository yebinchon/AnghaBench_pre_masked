
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int dummy; } ;
struct nfp_dumpspec {int size; int data; } ;
struct nfp_dump_state {scalar_t__ dumped_size; scalar_t__ buf_size; void* p; int requested_level; } ;
struct ethtool_dump {scalar_t__ len; int flag; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_dump_state*) ;
 int VAR_0 ;
 int FUNC_2 (struct nfp_pf*,int ,int ,struct nfp_dump_state*,int ) ;

int FUNC_3(struct nfp_pf *VAR_1, struct nfp_dumpspec *VAR_2,
     struct ethtool_dump *VAR_3, void *VAR_4)
{
 struct nfp_dump_state VAR_5;
 int VAR_6;

 VAR_5.requested_level = FUNC_0(VAR_3->flag);
 VAR_5.dumped_size = 0;
 VAR_5.p = VAR_4;
 VAR_5.buf_size = VAR_3->len;

 VAR_6 = FUNC_1(&VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_2->data, VAR_2->size, &VAR_5,
    VAR_0);
 if (VAR_6)
  return VAR_6;




 VAR_3->len = VAR_5.dumped_size;

 return 0;
}
