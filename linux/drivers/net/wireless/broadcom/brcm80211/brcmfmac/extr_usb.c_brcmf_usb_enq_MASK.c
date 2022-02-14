
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct brcmf_usbreq {int list; } ;
struct brcmf_usbdev_info {int qlock; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct brcmf_usbdev_info *VAR_0,
     struct list_head *VAR_1, struct brcmf_usbreq *VAR_2,
     int *VAR_3)
{
 unsigned long VAR_4;
 FUNC_1(&VAR_0->qlock, VAR_4);
 FUNC_0(&VAR_2->list, VAR_1);
 if (VAR_3)
  (*VAR_3)++;
 FUNC_2(&VAR_0->qlock, VAR_4);
}
