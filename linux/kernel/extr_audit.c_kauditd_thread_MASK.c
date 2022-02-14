
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct net {int dummy; } ;
struct auditd_connection {int portid; int net; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock* FUNC_0 (struct net*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct auditd_connection*) ;
 struct net* FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_3 (struct sock*,int ,int *,int,int *,int ) ;
 int VAR_10 ;
 int FUNC_4 () ;
 int FUNC_5 (struct net*) ;
 struct auditd_connection* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(void *VAR_11)
{
 int VAR_12;
 u32 VAR_13 = 0;
 struct net *VAR_14 = ((void*)0);
 struct sock *VAR_15 = ((void*)0);
 struct auditd_connection *VAR_16;



 FUNC_9();
 while (!FUNC_4()) {

  FUNC_7();
  VAR_16 = FUNC_6(VAR_5);
  if (!VAR_16) {
   FUNC_8();
   goto main_queue;
  }
  VAR_14 = FUNC_2(VAR_16->net);
  VAR_15 = FUNC_0(VAR_14);
  VAR_13 = VAR_16->portid;
  FUNC_8();


  VAR_12 = FUNC_3(VAR_15, VAR_13,
     &VAR_2, 5,
     ((void*)0), VAR_7);
  if (VAR_16 && VAR_12 < 0) {
   VAR_15 = ((void*)0);
   FUNC_1(VAR_16);
   goto main_queue;
  }


  VAR_12 = FUNC_3(VAR_15, VAR_13,
     &VAR_4, 5,
     ((void*)0), VAR_6);
  if (VAR_16 && VAR_12 < 0) {
   VAR_15 = ((void*)0);
   FUNC_1(VAR_16);
   goto main_queue;
  }

main_queue:




  VAR_12 = FUNC_3(VAR_15, VAR_13, &VAR_3, 1,
     VAR_9,
     (VAR_15 ?
      VAR_8 : VAR_6));
  if (VAR_16 && VAR_12 < 0)
   FUNC_1(VAR_16);
  VAR_15 = ((void*)0);


  if (VAR_14) {
   FUNC_5(VAR_14);
   VAR_14 = ((void*)0);
  }


  FUNC_12(&VAR_1);





  FUNC_11(VAR_10,
         (FUNC_10(&VAR_3) ? 1 : 0));
 }

 return 0;
}
