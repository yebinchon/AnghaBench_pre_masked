
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_state {unsigned long xa_index; } ;
struct vm_fault {int address; int vma; } ;
struct address_space {int host; } ;
typedef int pfn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,struct address_space*,int ,int ) ;
 int FUNC_3 (void*,struct address_space*,int) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 void* FUNC_7 (struct xa_state*,void*) ;
 void* FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (struct address_space*,unsigned long,int,int) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct xa_state*) ;
 int FUNC_13 (struct xa_state*) ;
 int FUNC_14 (struct xa_state*) ;
 int FUNC_15 (struct xa_state*,int ) ;
 int FUNC_16 (struct xa_state*) ;

__attribute__((used)) static void *FUNC_17(struct xa_state *VAR_6,
  struct address_space *VAR_7, struct vm_fault *VAR_8,
  void *VAR_9, pfn_t VAR_10, unsigned long VAR_11, bool VAR_12)
{
 void *VAR_13 = FUNC_8(VAR_10, VAR_11);

 if (VAR_12)
  FUNC_1(VAR_7->host, VAR_2);

 if (FUNC_6(VAR_9) && !(VAR_11 & VAR_1)) {
  unsigned long VAR_14 = VAR_6->xa_index;

  if (FUNC_5(VAR_9))
   FUNC_9(VAR_7, VAR_14 & ~VAR_4,
     VAR_5, 0);
  else
   FUNC_9(VAR_7, VAR_14, 1, 0);
 }

 FUNC_14(VAR_6);
 FUNC_13(VAR_6);
 if (FUNC_6(VAR_9) || FUNC_4(VAR_9)) {
  void *VAR_15;

  FUNC_3(VAR_9, VAR_7, 0);
  FUNC_2(VAR_13, VAR_7, VAR_8->vma, VAR_8->address);
  VAR_15 = FUNC_7(VAR_6, VAR_13);
  FUNC_0(VAR_15 != FUNC_10(FUNC_11(VAR_9) |
     VAR_0));
  VAR_9 = VAR_13;
 } else {
  FUNC_12(VAR_6);
 }

 if (VAR_12)
  FUNC_15(VAR_6, VAR_3);

 FUNC_16(VAR_6);
 return VAR_9;
}
