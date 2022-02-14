
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int i_sb; int i_ctime; } ;
struct TYPE_6__ {scalar_t__ key; scalar_t__ bh; scalar_t__* p; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (scalar_t__,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_1 ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static inline int FUNC_10(struct inode *VAR_2,
    Indirect VAR_3[],
    Indirect *VAR_4,
    int VAR_5)
{
 int VAR_6;


 FUNC_8(&VAR_1);
 if (!FUNC_7(VAR_3, VAR_4-1) || *VAR_4->p)
  goto changed;
 *VAR_4->p = VAR_4->key;
 FUNC_9(&VAR_1);

 VAR_2->i_ctime = FUNC_2(VAR_2);


 if (VAR_4->bh)
  FUNC_3(VAR_4->bh, VAR_2);

 if (FUNC_0(VAR_2))
  FUNC_6(VAR_2);
 else
  FUNC_4(VAR_2);
 return 0;

changed:
 FUNC_9(&VAR_1);
 for (VAR_6 = 1; VAR_6 < VAR_5; VAR_6++)
  FUNC_1(VAR_4[VAR_6].bh);
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_5(VAR_2->i_sb, VAR_4[VAR_6].key);
 return -VAR_0;
}
