
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_blkno; } ;


 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int ,int,struct buffer_head**,int,int ) ;
 int VAR_0 ;

int FUNC_3(struct inode *VAR_1, struct buffer_head **VAR_2,
    int VAR_3)
{
 int VAR_4;
 struct buffer_head *VAR_5 = *VAR_2;

 VAR_4 = FUNC_2(FUNC_0(VAR_1), FUNC_1(VAR_1)->ip_blkno,
          1, &VAR_5, VAR_3, VAR_0);


 if (!VAR_4 && !*VAR_2)
  *VAR_2 = VAR_5;

 return VAR_4;
}
