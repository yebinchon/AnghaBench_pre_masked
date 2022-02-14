
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct brcmf_fw_request {struct brcmf_fw_item* items; } ;
struct brcmf_fw_item {int path; } ;
struct brcmf_fw {void (* done ) (struct device*,int,struct brcmf_fw_request*) ;struct device* dev; struct brcmf_fw_request* req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,struct brcmf_fw*) ;
 int FUNC_2 (struct brcmf_fw_request*) ;
 int FUNC_3 (struct device*) ;
 struct brcmf_fw* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int,int ,struct device*,int ,struct brcmf_fw*,int (*) (int *,struct brcmf_fw*)) ;

int FUNC_6(struct device *VAR_5, struct brcmf_fw_request *VAR_6,
      void (*VAR_7)(struct device *VAR_8, int VAR_9,
      struct brcmf_fw_request *VAR_10))
{
 struct brcmf_fw_item *VAR_11 = &VAR_6->items[0];
 struct brcmf_fw *VAR_12;
 int VAR_13;

 FUNC_0(VAR_4, "enter: dev=%s\n", FUNC_3(VAR_5));
 if (!VAR_7)
  return -VAR_0;

 if (!FUNC_2(VAR_6))
  return -VAR_0;

 VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->dev = VAR_5;
 VAR_12->req = VAR_6;
 VAR_12->done = VAR_7;

 VAR_13 = FUNC_5(VAR_3, 1, VAR_11->path,
          VAR_12->dev, VAR_2, VAR_12,
          FUNC_1);
 if (VAR_13 < 0)
  FUNC_1(((void*)0), VAR_12);

 return 0;
}
