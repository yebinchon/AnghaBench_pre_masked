
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct firmware {size_t size; scalar_t__ data; } ;
struct TYPE_4__ {int len; void* data; } ;
struct brcmf_fw_item {int flags; TYPE_2__ nv_data; } ;
struct brcmf_fw {size_t curpos; TYPE_1__* req; int dev; } ;
struct TYPE_3__ {int bus_nr; int domain_nr; struct brcmf_fw_item* items; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (size_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,void*,...) ;
 int * FUNC_3 (size_t*) ;
 void* FUNC_4 (int *,size_t,int *,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct firmware const*) ;

__attribute__((used)) static int FUNC_8(const struct firmware *VAR_3, void *VAR_4)
{
 struct brcmf_fw *VAR_5 = VAR_4;
 struct brcmf_fw_item *VAR_6;
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 u32 VAR_9 = 0;
 void *VAR_10 = ((void*)0);
 u8 *VAR_11 = ((void*)0);
 size_t VAR_12;

 FUNC_2(VAR_2, "enter: dev=%s\n", FUNC_5(VAR_5->dev));

 VAR_6 = &VAR_5->req->items[VAR_5->curpos];

 if (VAR_3 && VAR_3->data) {
  VAR_11 = (u8 *)VAR_3->data;
  VAR_12 = VAR_3->size;
 } else {
  if ((VAR_11 = FUNC_0(&VAR_12)))
   VAR_7 = 1;
  else if ((VAR_11 = FUNC_3(&VAR_12)))
   VAR_8 = 1;
  else if (!(VAR_6->flags & VAR_0))
   goto fail;
 }

 if (VAR_11)
  VAR_10 = FUNC_4(VAR_11, VAR_12, &VAR_9,
          VAR_5->req->domain_nr,
          VAR_5->req->bus_nr);

 if (VAR_7)
  FUNC_1(VAR_11);
 if (VAR_8)
  FUNC_6(VAR_11);

 FUNC_7(VAR_3);
 if (!VAR_10 && !(VAR_6->flags & VAR_0))
  goto fail;

 FUNC_2(VAR_2, "nvram %p len %d\n", VAR_10, VAR_9);
 VAR_6->nv_data.data = VAR_10;
 VAR_6->nv_data.len = VAR_9;
 return 0;

fail:
 return -VAR_1;
}
