
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct inode {int i_sb; } ;
struct dmap {int dummy; } ;
struct bmap {scalar_t__ db_mapsize; int db_l2nbperpage; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {struct bmap* bmap; struct inode* ipbmap; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct bmap*,struct dmap*,scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int) ;
 struct metapage* FUNC_7 (struct inode*,scalar_t__,int ,int ) ;
 int FUNC_8 (struct metapage*) ;
 int FUNC_9 (struct metapage*) ;

int FUNC_10(struct inode *VAR_4, s64 VAR_5, s64 VAR_6)
{
 struct metapage *VAR_7;
 struct dmap *VAR_8;
 int VAR_9, VAR_10;
 s64 VAR_11, VAR_12;
 struct inode *VAR_13 = FUNC_4(VAR_4->i_sb)->ipbmap;
 struct bmap *VAR_14 = FUNC_4(VAR_4->i_sb)->bmap;

 FUNC_2(VAR_13, VAR_3);


 FUNC_0(VAR_6 <= VAR_14->db_mapsize - VAR_5);




 VAR_7 = ((void*)0);
 for (VAR_12 = VAR_6; VAR_12 > 0; VAR_12 -= VAR_9, VAR_5 += VAR_9) {

  if (VAR_7) {
   FUNC_9(VAR_7);
  }


  VAR_11 = FUNC_1(VAR_5, VAR_14->db_l2nbperpage);
  VAR_7 = FUNC_7(VAR_13, VAR_11, VAR_2, 0);
  if (VAR_7 == ((void*)0)) {
   FUNC_3(VAR_13);
   return -VAR_1;
  }
  VAR_8 = (struct dmap *) VAR_7->data;




  VAR_9 = FUNC_6(VAR_12, VAR_0 - (VAR_5 & (VAR_0 - 1)));


  if ((VAR_10 = FUNC_5(VAR_14, VAR_8, VAR_5, VAR_9))) {
   FUNC_8(VAR_7);
   FUNC_3(VAR_13);
   return (VAR_10);
  }
 }


 FUNC_9(VAR_7);

 FUNC_3(VAR_13);

 return (0);
}
