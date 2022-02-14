
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_qdisc {unsigned int num_children; struct nfp_qdisc** children; int use_cnt; } ;
struct nfp_abm_link {int dummy; } ;


 int VAR_0 ;
 struct nfp_qdisc* VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,unsigned int,unsigned int) ;
 struct nfp_qdisc* FUNC_1 (struct nfp_abm_link*,int ) ;
 int FUNC_2 (struct nfp_abm_link*) ;
 int FUNC_3 (struct nfp_qdisc*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_4(struct nfp_abm_link *VAR_2, u32 VAR_3, u32 VAR_4,
      unsigned int VAR_5)
{
 struct nfp_qdisc *VAR_6, *VAR_7;

 VAR_6 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_6)
  return 0;

 if (FUNC_0(VAR_5 >= VAR_6->num_children,
   "graft child out of bound %d >= %d\n",
   VAR_5, VAR_6->num_children))
  return -VAR_0;

 FUNC_3(VAR_6, VAR_5, VAR_5 + 1);

 VAR_7 = FUNC_1(VAR_2, VAR_4);
 if (VAR_7)
  VAR_7->use_cnt++;
 else
  VAR_7 = VAR_1;
 VAR_6->children[VAR_5] = VAR_7;

 FUNC_2(VAR_2);

 return 0;
}
