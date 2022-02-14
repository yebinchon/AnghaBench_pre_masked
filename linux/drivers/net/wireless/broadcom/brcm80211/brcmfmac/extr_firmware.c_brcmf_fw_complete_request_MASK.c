
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int dummy; } ;
struct brcmf_fw_item {int type; int flags; struct firmware const* binary; int path; } ;
struct brcmf_fw {size_t curpos; TYPE_1__* req; } ;
struct TYPE_2__ {struct brcmf_fw_item* items; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct firmware const*,struct brcmf_fw*) ;
 int FUNC_3 (struct firmware const*) ;

__attribute__((used)) static int FUNC_4(const struct firmware *VAR_4,
         struct brcmf_fw *VAR_5)
{
 struct brcmf_fw_item *VAR_6 = &VAR_5->req->items[VAR_5->curpos];
 int VAR_7 = 0;

 FUNC_0(VAR_3, "firmware %s %sfound\n", VAR_6->path, VAR_4 ? "" : "not ");

 switch (VAR_6->type) {
 case 128:
  VAR_7 = FUNC_2(VAR_4, VAR_5);
  break;
 case 129:
  if (VAR_4)
   VAR_6->binary = VAR_4;
  else
   VAR_7 = -VAR_2;
  break;
 default:

  FUNC_1("unknown fw type: %d\n", VAR_6->type);
  FUNC_3(VAR_4);
  VAR_7 = -VAR_1;
 }

 return (VAR_6->flags & VAR_0) ? 0 : VAR_7;
}
