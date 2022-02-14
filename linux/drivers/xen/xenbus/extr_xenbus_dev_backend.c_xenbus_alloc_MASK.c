
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evtchn_alloc_unbound {scalar_t__ port; int remote_dom; int dom; } ;
typedef int domid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct evtchn_alloc_unbound*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static long FUNC_7(domid_t VAR_7)
{
 struct evtchn_alloc_unbound VAR_8;
 int VAR_9 = -VAR_1;

 FUNC_5();
 if (VAR_6)
  goto out_err;

 FUNC_1(VAR_3, VAR_7,
   FUNC_2(VAR_5), 0 );

 VAR_8.dom = VAR_0;
 VAR_8.remote_dom = VAR_7;

 VAR_9 = FUNC_0(VAR_2, &VAR_8);
 if (VAR_9)
  goto out_err;

 if (VAR_4 > 0)
  FUNC_3();

 VAR_4 = VAR_8.port;

 FUNC_4();

 return VAR_8.port;

 out_err:
 FUNC_6();
 return VAR_9;
}
