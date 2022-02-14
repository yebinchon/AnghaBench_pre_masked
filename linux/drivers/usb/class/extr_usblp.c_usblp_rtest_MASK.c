
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usblp {int lock; scalar_t__ rcomplete; int present; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct usblp *VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 if (!VAR_4->present)
  return -VAR_2;
 if (FUNC_0(VAR_3))
  return -VAR_1;
 FUNC_1(&VAR_4->lock, VAR_6);
 if (VAR_4->rcomplete) {
  FUNC_2(&VAR_4->lock, VAR_6);
  return 0;
 }
 FUNC_2(&VAR_4->lock, VAR_6);
 if (VAR_5)
  return -VAR_0;
 return 1;
}
