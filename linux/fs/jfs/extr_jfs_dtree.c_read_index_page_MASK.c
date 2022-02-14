
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapage {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ s64 ;
typedef int s32 ;


 int VAR_0 ;
 struct metapage* FUNC_0 (struct inode*,scalar_t__,int ,int) ;
 int FUNC_1 (struct inode*,scalar_t__,int,int*,scalar_t__*,int *,int) ;

__attribute__((used)) static struct metapage *FUNC_2(struct inode *VAR_1, s64 VAR_2)
{
 int VAR_3;
 s64 VAR_4;
 int VAR_5;
 s32 VAR_6;

 VAR_3 = FUNC_1(VAR_1, VAR_2, 1, &VAR_5, &VAR_4, &VAR_6, 1);
 if (VAR_3 || (VAR_4 == 0))
  return ((void*)0);

 return FUNC_0(VAR_1, VAR_4, VAR_0, 1);
}
