
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int status; } ;
struct il_host_cmd {int flags; int id; scalar_t__ callback; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (struct il_priv*,struct il_host_cmd*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct il_priv *VAR_5, struct il_host_cmd *VAR_6)
{
 int VAR_7;

 FUNC_0(!(VAR_6->flags & VAR_0));


 FUNC_0(VAR_6->flags & VAR_1);


 if (!VAR_6->callback)
  VAR_6->callback = VAR_4;

 if (FUNC_4(VAR_3, &VAR_5->status))
  return -VAR_2;

 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_7 < 0) {
  FUNC_1("Error sending %s: enqueue_hcmd failed: %d\n",
         FUNC_3(VAR_6->id), VAR_7);
  return VAR_7;
 }
 return 0;
}
