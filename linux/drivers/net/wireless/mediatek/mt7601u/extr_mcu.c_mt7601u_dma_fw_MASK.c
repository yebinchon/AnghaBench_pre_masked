
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mt7601u_dma_buf {int dummy; } ;
struct mt7601u_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mt7601u_dev*,struct mt7601u_dma_buf*,void const*,int,scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct mt7601u_dev*,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct mt7601u_dev *VAR_3, struct mt7601u_dma_buf *VAR_4,
        const void *VAR_5, int VAR_6, u32 VAR_7)
{
 int VAR_8, VAR_9;

 if (VAR_6 == 0)
  return 0;

 VAR_8 = FUNC_2(VAR_1, VAR_6);
 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_8, VAR_7);
 if (VAR_9)
  return VAR_9;

 if (!FUNC_3(VAR_3, VAR_2, FUNC_0(31), FUNC_0(31), 500))
  return -VAR_0;

 return FUNC_4(VAR_3, VAR_4, VAR_5 + VAR_8, VAR_6 - VAR_8, VAR_7 + VAR_8);
}
