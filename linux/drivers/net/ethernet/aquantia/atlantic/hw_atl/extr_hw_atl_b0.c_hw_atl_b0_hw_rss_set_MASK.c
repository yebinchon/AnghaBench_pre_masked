
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
typedef unsigned int u32 ;
typedef int u16 ;
struct aq_rss_parameters {unsigned int* indirection_table; } ;
struct aq_hw_s {TYPE_1__* aq_nic_cfg; } ;
typedef int bitary ;
struct TYPE_2__ {int num_rss_queues; } ;


 unsigned int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct aq_hw_s*) ;
 int FUNC_2 (struct aq_hw_s*,unsigned int) ;
 int FUNC_3 (struct aq_hw_s*,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct aq_hw_s*,unsigned int) ;
 unsigned int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,struct aq_hw_s*,unsigned int,int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct aq_hw_s *VAR_3,
    struct aq_rss_parameters *VAR_4)
{
 u8 *VAR_5 = VAR_4->indirection_table;
 u32 VAR_6 = 0U;
 u32 VAR_7 = FUNC_5(1U, VAR_3->aq_nic_cfg->num_rss_queues);
 int VAR_8 = 0;
 u16 VAR_9[1 + (VAR_1 *
     VAR_0 / 16U)];
 u32 VAR_10;

 FUNC_6(VAR_9, 0, sizeof(VAR_9));

 for (VAR_6 = VAR_1; VAR_6--;) {
  (*(u32 *)(VAR_9 + ((VAR_6 * 3U) / 16U))) |=
   ((VAR_5[VAR_6] % VAR_7) <<
   ((VAR_6 * 3U) & 0xFU));
 }

 for (VAR_6 = FUNC_0(VAR_9); VAR_6--;) {
  FUNC_3(VAR_3, VAR_9[VAR_6]);
  FUNC_2(VAR_3, VAR_6);
  FUNC_4(VAR_3, 1U);
  VAR_8 = FUNC_7(VAR_2,
      VAR_3, VAR_10, VAR_10 == 0,
      1000U, 10000U);
  if (VAR_8 < 0)
   goto err_exit;
 }

 VAR_8 = FUNC_1(VAR_3);

err_exit:
 return VAR_8;
}
