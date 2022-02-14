
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metapage {int dummy; } ;
struct inomap {struct inode* im_ipimap; } ;
struct inode {int i_sb; } ;
typedef int s64 ;
struct TYPE_2__ {int l2nbperpage; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_1 ;
 struct metapage* FUNC_2 (struct inode*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct inomap * VAR_2, int VAR_3, struct metapage ** VAR_4)
{
 struct inode *VAR_5 = VAR_2->im_ipimap;
 s64 VAR_6;


 VAR_6 = FUNC_0(VAR_3, FUNC_1(VAR_5->i_sb)->l2nbperpage);


 *VAR_4 = FUNC_2(VAR_5, VAR_6, VAR_1, 0);
 if (*VAR_4 == ((void*)0)) {
  return -VAR_0;
 }

 return (0);
}
