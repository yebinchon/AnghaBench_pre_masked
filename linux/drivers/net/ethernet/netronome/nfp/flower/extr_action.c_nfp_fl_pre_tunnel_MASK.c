
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len_lw; int jump_id; } ;
struct nfp_fl_pre_tunnel {TYPE_1__ head; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct nfp_fl_pre_tunnel*,int ,size_t) ;

__attribute__((used)) static struct nfp_fl_pre_tunnel *FUNC_2(char *VAR_2, int VAR_3)
{
 size_t VAR_4 = sizeof(struct nfp_fl_pre_tunnel);
 struct nfp_fl_pre_tunnel *VAR_5;




 if (VAR_3)
  FUNC_0(VAR_2 + VAR_4, VAR_2, VAR_3);

 VAR_5 = (struct nfp_fl_pre_tunnel *)VAR_2;

 FUNC_1(VAR_5, 0, VAR_4);

 VAR_5->head.jump_id = VAR_0;
 VAR_5->head.len_lw = VAR_4 >> VAR_1;

 return VAR_5;
}
