
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; int dev; } ;
struct nf_hook_state {int dummy; } ;
struct ipvl_addr {TYPE_1__* master; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned int,int,int) ;
 struct ipvl_addr* FUNC_1 (struct sk_buff*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(void *VAR_2, struct sk_buff *VAR_3,
        const struct nf_hook_state *VAR_4)
{
 struct ipvl_addr *VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_1(VAR_3, VAR_3->dev);
 if (!VAR_5)
  goto out;

 VAR_3->dev = VAR_5->master->dev;
 VAR_6 = VAR_3->len + VAR_0;
 FUNC_0(VAR_5->master, VAR_6, 1, 0);
out:
 return VAR_1;
}
