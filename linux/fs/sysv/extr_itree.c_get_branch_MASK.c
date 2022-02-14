
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sysv_zone_t ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_9__ {int * i_data; } ;
struct TYPE_8__ {int key; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (TYPE_1__*,struct buffer_head*,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct super_block*,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static Indirect *FUNC_7(struct inode *VAR_2,
       int VAR_3,
       int VAR_4[],
       Indirect VAR_5[],
       int *VAR_6)
{
 struct super_block *VAR_7 = VAR_2->i_sb;
 Indirect *VAR_8 = VAR_5;
 struct buffer_head *VAR_9;

 *VAR_6 = 0;
 FUNC_2(VAR_5, ((void*)0), FUNC_0(VAR_2)->i_data + *VAR_4);
 if (!VAR_8->key)
  goto no_block;
 while (--VAR_3) {
  int VAR_10 = FUNC_3(FUNC_1(VAR_7), VAR_8->key);
  VAR_9 = FUNC_5(VAR_7, VAR_10);
  if (!VAR_9)
   goto failure;
  if (!FUNC_6(VAR_5, VAR_8))
   goto changed;
  FUNC_2(++VAR_8, VAR_9, (sysv_zone_t*)VAR_9->b_data + *++VAR_4);
  if (!VAR_8->key)
   goto no_block;
 }
 return ((void*)0);

changed:
 FUNC_4(VAR_9);
 *VAR_6 = -VAR_0;
 goto no_block;
failure:
 *VAR_6 = -VAR_1;
no_block:
 return VAR_8;
}
