
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr {int value_len; int value; int * name; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int ,int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, const struct xattr *VAR_3,
       void *VAR_4)
{
 const struct xattr *VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = VAR_3; VAR_5->name != ((void*)0); VAR_5++) {
  VAR_6 = FUNC_0(VAR_2, VAR_0,
          VAR_5->name, VAR_5->value,
          VAR_5->value_len, VAR_1);
  if (VAR_6)
   break;
 }
 return VAR_6;
}
