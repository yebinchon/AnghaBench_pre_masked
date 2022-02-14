
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inomap {TYPE_1__* im_agctl; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int numfree; int numinos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inomap*,int,struct inode*) ;
 int FUNC_1 (struct inomap*,int,struct inode*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct inomap * VAR_2, int VAR_3, bool VAR_4, struct inode *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;




 VAR_8 = VAR_2->im_agctl[VAR_3].numfree;
 VAR_9 = VAR_2->im_agctl[VAR_3].numinos;

 if (VAR_8 > VAR_9) {
  FUNC_2(VAR_5->i_sb, "numfree > numinos\n");
  return -VAR_0;
 }






 if (VAR_4)
  VAR_7 = (VAR_8 < 64 ||
     (VAR_8 < 256
      && ((VAR_8 * 100) / VAR_9) <= 20));
 else
  VAR_7 = (VAR_8 == 0);




 if (VAR_7) {




  if ((VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_5)) != -VAR_1)
   return (VAR_6);
 }




 return (FUNC_1(VAR_2, VAR_3, VAR_5));
}
