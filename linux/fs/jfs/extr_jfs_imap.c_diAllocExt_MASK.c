
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metapage {scalar_t__ data; } ;
struct inomap {int im_freeiag; int im_ipimap; TYPE_1__* im_agctl; } ;
struct inode {int i_sb; } ;
struct iag {int* extsmap; scalar_t__ nfreeexts; scalar_t__ iagfree; int agstart; } ;
struct TYPE_2__ {int extfree; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inomap*) ;
 int FUNC_2 (struct inomap*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct inomap*,int,struct metapage**) ;
 int FUNC_9 (struct inode*,int,int,int,struct iag*) ;
 int FUNC_10 (struct inomap*,struct iag*,int) ;
 int FUNC_11 (struct inomap*,int*,int,struct metapage**) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct metapage*) ;
 int FUNC_15 (struct metapage*) ;

__attribute__((used)) static int FUNC_16(struct inomap * VAR_7, int VAR_8, struct inode *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 struct metapage *VAR_15;
 struct iag *VAR_16;




 if ((VAR_11 = VAR_7->im_agctl[VAR_8].extfree) < 0) {



  if ((VAR_14 = FUNC_11(VAR_7, &VAR_11, VAR_8, &VAR_15))) {
   return (VAR_14);
  }
  VAR_16 = (struct iag *) VAR_15->data;



  VAR_16->agstart =
      FUNC_6(FUNC_0(VAR_8, VAR_7->im_ipimap));
 } else {


  FUNC_3(VAR_7->im_ipimap, VAR_5);
  if ((VAR_14 = FUNC_8(VAR_7, VAR_11, &VAR_15))) {
   FUNC_4(VAR_7->im_ipimap);
   FUNC_12(VAR_9->i_sb, "error reading iag\n");
   return VAR_14;
  }
  VAR_16 = (struct iag *) VAR_15->data;
 }



 for (VAR_12 = 0;; VAR_12++) {
  if (VAR_12 >= VAR_6) {
   FUNC_14(VAR_15);
   FUNC_4(VAR_7->im_ipimap);
   FUNC_12(VAR_9->i_sb, "free ext summary map not found\n");
   return -VAR_0;
  }
  if (~VAR_16->extsmap[VAR_12])
   break;
 }



 VAR_10 = FUNC_7(FUNC_13(VAR_16->extsmap[VAR_12]), 0);
 if (VAR_10 >= VAR_2) {
  FUNC_14(VAR_15);
  FUNC_4(VAR_7->im_ipimap);
  FUNC_12(VAR_9->i_sb, "free extent not found\n");
  return -VAR_0;
 }
 VAR_13 = (VAR_12 << VAR_3) + VAR_10;



 VAR_14 = FUNC_10(VAR_7, VAR_16, VAR_13);
 FUNC_4(VAR_7->im_ipimap);
 if (VAR_14) {




  if (VAR_16->nfreeexts == FUNC_5(VAR_1)) {
   FUNC_1(VAR_7);
   VAR_16->iagfree = FUNC_5(VAR_7->im_freeiag);
   VAR_7->im_freeiag = VAR_11;
   FUNC_2(VAR_7);
  }
  FUNC_15(VAR_15);
  return (VAR_14);
 }



 FUNC_9(VAR_9, VAR_11, VAR_13 << VAR_4, VAR_13, VAR_16);

 FUNC_15(VAR_15);

 return (0);
}
