
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ena_tx_buffer {int num_of_bufs; scalar_t__ map_linear_data; struct ena_com_buf* bufs; } ;
struct ena_ring {int dev; } ;
struct ena_com_buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_buf*,int ) ;
 int FUNC_1 (struct ena_com_buf*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ena_ring *VAR_3,
        struct ena_tx_buffer *VAR_4)
{
 struct ena_com_buf *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->bufs;
 VAR_6 = VAR_4->num_of_bufs;

 if (FUNC_4(!VAR_6))
  return;

 if (VAR_4->map_linear_data) {
  FUNC_3(VAR_3->dev,
     FUNC_0(VAR_5, VAR_2),
     FUNC_1(VAR_5, VAR_1),
     VAR_0);
  VAR_5++;
  VAR_6--;
 }


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  FUNC_2(VAR_3->dev, FUNC_0(VAR_5, VAR_2),
          FUNC_1(VAR_5, VAR_1), VAR_0);
  VAR_5++;
 }
}
