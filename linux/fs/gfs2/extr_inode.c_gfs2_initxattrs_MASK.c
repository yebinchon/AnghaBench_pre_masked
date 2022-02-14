
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xattr {int value_len; int value; int * name; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, const struct xattr *VAR_2,
      void *VAR_3)
{
 const struct xattr *VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = VAR_2; VAR_4->name != ((void*)0); VAR_4++) {
  VAR_5 = FUNC_0(VAR_1, VAR_4->name, VAR_4->value,
           VAR_4->value_len, 0,
           VAR_0);
  if (VAR_5 < 0)
   break;
 }
 return VAR_5;
}
