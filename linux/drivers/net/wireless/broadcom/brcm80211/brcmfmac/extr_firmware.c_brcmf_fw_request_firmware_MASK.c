
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firmware {int dummy; } ;
struct brcmf_fw_item {scalar_t__ type; char* path; } ;
struct brcmf_fw {size_t curpos; int dev; TYPE_1__* req; } ;
struct TYPE_2__ {char* board_type; struct brcmf_fw_item* items; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct firmware const**,char*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(const struct firmware **VAR_2,
         struct brcmf_fw *VAR_3)
{
 struct brcmf_fw_item *VAR_4 = &VAR_3->req->items[VAR_3->curpos];
 int VAR_5;


 if (VAR_4->type == VAR_1 && VAR_3->req->board_type) {
  char VAR_6[VAR_0];

  FUNC_2(VAR_6, VAR_4->path, VAR_0);

  VAR_6[FUNC_3(VAR_6) - 4] = 0;
  FUNC_1(VAR_6, ".", VAR_0);
  FUNC_1(VAR_6, VAR_3->req->board_type, VAR_0);
  FUNC_1(VAR_6, ".txt", VAR_0);

  VAR_5 = FUNC_0(VAR_2, VAR_6, VAR_3->dev);
  if (VAR_5 == 0)
   return VAR_5;
 }

 return FUNC_0(VAR_2, VAR_4->path, VAR_3->dev);
}
