
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct solo_p2m_desc {int dummy; } ;
struct solo_dev {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct solo_dev*,struct solo_p2m_desc*,int ,int) ;
 int FUNC_1 (struct solo_p2m_desc*,int,int ,int ,int ,int,int ) ;

int FUNC_2(struct solo_dev *VAR_0, int VAR_1,
     dma_addr_t VAR_2, u32 VAR_3, u32 VAR_4,
     int VAR_5, u32 VAR_6)
{
 struct solo_p2m_desc VAR_7[2];

 FUNC_1(&VAR_7[1], VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6);


 return FUNC_0(VAR_0, VAR_7, 0, 1);
}
