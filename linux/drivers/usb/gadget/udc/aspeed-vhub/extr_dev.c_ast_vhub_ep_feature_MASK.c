
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int is_in; int stalled; scalar_t__ is_iso; int enabled; } ;
struct TYPE_3__ {int desc; } ;
struct ast_vhub_ep {TYPE_2__ epn; TYPE_1__ ep; } ;
struct ast_vhub_dev {struct ast_vhub_ep** epns; } ;


 int VAR_0 ;
 int FUNC_0 (struct ast_vhub_dev*,char*,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ast_vhub_ep*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct ast_vhub_dev *VAR_7,
          u16 VAR_8, u16 VAR_9, bool VAR_10)
{
 struct ast_vhub_ep *VAR_11;
 int VAR_12;

 VAR_12 = VAR_8 & VAR_3;
 FUNC_0(VAR_7, "%s_FEATURE(ep%d val=%02x)\n",
      VAR_10 ? "SET" : "CLEAR", VAR_12, VAR_9);
 if (VAR_12 == 0)
  return VAR_4;
 if (VAR_12 >= VAR_0 || !VAR_7->epns[VAR_12 - 1])
  return VAR_6;
 if (VAR_9 != VAR_2)
  return VAR_5;

 VAR_11 = VAR_7->epns[VAR_12 - 1];
 if (FUNC_1(!VAR_11))
  return VAR_6;

 if (!VAR_11->epn.enabled || !VAR_11->ep.desc || VAR_11->epn.is_iso ||
     VAR_11->epn.is_in != !!(VAR_8 & VAR_1))
  return VAR_6;

 FUNC_0(VAR_7, "%s stall on EP %d\n",
      VAR_10 ? "setting" : "clearing", VAR_12);
 VAR_11->epn.stalled = VAR_10;
 FUNC_2(VAR_11);

 return VAR_4;
}
