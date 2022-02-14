
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pptp_addr {int call_id; } ;
struct TYPE_3__ {struct pptp_addr src_addr; } ;
struct TYPE_4__ {TYPE_1__ pptp; } ;
struct pppox_sock {TYPE_2__ proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,struct pppox_sock*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct pppox_sock *VAR_4,
      struct pptp_addr *VAR_5)
{
 static int VAR_6;

 FUNC_3(&VAR_3);
 if (!VAR_5->call_id) {
  VAR_6 = FUNC_0(VAR_1, VAR_0, VAR_6 + 1);
  if (VAR_6 == VAR_0) {
   VAR_6 = FUNC_0(VAR_1, VAR_0, 1);
   if (VAR_6 == VAR_0)
    goto out_err;
  }
  VAR_5->call_id = VAR_6;
 } else if (FUNC_5(VAR_5->call_id, VAR_1)) {
  goto out_err;
 }

 VAR_4->proto.pptp.src_addr = *VAR_5;
 FUNC_2(VAR_5->call_id, VAR_1);
 FUNC_1(VAR_2[VAR_5->call_id], VAR_4);
 FUNC_4(&VAR_3);

 return 0;

out_err:
 FUNC_4(&VAR_3);
 return -1;
}
