
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {int mp_aheight; } ;
struct iomap {scalar_t__ type; } ;
struct inode {int dummy; } ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,struct iomap*,struct metapath*) ;
 int FUNC_1 (struct inode*,int ,int ,int ,struct iomap*,struct metapath*) ;
 int FUNC_2 (struct metapath*) ;

int FUNC_3(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4,
    struct iomap *VAR_5)
{
 struct metapath VAR_6 = { .mp_aheight = 1, };
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1, VAR_5, &VAR_6);
 if (!VAR_7 && VAR_5->type == VAR_0)
  VAR_7 = FUNC_0(VAR_2, VAR_5, &VAR_6);
 FUNC_2(&VAR_6);
 return VAR_7;
}
