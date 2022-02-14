
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct brcmf_sdio_dev {TYPE_2__* func2; int bus; TYPE_2__* func1; } ;
struct TYPE_7__ {TYPE_1__* card; int enable_timeout; } ;
struct TYPE_6__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct brcmf_sdio_dev*) ;
 int FUNC_2 (struct brcmf_sdio_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct brcmf_sdio_dev*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_9(struct brcmf_sdio_dev *VAR_4)
{
 int VAR_5 = 0;

 FUNC_5(VAR_4->func1);

 VAR_5 = FUNC_8(VAR_4->func1, VAR_1);
 if (VAR_5) {
  FUNC_0("Failed to set F1 blocksize\n");
  FUNC_7(VAR_4->func1);
  goto out;
 }
 VAR_5 = FUNC_8(VAR_4->func2, VAR_2);
 if (VAR_5) {
  FUNC_0("Failed to set F2 blocksize\n");
  FUNC_7(VAR_4->func1);
  goto out;
 }


 VAR_4->func2->enable_timeout = VAR_3;


 VAR_5 = FUNC_6(VAR_4->func1);
 FUNC_7(VAR_4->func1);
 if (VAR_5) {
  FUNC_0("Failed to enable F1: err=%d\n", VAR_5);
  goto out;
 }

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  goto out;


 VAR_4->bus = FUNC_1(VAR_4);
 if (!VAR_4->bus) {
  VAR_5 = -VAR_0;
  goto out;
 }
 FUNC_3(VAR_4->func2->card->host);
out:
 if (VAR_5)
  FUNC_4(VAR_4);

 return VAR_5;
}
