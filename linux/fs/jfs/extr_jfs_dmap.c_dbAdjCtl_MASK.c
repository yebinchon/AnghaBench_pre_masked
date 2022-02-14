
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct dmapctl {scalar_t__ leafidx; int* stree; int budmin; } ;
struct bmap {int db_maxlevel; scalar_t__ db_maxfreebud; TYPE_1__* db_ipbmap; int db_l2nbperpage; } ;
typedef scalar_t__ s8 ;
typedef int s64 ;
typedef int dmtree_t ;
struct TYPE_2__ {int i_sb; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int ,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (scalar_t__) ;
 struct metapage* FUNC_9 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_10 (struct metapage*) ;
 int FUNC_11 (struct metapage*) ;

__attribute__((used)) static int
FUNC_12(struct bmap * VAR_5, s64 VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 struct metapage *VAR_10;
 s8 VAR_11;
 int VAR_12;
 s64 VAR_13;
 struct dmapctl *VAR_14;
 int VAR_15, VAR_16, VAR_17;




 VAR_13 = FUNC_0(VAR_6, VAR_5->db_l2nbperpage, VAR_9);
 VAR_10 = FUNC_9(VAR_5->db_ipbmap, VAR_13, VAR_3, 0);
 if (VAR_10 == ((void*)0))
  return -VAR_1;
 VAR_14 = (struct dmapctl *) VAR_10->data;

 if (VAR_14->leafidx != FUNC_3(VAR_0)) {
  FUNC_7(VAR_5->db_ipbmap->i_sb, "Corrupt dmapctl page\n");
  FUNC_10(VAR_10);
  return -VAR_1;
 }




 VAR_16 = FUNC_1(VAR_6, VAR_14->budmin);
 VAR_17 = VAR_16 + FUNC_8(VAR_14->leafidx);




 VAR_12 = VAR_14->stree[VAR_17];
 VAR_11 = VAR_14->stree[VAR_4];
 if (VAR_8) {
  if (VAR_12 == VAR_2) {
   VAR_15 = FUNC_4((dmtree_t *) VAR_14, VAR_16);
   if (VAR_15)
    return VAR_15;
   VAR_12 = VAR_14->stree[VAR_17];
  }
  FUNC_6((dmtree_t *) VAR_14, VAR_16, VAR_14->budmin, VAR_7);
 } else {
  VAR_15 = FUNC_5((dmtree_t *) VAR_14, VAR_16, VAR_7);
  if (VAR_15)
   return VAR_15;
 }
 if (VAR_14->stree[VAR_4] != VAR_11) {



  if (VAR_9 < VAR_5->db_maxlevel) {



   if ((VAR_15 =
        FUNC_12(VAR_5, VAR_6, VAR_14->stree[VAR_4], VAR_8,
          VAR_9 + 1))) {




    if (VAR_8) {
     FUNC_5((dmtree_t *) VAR_14, VAR_16,
            VAR_12);
    } else {






     if (VAR_14->stree[VAR_17] == VAR_2)
      FUNC_4((dmtree_t *)
           VAR_14, VAR_16);
     FUNC_6((dmtree_t *) VAR_14, VAR_16,
      VAR_14->budmin, VAR_12);
    }



    FUNC_10(VAR_10);
    return (VAR_15);
   }
  } else {




   FUNC_2(VAR_9 == VAR_5->db_maxlevel);
   if (VAR_5->db_maxfreebud != VAR_11) {
    FUNC_7(VAR_5->db_ipbmap->i_sb,
       "the maximum free buddy is not the old root\n");
   }
   VAR_5->db_maxfreebud = VAR_14->stree[VAR_4];
  }
 }



 FUNC_11(VAR_10);

 return (0);
}
