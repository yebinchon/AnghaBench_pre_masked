
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmaptree {scalar_t__* stree; } ;
struct dmap {int nfree; int * wmap; int tree; } ;
struct bmap {int db_agl2size; int db_maxag; int* db_agfree; int db_nfree; } ;
typedef scalar_t__ s8 ;
typedef int s64 ;


 int FUNC_0 (struct bmap*) ;
 int FUNC_1 (struct bmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bmap*,int,scalar_t__,int,int ) ;
 int FUNC_5 (struct bmap*,struct dmap*,int,int) ;
 int FUNC_6 (struct dmap*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct bmap * VAR_5, struct dmap * VAR_6, s64 VAR_7,
    int VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 s8 VAR_17;
 struct dmaptree *VAR_18 = (struct dmaptree *) & VAR_6->tree;




 VAR_17 = VAR_18->stree[VAR_4];




 VAR_10 = VAR_7 & (VAR_0 - 1);
 VAR_11 = VAR_10 >> VAR_2;


 FUNC_2(VAR_10 + VAR_8 <= VAR_0);
 for (VAR_12 = VAR_8; VAR_12 > 0; VAR_12 -= VAR_13, VAR_10 += VAR_13) {



  VAR_15 = VAR_10 & (VAR_1 - 1);
  VAR_13 = FUNC_9(VAR_12, VAR_1 - VAR_15);



  if (VAR_13 < VAR_1) {



   VAR_6->wmap[VAR_11] |= FUNC_3(VAR_3 << (VAR_1 - VAR_13)
            >> VAR_15);

   VAR_11++;
  } else {





   VAR_14 = VAR_12 >> VAR_2;
   FUNC_8(&VAR_6->wmap[VAR_11], (int) VAR_3, VAR_14 * 4);


   VAR_13 = VAR_14 << VAR_2;
   VAR_11 += VAR_14;
  }
 }


 FUNC_7(&VAR_6->nfree, -VAR_8);


 FUNC_6(VAR_6);

 FUNC_0(VAR_5);





 VAR_16 = VAR_7 >> VAR_5->db_agl2size;
 if (VAR_16 > VAR_5->db_maxag)
  VAR_5->db_maxag = VAR_16;


 VAR_5->db_agfree[VAR_16] -= VAR_8;
 VAR_5->db_nfree -= VAR_8;

 FUNC_1(VAR_5);


 if (VAR_18->stree[VAR_4] == VAR_17)
  return (0);





 if ((VAR_9 = FUNC_4(VAR_5, VAR_7, VAR_18->stree[VAR_4], 1, 0)))
  FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8);

 return (VAR_9);
}
