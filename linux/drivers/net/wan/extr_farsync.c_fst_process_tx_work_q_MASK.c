
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int ** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(unsigned long VAR_5)
{
 unsigned long VAR_6;
 u64 VAR_7;
 int VAR_8;




 FUNC_0(VAR_0, "fst_process_tx_work_q\n");
 FUNC_2(&VAR_3, VAR_6);
 VAR_7 = VAR_4;
 VAR_4 = 0;
 FUNC_3(&VAR_3, VAR_6);




 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_7 & 0x01) {
   if (VAR_2[VAR_8] != ((void*)0)) {
    FUNC_0(VAR_0, "Calling tx bh for card %d\n", VAR_8);
    FUNC_1(VAR_2[VAR_8]);
   }
  }
  VAR_7 = VAR_7 >> 1;
 }
}
