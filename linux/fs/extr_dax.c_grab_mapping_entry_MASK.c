
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_state {unsigned long xa_index; scalar_t__ xa_node; } ;
struct address_space {int nrexceptional; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (void*,struct address_space*,int) ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (struct xa_state*,void*) ;
 void* FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct xa_state*,void*,int) ;
 void* FUNC_9 (struct xa_state*,unsigned int) ;
 int FUNC_10 (struct address_space*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct address_space*,int,int ,int) ;
 int FUNC_13 (void*) ;
 void* FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct xa_state*) ;
 int FUNC_16 (struct xa_state*) ;
 scalar_t__ FUNC_17 (struct xa_state*,int) ;
 int FUNC_18 (struct xa_state*) ;
 int FUNC_19 (struct xa_state*,unsigned long) ;
 int FUNC_20 (struct xa_state*,int ) ;
 int FUNC_21 (struct xa_state*,int *) ;
 int FUNC_22 (struct xa_state*) ;

__attribute__((used)) static void *FUNC_23(struct xa_state *VAR_10,
  struct address_space *VAR_11, unsigned int VAR_12)
{
 unsigned long VAR_13 = VAR_10->xa_index;
 bool VAR_14 = 0;
 void *VAR_15;

retry:
 FUNC_16(VAR_10);
 VAR_15 = FUNC_9(VAR_10, VAR_12);

 if (VAR_15) {
  if (FUNC_2(VAR_15))
   goto fallback;
  if (!FUNC_13(VAR_15)) {
   FUNC_20(VAR_10, VAR_2);
   goto out_unlock;
  }

  if (VAR_12 == 0) {
   if (FUNC_4(VAR_15) &&
       (FUNC_5(VAR_15) ||
        FUNC_3(VAR_15))) {
    VAR_14 = 1;
   }
  }
 }

 if (VAR_14) {




  FUNC_6(VAR_10, VAR_15);






  if (FUNC_5(VAR_15)) {
   FUNC_22(VAR_10);
   FUNC_12(VAR_11,
     VAR_10->xa_index & ~VAR_4,
     VAR_5, 0);
   FUNC_18(VAR_10);
   FUNC_16(VAR_10);
  }

  FUNC_1(VAR_15, VAR_11, 0);
  FUNC_21(VAR_10, ((void*)0));
  FUNC_8(VAR_10, VAR_15, 1);
  VAR_11->nrexceptional--;
  VAR_15 = ((void*)0);
  FUNC_19(VAR_10, VAR_13);
 }

 if (VAR_15) {
  FUNC_6(VAR_10, VAR_15);
 } else {
  unsigned long VAR_16 = VAR_0;

  if (VAR_12 > 0)
   VAR_16 |= VAR_1;
  VAR_15 = FUNC_7(FUNC_11(0), VAR_16);
  FUNC_6(VAR_10, VAR_15);
  if (FUNC_15(VAR_10))
   goto out_unlock;
  VAR_11->nrexceptional++;
 }

out_unlock:
 FUNC_22(VAR_10);
 if (FUNC_17(VAR_10, FUNC_10(VAR_11) & ~VAR_9))
  goto retry;
 if (VAR_10->xa_node == FUNC_0(-VAR_3))
  return FUNC_14(VAR_7);
 if (FUNC_15(VAR_10))
  return FUNC_14(VAR_8);
 return VAR_15;
fallback:
 FUNC_22(VAR_10);
 return FUNC_14(VAR_6);
}
