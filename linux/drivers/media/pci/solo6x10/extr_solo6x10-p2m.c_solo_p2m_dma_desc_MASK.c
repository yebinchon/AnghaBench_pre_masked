
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_p2m_dev {int desc_count; int desc_idx; int mutex; scalar_t__ error; int completion; struct solo_p2m_desc* descs; } ;
struct solo_p2m_desc {unsigned int dma_addr; unsigned int ext_addr; unsigned int cfg; unsigned int ctrl; } ;
struct solo_dev {scalar_t__ type; int p2m_timeouts; int p2m_jiffies; struct solo_p2m_dev* p2m_dev; int p2m_count; } ;
typedef unsigned int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int VAR_5 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 unsigned int FUNC_8 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 unsigned int FUNC_12 (struct solo_dev*,int ) ;
 int FUNC_13 (struct solo_dev*,int ,unsigned int) ;
 unsigned int FUNC_14 (int *,int ) ;

int FUNC_15(struct solo_dev *VAR_8,
        struct solo_p2m_desc *VAR_9, dma_addr_t VAR_10,
        int VAR_11)
{
 struct solo_p2m_dev *VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14 = 0;
 int VAR_15 = 0;
 unsigned int VAR_16 = 0;


 if (VAR_8->type != VAR_3 && VAR_7)
  VAR_16 = FUNC_8(&VAR_8->p2m_count) % VAR_4;

 VAR_12 = &VAR_8->p2m_dev[VAR_16];

 if (FUNC_9(&VAR_12->mutex))
  return -VAR_1;

 FUNC_11(&VAR_12->completion);
 VAR_12->error = 0;

 if (VAR_11 > 1 && VAR_8->type != VAR_3 && VAR_6) {

  VAR_12->desc_count = VAR_12->desc_idx = 0;
  VAR_14 = FUNC_12(VAR_8, FUNC_0(VAR_16));

  FUNC_13(VAR_8, FUNC_3(VAR_16), VAR_10);
  FUNC_13(VAR_8, FUNC_2(VAR_16), VAR_11);
  FUNC_13(VAR_8, FUNC_0(VAR_16), VAR_14 |
          VAR_5);
 } else {

  VAR_12->desc_count = VAR_11;
  VAR_12->desc_idx = 1;
  VAR_12->descs = VAR_9;

  FUNC_13(VAR_8, FUNC_6(VAR_16),
          VAR_9[1].dma_addr);
  FUNC_13(VAR_8, FUNC_4(VAR_16),
          VAR_9[1].ext_addr);
  FUNC_13(VAR_8, FUNC_5(VAR_16),
          VAR_9[1].cfg);
  FUNC_13(VAR_8, FUNC_1(VAR_16),
          VAR_9[1].ctrl);
 }

 VAR_13 = FUNC_14(&VAR_12->completion,
           VAR_8->p2m_jiffies);

 if (FUNC_7(VAR_12->error))
  VAR_15 = -VAR_2;
 else if (VAR_13 == 0) {
  VAR_8->p2m_timeouts++;
  VAR_15 = -VAR_0;
 }

 FUNC_13(VAR_8, FUNC_1(VAR_16), 0);



 if (VAR_11 > 1 && VAR_8->type != VAR_3 && VAR_14)
  FUNC_13(VAR_8, FUNC_0(VAR_16), VAR_14);

 FUNC_10(&VAR_12->mutex);

 return VAR_15;
}
