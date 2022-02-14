
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int i_btnode_cache; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ,int ,struct buffer_head**,int *) ;

int FUNC_2(struct inode *VAR_2, sector_t VAR_3,
       __u64 VAR_4, struct buffer_head **VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(&FUNC_0(VAR_2)->i_btnode_cache,
     VAR_4 ? : VAR_3, VAR_3, VAR_1, 0,
     VAR_5, &VAR_3);
 if (VAR_6 == -VAR_0)
  VAR_6 = 0;
 return VAR_6;
}
