
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmac {int lmac_id; void* name; int event_cb_lock; int cmd_lock; int wq_cmd_cmplt; struct cgx* cgx; } ;
struct cgx {int lmac_count; int cgx_id; struct lmac** lmac_idmap; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cgx*) ;
 int FUNC_1 (struct cgx*,int ,int ) ;
 int FUNC_2 (struct cgx*,int,int ,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,void*,struct lmac*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (void*,char*,int,int) ;

__attribute__((used)) static int FUNC_10(struct cgx *VAR_8)
{
 struct lmac *VAR_9;
 int VAR_10, VAR_11;

 VAR_8->lmac_count = FUNC_1(VAR_8, 0, VAR_1) & 0x7;
 if (VAR_8->lmac_count > VAR_6)
  VAR_8->lmac_count = VAR_6;

 for (VAR_10 = 0; VAR_10 < VAR_8->lmac_count; VAR_10++) {
  VAR_9 = FUNC_4(1, sizeof(struct lmac), VAR_5);
  if (!VAR_9)
   return -VAR_3;
  VAR_9->name = FUNC_4(1, sizeof("cgx_fwi_xxx_yyy"), VAR_5);
  if (!VAR_9->name)
   return -VAR_3;
  FUNC_9(VAR_9->name, "cgx_fwi_%d_%d", VAR_8->cgx_id, VAR_10);
  VAR_9->lmac_id = VAR_10;
  VAR_9->cgx = VAR_8;
  FUNC_3(&VAR_9->wq_cmd_cmplt);
  FUNC_5(&VAR_9->cmd_lock);
  FUNC_8(&VAR_9->event_cb_lock);
  VAR_11 = FUNC_7(FUNC_6(VAR_8->pdev,
       VAR_2 + VAR_10 * 9),
       VAR_7, 0, VAR_9->name, VAR_9);
  if (VAR_11)
   return VAR_11;


  FUNC_2(VAR_8, VAR_9->lmac_id, VAR_0,
     VAR_4);


  VAR_8->lmac_idmap[VAR_10] = VAR_9;
 }

 return FUNC_0(VAR_8);
}
