
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct inode {int i_sb; } ;
struct dmap {int dummy; } ;
struct bmap {scalar_t__ db_mapsize; int db_agl2size; int db_agsize; int * db_active; int db_l2nbperpage; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {int active_ag; } ;
struct TYPE_3__ {struct bmap* bmap; struct inode* ipbmap; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;
 TYPE_2__* FUNC_6 (struct inode*) ;
 TYPE_1__* FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct bmap*,int,scalar_t__,int,scalar_t__*) ;
 int FUNC_11 (struct bmap*,scalar_t__,int,scalar_t__*) ;
 int FUNC_12 (struct bmap*,struct dmap*,int,int,scalar_t__*) ;
 int FUNC_13 (struct bmap*,struct dmap*,scalar_t__,int,int,scalar_t__*) ;
 int FUNC_14 (struct bmap*,struct dmap*,scalar_t__,int) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (struct metapage*) ;
 struct metapage* FUNC_18 (struct inode*,scalar_t__,int ,int ) ;
 int FUNC_19 (struct metapage*) ;

int FUNC_20(struct inode *VAR_5, s64 VAR_6, s64 VAR_7, s64 * VAR_8)
{
 int VAR_9, VAR_10;
 struct inode *VAR_11 = FUNC_7(VAR_5->i_sb)->ipbmap;
 struct bmap *VAR_12;
 struct metapage *VAR_13;
 s64 VAR_14, VAR_15;
 struct dmap *VAR_16;
 int VAR_17;
 s64 VAR_18;
 int VAR_19;


 FUNC_8(VAR_7 > 0);





 VAR_17 = FUNC_0(VAR_7);

 VAR_12 = FUNC_7(VAR_5->i_sb)->bmap;

 VAR_18 = VAR_12->db_mapsize;


 if (VAR_6 >= VAR_18) {
  FUNC_16(VAR_5->i_sb, "the hint is outside the map\n");
  return -VAR_1;
 }




 if (VAR_17 > VAR_12->db_agl2size) {
  FUNC_4(VAR_11, VAR_4);

  VAR_9 = FUNC_11(VAR_12, VAR_7, VAR_17, VAR_8);

  goto write_unlock;
 }




 if (VAR_6 == 0)
  goto pref_ag;





 VAR_15 = VAR_6 + 1;

 if (VAR_15 >= VAR_12->db_mapsize)
  goto pref_ag;

 VAR_10 = VAR_15 >> VAR_12->db_agl2size;





 if ((VAR_15 & (VAR_12->db_agsize - 1)) == 0)




  if (FUNC_9(&VAR_12->db_active[VAR_10]))
   goto pref_ag;





 if (VAR_7 <= VAR_0) {
  FUNC_2(VAR_11, VAR_4);



  VAR_9 = -VAR_1;
  VAR_14 = FUNC_1(VAR_15, VAR_12->db_l2nbperpage);
  VAR_13 = FUNC_18(VAR_11, VAR_14, VAR_3, 0);
  if (VAR_13 == ((void*)0))
   goto read_unlock;

  VAR_16 = (struct dmap *) VAR_13->data;




  if ((VAR_9 = FUNC_14(VAR_12, VAR_16, VAR_15, (int) VAR_7))
      != -VAR_2) {
   if (VAR_9 == 0) {
    *VAR_8 = VAR_15;
    FUNC_17(VAR_13);
   }

   FUNC_19(VAR_13);
   goto read_unlock;
  }

  VAR_19 = FUNC_9(&VAR_12->db_active[VAR_10]);
  if ((VAR_19 > 1) ||
      ((VAR_19 == 1) && (FUNC_6(VAR_5)->active_ag != VAR_10))) {




   FUNC_19(VAR_13);
   FUNC_3(VAR_11);
   goto pref_ag;
  }




  if ((VAR_9 =
       FUNC_13(VAR_12, VAR_16, VAR_15, (int) VAR_7, VAR_17, VAR_8))
      != -VAR_2) {
   if (VAR_9 == 0)
    FUNC_17(VAR_13);

   FUNC_19(VAR_13);
   goto read_unlock;
  }




  if ((VAR_9 = FUNC_12(VAR_12, VAR_16, (int) VAR_7, VAR_17, VAR_8))
      != -VAR_2) {
   if (VAR_9 == 0)
    FUNC_17(VAR_13);

   FUNC_19(VAR_13);
   goto read_unlock;
  }

  FUNC_19(VAR_13);
  FUNC_3(VAR_11);
 }




 FUNC_4(VAR_11, VAR_4);
 if ((VAR_9 = FUNC_10(VAR_12, VAR_10, VAR_7, VAR_17, VAR_8)) != -VAR_2)
  goto write_unlock;

 FUNC_5(VAR_11);


      pref_ag:



 VAR_10 = FUNC_15(VAR_11);
 FUNC_4(VAR_11, VAR_4);




 if ((VAR_9 = FUNC_10(VAR_12, VAR_10, VAR_7, VAR_17, VAR_8)) == -VAR_2)
  VAR_9 = FUNC_11(VAR_12, VAR_7, VAR_17, VAR_8);

      write_unlock:
 FUNC_5(VAR_11);

 return (VAR_9);

      read_unlock:
 FUNC_3(VAR_11);

 return (VAR_9);
}
