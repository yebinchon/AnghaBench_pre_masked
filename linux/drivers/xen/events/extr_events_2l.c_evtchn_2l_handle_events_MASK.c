
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xen_ulong_t ;
struct vcpu_info {int evtchn_pending_sel; } ;
struct shared_info {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct shared_info* VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int VAR_3 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 unsigned long long FUNC_4 (unsigned int,struct shared_info*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int,int ) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_10(unsigned VAR_7)
{
 int VAR_8;
 xen_ulong_t VAR_9;
 xen_ulong_t VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;
 struct shared_info *VAR_16 = VAR_2;
 struct vcpu_info *VAR_17 = FUNC_2(VAR_6);


 VAR_8 = FUNC_8(VAR_7, VAR_3);
 if (VAR_8 != -1) {
  unsigned int VAR_18 = FUNC_5(VAR_8);
  VAR_13 = VAR_18 / VAR_1;
  VAR_14 = VAR_18 % VAR_1;
  if (FUNC_4(VAR_7, VAR_16, VAR_13) & (1ULL << VAR_14))
   FUNC_6(VAR_8);
 }






 VAR_9 = FUNC_9(&VAR_17->evtchn_pending_sel, 0);

 VAR_11 = FUNC_2(VAR_5);
 VAR_12 = FUNC_2(VAR_4);

 VAR_13 = VAR_11;

 for (VAR_15 = 0; VAR_9 != 0; VAR_15++) {
  xen_ulong_t VAR_19;

  VAR_19 = FUNC_1(VAR_9, VAR_13);




  if (VAR_19 == 0) {
   VAR_13 = 0;
   VAR_14 = 0;
   continue;
  }
  VAR_13 = FUNC_0(VAR_19);

  VAR_10 = FUNC_4(VAR_7, VAR_16, VAR_13);
  VAR_14 = 0;
  if (VAR_13 == VAR_11) {
   if (VAR_15 == 0)
    VAR_14 = VAR_12;
  }

  do {
   xen_ulong_t VAR_20;
   int VAR_21;

   VAR_20 = FUNC_1(VAR_10, VAR_14);


   if (VAR_20 == 0)
    break;

   VAR_14 = FUNC_0(VAR_20);


   VAR_21 = (VAR_13 * VAR_0) + VAR_14;
   VAR_8 = FUNC_7(VAR_21);

   if (VAR_8 != -1)
    FUNC_6(VAR_8);

   VAR_14 = (VAR_14 + 1) % VAR_0;


   FUNC_3(VAR_5,
      VAR_14 ? VAR_13 :
      (VAR_13+1) % VAR_0);
   FUNC_3(VAR_4, VAR_14);
  } while (VAR_14 != 0);


  if ((VAR_13 != VAR_11) || (VAR_15 != 0))
   VAR_9 &= ~(1UL << VAR_13);

  VAR_13 = (VAR_13 + 1) % VAR_0;
 }
}
