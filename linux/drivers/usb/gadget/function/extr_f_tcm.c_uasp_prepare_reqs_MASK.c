
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int req; } ;
struct f_uas {int flags; int * stream; TYPE_1__ cmd; int ep_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct f_uas*) ;
 int FUNC_2 (struct f_uas*,int *) ;
 int FUNC_3 (struct f_uas*,int *) ;
 int FUNC_4 (struct f_uas*) ;
 int FUNC_5 (struct f_uas*,int) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct f_uas *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 if (VAR_3->flags & VAR_2)
  VAR_6 = VAR_1;
 else
  VAR_6 = 1;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = FUNC_2(VAR_3, &VAR_3->stream[VAR_5]);
  if (VAR_4)
   goto err_cleanup;
 }

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto err_free_stream;
 FUNC_5(VAR_3, VAR_6);

 VAR_4 = FUNC_6(VAR_3->ep_cmd, VAR_3->cmd.req, VAR_0);
 if (VAR_4)
  goto err_free_stream;

 return 0;

err_free_stream:
 FUNC_4(VAR_3);

err_cleanup:
 if (VAR_5) {
  do {
   FUNC_3(VAR_3, &VAR_3->stream[VAR_5 - 1]);
   VAR_5--;
  } while (VAR_5);
 }
 FUNC_0("UASP: endpoint setup failed\n");
 return VAR_4;
}
