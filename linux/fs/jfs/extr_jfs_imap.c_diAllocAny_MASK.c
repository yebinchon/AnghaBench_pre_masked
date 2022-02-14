
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inomap {TYPE_2__* im_ipimap; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {TYPE_1__* bmap; } ;
struct TYPE_5__ {int i_sb; } ;
struct TYPE_4__ {int db_maxag; } ;


 int FUNC_0 (struct inomap*,int) ;
 int FUNC_1 (struct inomap*,int) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (struct inomap*,int,int,struct inode*) ;

__attribute__((used)) static int
FUNC_4(struct inomap * VAR_1, int VAR_2, bool VAR_3, struct inode *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = FUNC_2(VAR_1->im_ipimap->i_sb)->bmap->db_maxag;





 for (VAR_5 = VAR_2 + 1; VAR_5 <= VAR_7; VAR_5++) {
  FUNC_0(VAR_1, VAR_5);

  VAR_6 = FUNC_3(VAR_1, VAR_5, VAR_3, VAR_4);

  FUNC_1(VAR_1, VAR_5);

  if (VAR_6 != -VAR_0)
   return (VAR_6);
 }



 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  FUNC_0(VAR_1, VAR_5);

  VAR_6 = FUNC_3(VAR_1, VAR_5, VAR_3, VAR_4);

  FUNC_1(VAR_1, VAR_5);

  if (VAR_6 != -VAR_0)
   return (VAR_6);
 }



 return -VAR_0;
}
