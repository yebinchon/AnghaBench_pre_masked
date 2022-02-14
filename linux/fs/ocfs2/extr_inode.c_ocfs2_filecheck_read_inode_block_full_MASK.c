
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
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int,struct buffer_head**,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_2,
          struct buffer_head **VAR_3,
          int VAR_4, int VAR_5)
{
 int VAR_6;
 struct buffer_head *VAR_7 = *VAR_3;

 if (!VAR_5)
  VAR_6 = FUNC_2(FUNC_0(VAR_2),
    FUNC_1(VAR_2)->ip_blkno,
    1, &VAR_7, VAR_4,
    VAR_1);
 else
  VAR_6 = FUNC_2(FUNC_0(VAR_2),
    FUNC_1(VAR_2)->ip_blkno,
    1, &VAR_7, VAR_4,
    VAR_0);


 if (!VAR_6 && !*VAR_3)
  *VAR_3 = VAR_7;

 return VAR_6;
}
