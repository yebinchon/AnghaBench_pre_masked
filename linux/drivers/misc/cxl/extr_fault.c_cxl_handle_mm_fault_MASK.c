
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
typedef int u64 ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (struct mm_struct*,int,int,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct mm_struct*,int,unsigned long,int,unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct mm_struct*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;

int FUNC_12(struct mm_struct *VAR_8, u64 VAR_9, u64 VAR_10)
{
 vm_fault_t VAR_11 = 0;
 int VAR_12;
 unsigned long VAR_13, VAR_14, VAR_15 = 0;
 if (VAR_8 && !FUNC_2(FUNC_11(), FUNC_7(VAR_8))) {
  FUNC_1(FUNC_11(), FUNC_7(VAR_8));





  FUNC_10();
 }
 if ((VAR_12 = FUNC_0(VAR_8, VAR_10, VAR_9, &VAR_11))) {
  FUNC_8("copro_handle_mm_fault failed: %#x\n", VAR_12);
  return VAR_12;
 }

 if (!FUNC_9()) {




  VAR_13 = VAR_4 | VAR_6;
  if (VAR_9 & VAR_0)
   VAR_13 |= VAR_7;

  if (!VAR_8 && (FUNC_3(VAR_10) != VAR_3))
   VAR_13 |= VAR_5;

  if (VAR_9 & VAR_1)
   VAR_15 |= VAR_2;

  FUNC_6(VAR_14);
  FUNC_4(VAR_8, VAR_10, VAR_13, 0x300, VAR_15);
  FUNC_5(VAR_14);
 }
 return 0;
}
