
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct inomap {int im_ipimap; TYPE_1__* im_agctl; } ;
struct inode {int i_sb; } ;
struct iag {int* inosmap; int* wmap; int nfreeinos; } ;
struct TYPE_2__ {int inofree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct inomap*,struct iag*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct inomap*,int,struct metapage**) ;
 int FUNC_5 (struct inode*,int,int,int,struct iag*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct metapage*) ;
 int FUNC_9 (struct metapage*) ;

__attribute__((used)) static int FUNC_10(struct inomap * VAR_8, int VAR_9, struct inode *VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 struct metapage *VAR_17;
 struct iag *VAR_18;



 if ((VAR_11 = VAR_8->im_agctl[VAR_9].inofree) < 0)
  return -VAR_1;


 FUNC_0(VAR_8->im_ipimap, VAR_6);



 if ((VAR_13 = FUNC_4(VAR_8, VAR_11, &VAR_17))) {
  FUNC_1(VAR_8->im_ipimap);
  return (VAR_13);
 }
 VAR_18 = (struct iag *) VAR_17->data;




 if (!VAR_18->nfreeinos) {
  FUNC_1(VAR_8->im_ipimap);
  FUNC_8(VAR_17);
  FUNC_6(VAR_10->i_sb, "nfreeinos = 0, but iag on freelist\n");
  return -VAR_0;
 }




 for (VAR_16 = 0;; VAR_16++) {
  if (VAR_16 >= VAR_7) {
   FUNC_1(VAR_8->im_ipimap);
   FUNC_8(VAR_17);
   FUNC_6(VAR_10->i_sb,
      "free inode not found in summary map\n");
   return -VAR_0;
  }

  if (~VAR_18->inosmap[VAR_16])
   break;
 }




 VAR_14 = FUNC_3(FUNC_7(VAR_18->inosmap[VAR_16]), 0);
 if (VAR_14 >= VAR_2) {
  FUNC_1(VAR_8->im_ipimap);
  FUNC_8(VAR_17);
  FUNC_6(VAR_10->i_sb, "no free extent found\n");
  return -VAR_0;
 }
 VAR_15 = (VAR_16 << VAR_4) + VAR_14;



 VAR_14 = FUNC_3(FUNC_7(VAR_18->wmap[VAR_15]), 0);
 if (VAR_14 >= VAR_3) {
  FUNC_1(VAR_8->im_ipimap);
  FUNC_8(VAR_17);
  FUNC_6(VAR_10->i_sb, "free inode not found\n");
  return -VAR_0;
 }



 VAR_12 = (VAR_15 << VAR_5) + VAR_14;



 VAR_13 = FUNC_2(VAR_8, VAR_18, VAR_12);
 FUNC_1(VAR_8->im_ipimap);
 if (VAR_13) {
  FUNC_8(VAR_17);
  return (VAR_13);
 }



 FUNC_5(VAR_10, VAR_11, VAR_12, VAR_15, VAR_18);
 FUNC_9(VAR_17);

 return (0);
}
