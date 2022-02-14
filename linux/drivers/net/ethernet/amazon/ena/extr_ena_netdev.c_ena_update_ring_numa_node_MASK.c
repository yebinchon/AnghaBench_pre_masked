
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_ring {int cpu; int ena_com_io_cq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct ena_ring *VAR_1,
          struct ena_ring *VAR_2)
{
 int VAR_3 = FUNC_2();
 int VAR_4;


 if (FUNC_3(VAR_1->cpu == VAR_3))
  goto out;

 VAR_4 = FUNC_0(VAR_3);
 FUNC_4();

 if (VAR_4 != VAR_0) {
  FUNC_1(VAR_1->ena_com_io_cq, VAR_4);
  FUNC_1(VAR_2->ena_com_io_cq, VAR_4);
 }

 VAR_1->cpu = VAR_3;
 VAR_2->cpu = VAR_3;

 return;
out:
 FUNC_4();
}
