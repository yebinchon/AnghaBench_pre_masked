
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_p2m_dev {size_t desc_count; size_t desc_idx; struct solo_p2m_desc* descs; int completion; } ;
struct solo_p2m_desc {int ctrl; int cfg; int ext_addr; int dma_addr; } ;
struct solo_dev {struct solo_p2m_dev* p2m_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct solo_dev*,int ,int ) ;

void FUNC_6(struct solo_dev *VAR_0, int VAR_1)
{
 struct solo_p2m_dev *VAR_2 = &VAR_0->p2m_dev[VAR_1];
 struct solo_p2m_desc *VAR_3;

 if (VAR_2->desc_count <= VAR_2->desc_idx) {
  FUNC_4(&VAR_2->completion);
  return;
 }


 VAR_2->desc_idx++;
 VAR_3 = &VAR_2->descs[VAR_2->desc_idx];

 FUNC_5(VAR_0, FUNC_0(VAR_1), 0);
 FUNC_5(VAR_0, FUNC_3(VAR_1), VAR_3->dma_addr);
 FUNC_5(VAR_0, FUNC_1(VAR_1), VAR_3->ext_addr);
 FUNC_5(VAR_0, FUNC_2(VAR_1), VAR_3->cfg);
 FUNC_5(VAR_0, FUNC_0(VAR_1), VAR_3->ctrl);
}
