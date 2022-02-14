
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dmaptree {void* leafidx; int * stree; int budmin; void* height; void* l2nleafs; void* nleafs; } ;
struct dmap {int * wmap; struct dmaptree tree; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct dmaptree*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct dmap * VAR_4)
{
 struct dmaptree *VAR_5;
 s8 *VAR_6;
 int VAR_7;


 VAR_5 = &VAR_4->tree;
 VAR_5->nleafs = FUNC_0(VAR_3);
 VAR_5->l2nleafs = FUNC_0(VAR_1);
 VAR_5->leafidx = FUNC_0(VAR_2);
 VAR_5->height = FUNC_0(4);
 VAR_5->budmin = VAR_0;





 VAR_6 = VAR_5->stree + FUNC_3(VAR_5->leafidx);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  *VAR_6++ = FUNC_2((u8 *) & VAR_4->wmap[VAR_7]);


 return (FUNC_1(VAR_5));
}
