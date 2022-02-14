
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_usbreq {int list; } ;
struct brcmf_usbdev_info {int qlock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct brcmf_usbdev_info *VAR_0,
    struct brcmf_usbreq *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->qlock, VAR_2);
 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_0->qlock, VAR_2);
}
