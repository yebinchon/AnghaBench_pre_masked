
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tool_ctx {int dummy; } ;
struct ntb_dev {int dummy; } ;
struct ntb_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct tool_ctx*) ;
 int FUNC_1 (struct tool_ctx*) ;
 int FUNC_2 (struct tool_ctx*) ;
 int FUNC_3 (struct tool_ctx*) ;
 struct tool_ctx* FUNC_4 (struct ntb_dev*) ;
 int FUNC_5 (struct tool_ctx*) ;
 int FUNC_6 (struct tool_ctx*) ;
 int FUNC_7 (struct tool_ctx*) ;
 int FUNC_8 (struct tool_ctx*) ;
 int FUNC_9 (struct tool_ctx*) ;
 int FUNC_10 (struct tool_ctx*) ;

__attribute__((used)) static int FUNC_11(struct ntb_client *VAR_0, struct ntb_dev *VAR_1)
{
 struct tool_ctx *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_8(VAR_2);
 if (VAR_3 != 0)
  goto err_clear_data;

 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3 != 0)
  goto err_clear_data;

 VAR_3 = FUNC_9(VAR_2);
 if (VAR_3 != 0)
  goto err_clear_mws;

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3 != 0)
  goto err_clear_mws;

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3 != 0)
  goto err_clear_mws;

 FUNC_10(VAR_2);

 return 0;

err_clear_mws:
 FUNC_3(VAR_2);

err_clear_data:
 FUNC_2(VAR_2);

 return VAR_3;
}
