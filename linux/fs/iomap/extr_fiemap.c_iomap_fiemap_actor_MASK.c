
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iomap {scalar_t__ type; } ;
struct inode {int dummy; } ;
struct fiemap_ctx {struct iomap prev; int fi; } ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct iomap*,int ) ;

__attribute__((used)) static loff_t
FUNC_1(struct inode *VAR_1, loff_t VAR_2, loff_t VAR_3, void *VAR_4,
  struct iomap *VAR_5)
{
 struct fiemap_ctx *VAR_6 = VAR_4;
 loff_t VAR_7 = VAR_3;

 if (VAR_5->type == VAR_0)
  return VAR_3;

 VAR_7 = FUNC_0(VAR_6->fi, &VAR_6->prev, 0);
 VAR_6->prev = *VAR_5;
 switch (VAR_7) {
 case 0:
  return VAR_3;
 case 1:
  return 0;
 default:
  return VAR_7;
 }
}
