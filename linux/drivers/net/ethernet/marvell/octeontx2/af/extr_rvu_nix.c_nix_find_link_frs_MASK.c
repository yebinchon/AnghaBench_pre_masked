
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rvu_pfvf {int maxlen; int minlen; } ;
struct rvu {struct rvu_pfvf* pf; struct rvu_pfvf* hwvf; } ;
struct nix_frs_cfg {int maxlen; int minlen; scalar_t__ update_minlen; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rvu*,int,int*,int*) ;
 struct rvu_pfvf* FUNC_2 (struct rvu*,int ) ;

__attribute__((used)) static void FUNC_3(struct rvu *VAR_0,
         struct nix_frs_cfg *VAR_1, u16 VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 struct rvu_pfvf *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;


 VAR_4 = FUNC_2(VAR_0, VAR_2);
 VAR_4->maxlen = VAR_1->maxlen;
 if (VAR_1->update_minlen)
  VAR_4->minlen = VAR_1->minlen;

 VAR_5 = VAR_1->maxlen;
 VAR_6 = VAR_1->update_minlen ? VAR_1->minlen : 0;


 FUNC_1(VAR_0, VAR_3, &VAR_7, &VAR_8);


 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_4 = &VAR_0->hwvf[VAR_8 + VAR_9];
  if (VAR_4->maxlen > VAR_5)
   VAR_5 = VAR_4->maxlen;
  if (VAR_1->update_minlen &&
      VAR_4->minlen && VAR_4->minlen < VAR_6)
   VAR_6 = VAR_4->minlen;
 }


 VAR_4 = &VAR_0->pf[VAR_3];
 if (VAR_4->maxlen > VAR_5)
  VAR_5 = VAR_4->maxlen;
 if (VAR_1->update_minlen &&
     VAR_4->minlen && VAR_4->minlen < VAR_6)
  VAR_6 = VAR_4->minlen;


 VAR_1->maxlen = VAR_5;
 if (VAR_1->update_minlen)
  VAR_1->minlen = VAR_6;
}
