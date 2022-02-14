
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct brcmf_pub {int ops; scalar_t__ hdrlen; int proto_block; int * if2bss; } ;
struct brcmf_bus {struct brcmf_pub* drvr; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct brcmf_pub*,char*,...) ;
 int FUNC_2 (struct brcmf_pub*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct brcmf_pub*) ;
 int FUNC_6 (struct brcmf_pub*,int ,int ) ;
 int FUNC_7 (struct brcmf_pub*) ;
 int VAR_3 ;
 struct brcmf_bus* FUNC_8 (struct device*) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct device *VAR_4)
{
 struct brcmf_bus *VAR_5 = FUNC_8(VAR_4);
 struct brcmf_pub *VAR_6 = VAR_5->drvr;
 int VAR_7 = 0;
 int VAR_8;

 FUNC_3(VAR_2, "Enter\n");

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->if2bss); VAR_8++)
  VAR_6->if2bss[VAR_8] = VAR_0;

 FUNC_9(&VAR_6->proto_block);


 VAR_6->hdrlen = 0;


 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7 != 0) {
  FUNC_1(VAR_6, "brcmf_prot_attach failed\n");
  goto fail;
 }


 FUNC_6(VAR_6, VAR_1,
       VAR_3);


 FUNC_5(VAR_6);

 VAR_7 = FUNC_2(VAR_6, VAR_6->ops);
 if (VAR_7 != 0) {
  FUNC_1(VAR_6, "dongle is not responding: err=%d\n", VAR_7);
  goto fail;
 }

 return 0;

fail:
 FUNC_4(VAR_4);

 return VAR_7;
}
