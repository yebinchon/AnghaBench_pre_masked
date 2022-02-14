
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cm_dev {scalar_t__ rx_slots; int ** rx_buf; int mport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct cm_dev *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_4->rx_slots == 0)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_1 && VAR_4->rx_slots && VAR_5; VAR_6++) {
  if (VAR_4->rx_buf[VAR_6] == ((void*)0)) {
   VAR_4->rx_buf[VAR_6] = FUNC_0(VAR_2, VAR_0);
   if (VAR_4->rx_buf[VAR_6] == ((void*)0))
    break;
   FUNC_1(VAR_4->mport, VAR_3, VAR_4->rx_buf[VAR_6]);
   VAR_4->rx_slots--;
   VAR_5--;
  }
 }
}
